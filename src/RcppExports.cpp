// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rvMFcpp
arma::mat rvMFcpp(const int& size, const arma::vec& theta);
RcppExport SEXP _PartialNetwork_rvMFcpp(SEXP sizeSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(rvMFcpp(size, theta));
    return rcpp_result_gen;
END_RCPP
}
// logCpvMFcpp
double logCpvMFcpp(const int& p, const double& k);
RcppExport SEXP _PartialNetwork_logCpvMFcpp(SEXP pSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const double& >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(logCpvMFcpp(p, k));
    return rcpp_result_gen;
END_RCPP
}
// dvMFcpp
NumericVector dvMFcpp(const arma::mat& z, const arma::vec& theta, const bool& logp);
RcppExport SEXP _PartialNetwork_dvMFcpp(SEXP zSEXP, SEXP thetaSEXP, SEXP logpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const bool& >::type logp(logpSEXP);
    rcpp_result_gen = Rcpp::wrap(dvMFcpp(z, theta, logp));
    return rcpp_result_gen;
END_RCPP
}
// updateGP
List updateGP(const arma::mat& Y, const arma::mat& trait, const arma::mat& z0, const arma::mat& v0, const arma::vec& d0, const arma::rowvec& b0, const arma::rowvec& eta0, const double& zeta0, const arma::uvec& fixv, const arma::uvec& consb, const double& nsimul, const bool& fdegrees, const bool& fzeta, const NumericVector& hyperparms, const NumericVector& target, const NumericVector& jumpmin, const NumericVector& jumpmax, const int& c, const bool& display_progress);
RcppExport SEXP _PartialNetwork_updateGP(SEXP YSEXP, SEXP traitSEXP, SEXP z0SEXP, SEXP v0SEXP, SEXP d0SEXP, SEXP b0SEXP, SEXP eta0SEXP, SEXP zeta0SEXP, SEXP fixvSEXP, SEXP consbSEXP, SEXP nsimulSEXP, SEXP fdegreesSEXP, SEXP fzetaSEXP, SEXP hyperparmsSEXP, SEXP targetSEXP, SEXP jumpminSEXP, SEXP jumpmaxSEXP, SEXP cSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type trait(traitSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type z0(z0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type v0(v0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d0(d0SEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type b0(b0SEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type eta0(eta0SEXP);
    Rcpp::traits::input_parameter< const double& >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type fixv(fixvSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type consb(consbSEXP);
    Rcpp::traits::input_parameter< const double& >::type nsimul(nsimulSEXP);
    Rcpp::traits::input_parameter< const bool& >::type fdegrees(fdegreesSEXP);
    Rcpp::traits::input_parameter< const bool& >::type fzeta(fzetaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type hyperparms(hyperparmsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type target(targetSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type jumpmin(jumpminSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type jumpmax(jumpmaxSEXP);
    Rcpp::traits::input_parameter< const int& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const bool& >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(updateGP(Y, trait, z0, v0, d0, b0, eta0, zeta0, fixv, consb, nsimul, fdegrees, fzeta, hyperparms, target, jumpmin, jumpmax, c, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// dnetwork1
arma::mat dnetwork1(const double& T, const double& P, List& z, const arma::mat& d, const arma::vec& zeta, const arma::mat& traitard, const unsigned int Metrostart, const bool& display_progress);
RcppExport SEXP _PartialNetwork_dnetwork1(SEXP TSEXP, SEXP PSEXP, SEXP zSEXP, SEXP dSEXP, SEXP zetaSEXP, SEXP traitardSEXP, SEXP MetrostartSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const double& >::type P(PSEXP);
    Rcpp::traits::input_parameter< List& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type traitard(traitardSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type Metrostart(MetrostartSEXP);
    Rcpp::traits::input_parameter< const bool& >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(dnetwork1(T, P, z, d, zeta, traitard, Metrostart, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// dnetwork2
arma::mat dnetwork2(const double& T, const double& P, List& z, const arma::mat& d, const arma::vec& zeta, const arma::mat& traitard, const arma::mat& traitnonard, const unsigned int& M, const unsigned int& Metrostart, const bool& display_progress);
RcppExport SEXP _PartialNetwork_dnetwork2(SEXP TSEXP, SEXP PSEXP, SEXP zSEXP, SEXP dSEXP, SEXP zetaSEXP, SEXP traitardSEXP, SEXP traitnonardSEXP, SEXP MSEXP, SEXP MetrostartSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type T(TSEXP);
    Rcpp::traits::input_parameter< const double& >::type P(PSEXP);
    Rcpp::traits::input_parameter< List& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type traitard(traitardSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type traitnonard(traitnonardSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const unsigned int& >::type Metrostart(MetrostartSEXP);
    Rcpp::traits::input_parameter< const bool& >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(dnetwork2(T, P, z, d, zeta, traitard, traitnonard, M, Metrostart, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// peerMCMC
List peerMCMC(const List& y, const List& X, const List& Xone, List& Gnorm, const int& M, const IntegerVector& N, const int& kbeta, const int& kgamma, const List& prior, const arma::vec& theta0, const arma::mat& invsigmatheta, const double& zeta0, const double& invsigma2zeta, const double& a, const double& b, const arma::vec parms0, int iteration, const double& target, const double& jumpmin, const double& jumpmax, const double& c, const int& progress);
RcppExport SEXP _PartialNetwork_peerMCMC(SEXP ySEXP, SEXP XSEXP, SEXP XoneSEXP, SEXP GnormSEXP, SEXP MSEXP, SEXP NSEXP, SEXP kbetaSEXP, SEXP kgammaSEXP, SEXP priorSEXP, SEXP theta0SEXP, SEXP invsigmathetaSEXP, SEXP zeta0SEXP, SEXP invsigma2zetaSEXP, SEXP aSEXP, SEXP bSEXP, SEXP parms0SEXP, SEXP iterationSEXP, SEXP targetSEXP, SEXP jumpminSEXP, SEXP jumpmaxSEXP, SEXP cSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List& >::type Xone(XoneSEXP);
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type kbeta(kbetaSEXP);
    Rcpp::traits::input_parameter< const int& >::type kgamma(kgammaSEXP);
    Rcpp::traits::input_parameter< const List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type invsigmatheta(invsigmathetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< const double& >::type invsigma2zeta(invsigma2zetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type parms0(parms0SEXP);
    Rcpp::traits::input_parameter< int >::type iteration(iterationSEXP);
    Rcpp::traits::input_parameter< const double& >::type target(targetSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmin(jumpminSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmax(jumpmaxSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int& >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(peerMCMC(y, X, Xone, Gnorm, M, N, kbeta, kgamma, prior, theta0, invsigmatheta, zeta0, invsigma2zeta, a, b, parms0, iteration, target, jumpmin, jumpmax, c, progress));
    return rcpp_result_gen;
END_RCPP
}
// peerMCMCblock
List peerMCMCblock(const List& y, const List& X, const List& Xone, List& Gnorm, const int& M, const IntegerVector& N, const int& kbeta, const int& kgamma, const List& prior, const arma::vec& theta0, const arma::mat& invsigmatheta, const double& zeta0, const double& invsigma2zeta, const double& a, const double& b, const arma::vec parms0, int iteration, const double& target, const double& jumpmin, const double& jumpmax, const double& c, const int& nupmax, const int& progress);
RcppExport SEXP _PartialNetwork_peerMCMCblock(SEXP ySEXP, SEXP XSEXP, SEXP XoneSEXP, SEXP GnormSEXP, SEXP MSEXP, SEXP NSEXP, SEXP kbetaSEXP, SEXP kgammaSEXP, SEXP priorSEXP, SEXP theta0SEXP, SEXP invsigmathetaSEXP, SEXP zeta0SEXP, SEXP invsigma2zetaSEXP, SEXP aSEXP, SEXP bSEXP, SEXP parms0SEXP, SEXP iterationSEXP, SEXP targetSEXP, SEXP jumpminSEXP, SEXP jumpmaxSEXP, SEXP cSEXP, SEXP nupmaxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List& >::type Xone(XoneSEXP);
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type kbeta(kbetaSEXP);
    Rcpp::traits::input_parameter< const int& >::type kgamma(kgammaSEXP);
    Rcpp::traits::input_parameter< const List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type invsigmatheta(invsigmathetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< const double& >::type invsigma2zeta(invsigma2zetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type parms0(parms0SEXP);
    Rcpp::traits::input_parameter< int >::type iteration(iterationSEXP);
    Rcpp::traits::input_parameter< const double& >::type target(targetSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmin(jumpminSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmax(jumpmaxSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int& >::type nupmax(nupmaxSEXP);
    Rcpp::traits::input_parameter< const int& >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(peerMCMCblock(y, X, Xone, Gnorm, M, N, kbeta, kgamma, prior, theta0, invsigmatheta, zeta0, invsigma2zeta, a, b, parms0, iteration, target, jumpmin, jumpmax, c, nupmax, progress));
    return rcpp_result_gen;
END_RCPP
}
// peerMCMCnoc
List peerMCMCnoc(const List& y, const List& V, List& Gnorm, const int& M, const IntegerVector& N, const int& kbeta, const List& prior, const arma::vec& theta0, const arma::mat& invsigmatheta, const double& zeta0, const double& invsigma2zeta, const double& a, const double& b, const arma::vec parms0, int iteration, const double& target, const double& jumpmin, const double& jumpmax, const double& c, const int& progress);
RcppExport SEXP _PartialNetwork_peerMCMCnoc(SEXP ySEXP, SEXP VSEXP, SEXP GnormSEXP, SEXP MSEXP, SEXP NSEXP, SEXP kbetaSEXP, SEXP priorSEXP, SEXP theta0SEXP, SEXP invsigmathetaSEXP, SEXP zeta0SEXP, SEXP invsigma2zetaSEXP, SEXP aSEXP, SEXP bSEXP, SEXP parms0SEXP, SEXP iterationSEXP, SEXP targetSEXP, SEXP jumpminSEXP, SEXP jumpmaxSEXP, SEXP cSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type V(VSEXP);
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type kbeta(kbetaSEXP);
    Rcpp::traits::input_parameter< const List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type invsigmatheta(invsigmathetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< const double& >::type invsigma2zeta(invsigma2zetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type parms0(parms0SEXP);
    Rcpp::traits::input_parameter< int >::type iteration(iterationSEXP);
    Rcpp::traits::input_parameter< const double& >::type target(targetSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmin(jumpminSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmax(jumpmaxSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int& >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(peerMCMCnoc(y, V, Gnorm, M, N, kbeta, prior, theta0, invsigmatheta, zeta0, invsigma2zeta, a, b, parms0, iteration, target, jumpmin, jumpmax, c, progress));
    return rcpp_result_gen;
END_RCPP
}
// peerMCMCblocknoc
List peerMCMCblocknoc(const List& y, const List& V, List& Gnorm, const int& M, const IntegerVector& N, const int& kbeta, const List& prior, const arma::vec& theta0, const arma::mat& invsigmatheta, const double& zeta0, const double& invsigma2zeta, const double& a, const double& b, const arma::vec parms0, int iteration, const double& target, const double& jumpmin, const double& jumpmax, const double& c, const int& nupmax, const int& progress);
RcppExport SEXP _PartialNetwork_peerMCMCblocknoc(SEXP ySEXP, SEXP VSEXP, SEXP GnormSEXP, SEXP MSEXP, SEXP NSEXP, SEXP kbetaSEXP, SEXP priorSEXP, SEXP theta0SEXP, SEXP invsigmathetaSEXP, SEXP zeta0SEXP, SEXP invsigma2zetaSEXP, SEXP aSEXP, SEXP bSEXP, SEXP parms0SEXP, SEXP iterationSEXP, SEXP targetSEXP, SEXP jumpminSEXP, SEXP jumpmaxSEXP, SEXP cSEXP, SEXP nupmaxSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type V(VSEXP);
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type kbeta(kbetaSEXP);
    Rcpp::traits::input_parameter< const List& >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type invsigmatheta(invsigmathetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type zeta0(zeta0SEXP);
    Rcpp::traits::input_parameter< const double& >::type invsigma2zeta(invsigma2zetaSEXP);
    Rcpp::traits::input_parameter< const double& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type parms0(parms0SEXP);
    Rcpp::traits::input_parameter< int >::type iteration(iterationSEXP);
    Rcpp::traits::input_parameter< const double& >::type target(targetSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmin(jumpminSEXP);
    Rcpp::traits::input_parameter< const double& >::type jumpmax(jumpmaxSEXP);
    Rcpp::traits::input_parameter< const double& >::type c(cSEXP);
    Rcpp::traits::input_parameter< const int& >::type nupmax(nupmaxSEXP);
    Rcpp::traits::input_parameter< const int& >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(peerMCMCblocknoc(y, V, Gnorm, M, N, kbeta, prior, theta0, invsigmatheta, zeta0, invsigma2zeta, a, b, parms0, iteration, target, jumpmin, jumpmax, c, nupmax, progress));
    return rcpp_result_gen;
END_RCPP
}
// Prob
arma::mat Prob(arma::vec& nu, arma::vec& d, double& zeta, arma::mat& z);
RcppExport SEXP _PartialNetwork_Prob(SEXP nuSEXP, SEXP dSEXP, SEXP zetaSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< double& >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(Prob(nu, d, zeta, z));
    return rcpp_result_gen;
END_RCPP
}
// Graph
arma::umat Graph(arma::mat& prob);
RcppExport SEXP _PartialNetwork_Graph(SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(Graph(prob));
    return rcpp_result_gen;
END_RCPP
}
// instruments1
List instruments1(const arma::mat& dnetwork, arma::mat& X, arma::vec& y, const int& S, const int& pow);
RcppExport SEXP _PartialNetwork_instruments1(SEXP dnetworkSEXP, SEXP XSEXP, SEXP ySEXP, SEXP SSEXP, SEXP powSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type dnetwork(dnetworkSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const int& >::type pow(powSEXP);
    rcpp_result_gen = Rcpp::wrap(instruments1(dnetwork, X, y, S, pow));
    return rcpp_result_gen;
END_RCPP
}
// instruments2
List instruments2(const arma::mat& dnetwork, arma::mat& X, const int& S, const int& pow);
RcppExport SEXP _PartialNetwork_instruments2(SEXP dnetworkSEXP, SEXP XSEXP, SEXP SSEXP, SEXP powSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type dnetwork(dnetworkSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const int& >::type pow(powSEXP);
    rcpp_result_gen = Rcpp::wrap(instruments2(dnetwork, X, S, pow));
    return rcpp_result_gen;
END_RCPP
}
// flistGnorm1
List flistGnorm1(List& dnetwork, arma::vec y, arma::mat Xone, arma::mat X, const int& M);
RcppExport SEXP _PartialNetwork_flistGnorm1(SEXP dnetworkSEXP, SEXP ySEXP, SEXP XoneSEXP, SEXP XSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type dnetwork(dnetworkSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xone(XoneSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(flistGnorm1(dnetwork, y, Xone, X, M));
    return rcpp_result_gen;
END_RCPP
}
// flistGnorm2
List flistGnorm2(List& dnetwork, List& Gnorm, arma::vec y, arma::mat Xone, arma::mat X, const int& M);
RcppExport SEXP _PartialNetwork_flistGnorm2(SEXP dnetworkSEXP, SEXP GnormSEXP, SEXP ySEXP, SEXP XoneSEXP, SEXP XSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type dnetwork(dnetworkSEXP);
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xone(XoneSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(flistGnorm2(dnetwork, Gnorm, y, Xone, X, M));
    return rcpp_result_gen;
END_RCPP
}
// flistGnorm1nc
List flistGnorm1nc(List& dnetwork, arma::vec y, arma::mat Xone, const int& M);
RcppExport SEXP _PartialNetwork_flistGnorm1nc(SEXP dnetworkSEXP, SEXP ySEXP, SEXP XoneSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type dnetwork(dnetworkSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xone(XoneSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(flistGnorm1nc(dnetwork, y, Xone, M));
    return rcpp_result_gen;
END_RCPP
}
// flistGnorm2nc
List flistGnorm2nc(List& dnetwork, List& Gnorm, arma::vec y, arma::mat Xone, const int& M);
RcppExport SEXP _PartialNetwork_flistGnorm2nc(SEXP dnetworkSEXP, SEXP GnormSEXP, SEXP ySEXP, SEXP XoneSEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type dnetwork(dnetworkSEXP);
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xone(XoneSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(flistGnorm2nc(dnetwork, Gnorm, y, Xone, M));
    return rcpp_result_gen;
END_RCPP
}
// sartpoint
arma::vec sartpoint(List& Gnorm, const int& M, const IntegerVector& N, const int& kbeta, const int& kgamma, const List& y, const List& X, const List& Xone);
RcppExport SEXP _PartialNetwork_sartpoint(SEXP GnormSEXP, SEXP MSEXP, SEXP NSEXP, SEXP kbetaSEXP, SEXP kgammaSEXP, SEXP ySEXP, SEXP XSEXP, SEXP XoneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type kbeta(kbetaSEXP);
    Rcpp::traits::input_parameter< const int& >::type kgamma(kgammaSEXP);
    Rcpp::traits::input_parameter< const List& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List& >::type Xone(XoneSEXP);
    rcpp_result_gen = Rcpp::wrap(sartpoint(Gnorm, M, N, kbeta, kgamma, y, X, Xone));
    return rcpp_result_gen;
END_RCPP
}
// sartpointnoc
arma::vec sartpointnoc(List& Gnorm, const int& M, const IntegerVector& N, const int& kbeta, const List& y, const List& Xone);
RcppExport SEXP _PartialNetwork_sartpointnoc(SEXP GnormSEXP, SEXP MSEXP, SEXP NSEXP, SEXP kbetaSEXP, SEXP ySEXP, SEXP XoneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type Gnorm(GnormSEXP);
    Rcpp::traits::input_parameter< const int& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type N(NSEXP);
    Rcpp::traits::input_parameter< const int& >::type kbeta(kbetaSEXP);
    Rcpp::traits::input_parameter< const List& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const List& >::type Xone(XoneSEXP);
    rcpp_result_gen = Rcpp::wrap(sartpointnoc(Gnorm, M, N, kbeta, y, Xone));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PartialNetwork_rvMFcpp", (DL_FUNC) &_PartialNetwork_rvMFcpp, 2},
    {"_PartialNetwork_logCpvMFcpp", (DL_FUNC) &_PartialNetwork_logCpvMFcpp, 2},
    {"_PartialNetwork_dvMFcpp", (DL_FUNC) &_PartialNetwork_dvMFcpp, 3},
    {"_PartialNetwork_updateGP", (DL_FUNC) &_PartialNetwork_updateGP, 19},
    {"_PartialNetwork_dnetwork1", (DL_FUNC) &_PartialNetwork_dnetwork1, 8},
    {"_PartialNetwork_dnetwork2", (DL_FUNC) &_PartialNetwork_dnetwork2, 10},
    {"_PartialNetwork_peerMCMC", (DL_FUNC) &_PartialNetwork_peerMCMC, 22},
    {"_PartialNetwork_peerMCMCblock", (DL_FUNC) &_PartialNetwork_peerMCMCblock, 23},
    {"_PartialNetwork_peerMCMCnoc", (DL_FUNC) &_PartialNetwork_peerMCMCnoc, 20},
    {"_PartialNetwork_peerMCMCblocknoc", (DL_FUNC) &_PartialNetwork_peerMCMCblocknoc, 21},
    {"_PartialNetwork_Prob", (DL_FUNC) &_PartialNetwork_Prob, 4},
    {"_PartialNetwork_Graph", (DL_FUNC) &_PartialNetwork_Graph, 1},
    {"_PartialNetwork_instruments1", (DL_FUNC) &_PartialNetwork_instruments1, 5},
    {"_PartialNetwork_instruments2", (DL_FUNC) &_PartialNetwork_instruments2, 4},
    {"_PartialNetwork_flistGnorm1", (DL_FUNC) &_PartialNetwork_flistGnorm1, 5},
    {"_PartialNetwork_flistGnorm2", (DL_FUNC) &_PartialNetwork_flistGnorm2, 6},
    {"_PartialNetwork_flistGnorm1nc", (DL_FUNC) &_PartialNetwork_flistGnorm1nc, 4},
    {"_PartialNetwork_flistGnorm2nc", (DL_FUNC) &_PartialNetwork_flistGnorm2nc, 5},
    {"_PartialNetwork_sartpoint", (DL_FUNC) &_PartialNetwork_sartpoint, 8},
    {"_PartialNetwork_sartpointnoc", (DL_FUNC) &_PartialNetwork_sartpointnoc, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_PartialNetwork(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
