// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// DFPmcmc
List DFPmcmc(int iterations, int thin, List Y, List T, List Z, arma::cube X, arma::cube Beta, arma::cube Lambda2, arma::cube Nulam, arma::mat Gamma, arma::mat C, arma::mat Tau2, arma::mat Nutau, arma::mat Eta, arma::mat Theta, arma::mat IDstart, arma::mat IDend, arma::mat SigEta, arma::mat SigTheta, arma::vec MuEta, double a);
RcppExport SEXP _DFPmcmc_DFPmcmc(SEXP iterationsSEXP, SEXP thinSEXP, SEXP YSEXP, SEXP TSEXP, SEXP ZSEXP, SEXP XSEXP, SEXP BetaSEXP, SEXP Lambda2SEXP, SEXP NulamSEXP, SEXP GammaSEXP, SEXP CSEXP, SEXP Tau2SEXP, SEXP NutauSEXP, SEXP EtaSEXP, SEXP ThetaSEXP, SEXP IDstartSEXP, SEXP IDendSEXP, SEXP SigEtaSEXP, SEXP SigThetaSEXP, SEXP MuEtaSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type T(TSEXP);
    Rcpp::traits::input_parameter< List >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Beta(BetaSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Lambda2(Lambda2SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Nulam(NulamSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau2(Tau2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Nutau(NutauSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Eta(EtaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type IDstart(IDstartSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type IDend(IDendSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigEta(SigEtaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigTheta(SigThetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type MuEta(MuEtaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(DFPmcmc(iterations, thin, Y, T, Z, X, Beta, Lambda2, Nulam, Gamma, C, Tau2, Nutau, Eta, Theta, IDstart, IDend, SigEta, SigTheta, MuEta, a));
    return rcpp_result_gen;
END_RCPP
}
// DPmcmc
List DPmcmc(int iterations, int thin, List Y, List T, List Z, arma::cube Beta, arma::cube Lambda2, arma::cube Nulam, arma::mat C, arma::mat Tau2, arma::mat Nutau, arma::mat Theta, arma::mat IDstart, arma::mat IDend, arma::mat SigTheta, double a);
RcppExport SEXP _DFPmcmc_DPmcmc(SEXP iterationsSEXP, SEXP thinSEXP, SEXP YSEXP, SEXP TSEXP, SEXP ZSEXP, SEXP BetaSEXP, SEXP Lambda2SEXP, SEXP NulamSEXP, SEXP CSEXP, SEXP Tau2SEXP, SEXP NutauSEXP, SEXP ThetaSEXP, SEXP IDstartSEXP, SEXP IDendSEXP, SEXP SigThetaSEXP, SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< List >::type T(TSEXP);
    Rcpp::traits::input_parameter< List >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Beta(BetaSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Lambda2(Lambda2SEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Nulam(NulamSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type C(CSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Tau2(Tau2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Nutau(NutauSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type IDstart(IDstartSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type IDend(IDendSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SigTheta(SigThetaSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(DPmcmc(iterations, thin, Y, T, Z, Beta, Lambda2, Nulam, C, Tau2, Nutau, Theta, IDstart, IDend, SigTheta, a));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DFPmcmc_DFPmcmc", (DL_FUNC) &_DFPmcmc_DFPmcmc, 21},
    {"_DFPmcmc_DPmcmc", (DL_FUNC) &_DFPmcmc_DPmcmc, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_DFPmcmc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
