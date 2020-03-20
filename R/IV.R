#' @title Instrument Variables for SAR model
#' @description \code{sim.IV} simulates Instrument Variables (IV) for linear-in-mean SAR model from the network distribution following Bramoullé et al. (2009).
#' @param dnetwork is a square matrix where the (i, j)th position is the probability of the event "i knows j".
#' @param X is a matrix of the individual observable characteristics.
#' @param y (optional) is the endogenous variable as a vector. When `y` is given, the outpout of the function includes `Gy` where `G` is the row-normalized network matrix.
#' @param replication (optional, default = 1) is the number of repetitions (see details).
#' @param power (optional, default = 1) is the number of powers of the interaction matrix used to generate the instruments (see details).
#' 
#' @return A list of `replication` components. Each component is a list containing `G1y` (if the argument `y` was provided), `G1X` and `G2X` where `G1` and `G2` are independent draws of network from the distribution (see details).
#' \item{G1y}{is an approximation of \eqn{Gy}.}
#' \item{G1X}{is an approximation of \eqn{G^pX}{G x G x ... x G x X}
#' with the same network draw as that used in `G1y`. `G1X` is an array of dimension \eqn{N \times K_x \times power}{N x Kx x power}, where \eqn{K_x}{Kx} is the number of column in 
#' `X`. For any \eqn{p \in \{1, 2, ..., power\}}{p = 1, 2, ..., power}, the approximation of \eqn{G^pX}{G x G ... x G x X}
#' is given by \code{G1X[,,p]}.}
#' \item{G2X}{is an approximation of \eqn{G^pX}{G x G x ... x G x X}
#' with a different different network. `G2X` is an array of dimension \eqn{N \times K_x \times power}{N x Kx x power}, where \eqn{K_x}{Kx} is the number of column in
#' `X`. For any \eqn{p \in \{1, 2, ..., power\}}{p = 1, 2, ..., power}, the approximation of \eqn{G^pX}{G x G ... x G x X}
#' is given by \code{G2X[,,p]}.}
#' 
#' 
#' @details Bramoullé et al. (2009) prove that \eqn{(I - \alpha G)^{-1}}{(I - \alpha G)^{-1}} is an optimal intrument for the linear-in-mean SAR model, where \eqn{\alpha} is the peer effect. 
#' As \eqn{\alpha} is not known in practice, one can used \eqn{GX}, \eqn{G^2X}, ..., \eqn{G^P X}, where \eqn{P} is the maximal power desired.
#' \code{sim.IV} simulates these intruments when only the distribution of the network is 
#' available. The argument `power` is the maximal power desired.\cr
#' In the case where some explanatory variables like \eqn{Gy} and \eqn{GX} are not obseved.
#' Boucher and Houndetoungan (2019) show that one network drawn from the distribution can be used to approximate \eqn{Gy} and \eqn{GX}
#' as explanatory variable, but the same network should not be used to approximate the instruments. Thus, each component in the function's output gives
#' `G1y` and `G1X` computed with the same network (can be used as explanatory variables) and `G2X` computed with another network (can be used as instrument).
#' For inference issue this process can be replicated several times and the argument `replication` can be used to set the number of replications desired.
#' @references 
#' Boucher, V., & Houndetoungan, A. (2019). Estimating peer effects using partial network data. \emph{Draft avaliable at} \url{https://houndetoungan.wixsite.com/aristide/research}.
#' @references 
#' Bramoullé, Y., Djebbari, H., & Fortin, B. (2009). Identification of peer effects through social networks. \emph{Journal of econometrics}, 150(1), 41-55. \url{https://www.sciencedirect.com/science/article/abs/pii/S0304407609000335}
#' @examples 
#' \dontrun{
#' set.seed(123)
#' library(AER)
#' # initialize parameters
#' # size of the group
#' N             <- 500      
#' # value of lambda (precision parameter for the network formation model)
#' lambda        <- 0.2   
#' # individual effects
#' beta          <- c(2, 1, 1.5) 
#' # contextual effects
#' gamma         <- c(5, -3) 
#' # endogenous effect
#' alpha         <- 0.4
#' # std-dev errors
#' se            <- 1
#' # heterogeneity of the linking probabilities
#' c             <- rnorm(N*N, 0, 1) 
#' 
#' # network probabilities
#' # generate linking probabilities
#' Probabilities       <- matrix(exp(c / lambda) / (1 + exp(c / lambda)), N)
#' #' # no self-link
#' diag(Probabilities) <- 0 
#' 
#' # generate data
#' # generate the 'observed network'
#' G         <- sim.network(Probabilities) 
#' rs        <- rowSums(G)
#' rs[rs==0] <- 1
#' # row-normalize
#' W         <- G/rs
#' # covariates
#' X         <- cbind(rnorm(N,0,5),rpois(N,6)) 
#' # endogenous variable, no contextual effect
#' y         <- solve(diag(rep(1,N))-alpha*W)%*%(cbind(rep(1,N), X)%*%beta + rnorm(N,0,se)) 
#' 
#' # generate instruments 
#' instr     <- sim.IV(Probabilities, X, y, replication = 1, power = 2)
#' 
#' GY1c1     <- instr[[1]]$G1y       # proxy for Gy (draw 1)
#' GXc1      <- instr[[1]]$G1X[,,1]  # proxy for GX (draw 1)
#' G2Xc1     <- instr[[1]]$G1X[,,2]  # proxy for GGX (draw 1)
#' GXc2      <- instr[[1]]$G2X[,,1]  # proxy for GX (draw 2)
#' G2Xc2     <- instr[[1]]$G2X[,,2]  # proxy for GGX (draw 2)
#' 
#' # build dataset
#' # keep only instrument constructed using a different draw than the one used to proxy Gy
#' dataset           <- as.data.frame(cbind(y,X,GY1c1,GXc2,G2Xc2)) 
#' # rename variables
#' colnames(dataset) <- c("Y","X1","X2","Gy1","Z1","Z2","ZZ1","ZZ2")
#' results           <- ivreg(Y~ X1 + X2 + Gy1 | X1 + X2 + Z1 + Z2 + ZZ1 + ZZ2, data = dataset)
#' summary(results)
#' }
#' @seealso 
#' \code{\link{mcmcSAR}}
#' @export

sim.IV  <- function(dnetwork, X, y = NULL, replication = 1L, power = 1L) {
  out   <- NULL
  if (is.null(y)) {
    out <- instruments2(dnetwork, X, S = replication, pow = power)
  } else {
    out <- instruments1(dnetwork, X, y, S = replication, pow = power)
  }
  out
}