// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "tensorflow_types.hpp"
#include <Rcpp.h>

using namespace Rcpp;

// py_initialize
void py_initialize(const std::string& pythonSharedLibrary);
RcppExport SEXP tensorflow_py_initialize(SEXP pythonSharedLibrarySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type pythonSharedLibrary(pythonSharedLibrarySEXP);
    py_initialize(pythonSharedLibrary);
    return R_NilValue;
END_RCPP
}
// py_finalize
void py_finalize();
RcppExport SEXP tensorflow_py_finalize() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    py_finalize();
    return R_NilValue;
END_RCPP
}
// py_is_none
bool py_is_none(PyObjectXPtr x);
RcppExport SEXP tensorflow_py_is_none(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    __result = Rcpp::wrap(py_is_none(x));
    return __result;
END_RCPP
}
// py_str
CharacterVector py_str(PyObjectXPtr x);
RcppExport SEXP tensorflow_py_str(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    __result = Rcpp::wrap(py_str(x));
    return __result;
END_RCPP
}
// py_print
void py_print(PyObjectXPtr x);
RcppExport SEXP tensorflow_py_print(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    py_print(x);
    return R_NilValue;
END_RCPP
}
// py_is_callable
bool py_is_callable(PyObjectXPtr x);
RcppExport SEXP tensorflow_py_is_callable(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    __result = Rcpp::wrap(py_is_callable(x));
    return __result;
END_RCPP
}
// py_list_attributes
std::vector<std::string> py_list_attributes(PyObjectXPtr x);
RcppExport SEXP tensorflow_py_list_attributes(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    __result = Rcpp::wrap(py_list_attributes(x));
    return __result;
END_RCPP
}
// py_get_attr
PyObjectXPtr py_get_attr(PyObjectXPtr x, const std::string& name);
RcppExport SEXP tensorflow_py_get_attr(SEXP xSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    __result = Rcpp::wrap(py_get_attr(x, name));
    return __result;
END_RCPP
}
// py_get_attribute_types
IntegerVector py_get_attribute_types(PyObjectXPtr x, const std::vector<std::string>& attributes);
RcppExport SEXP tensorflow_py_get_attribute_types(SEXP xSEXP, SEXP attributesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type attributes(attributesSEXP);
    __result = Rcpp::wrap(py_get_attribute_types(x, attributes));
    return __result;
END_RCPP
}
// py_to_r
SEXP py_to_r(PyObjectXPtr x);
RcppExport SEXP tensorflow_py_to_r(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    __result = Rcpp::wrap(py_to_r(x));
    return __result;
END_RCPP
}
// py_call
SEXP py_call(PyObjectXPtr x, List args, List keywords);
RcppExport SEXP tensorflow_py_call(SEXP xSEXP, SEXP argsSEXP, SEXP keywordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< PyObjectXPtr >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< List >::type keywords(keywordsSEXP);
    __result = Rcpp::wrap(py_call(x, args, keywords));
    return __result;
END_RCPP
}
// py_import
PyObjectXPtr py_import(const std::string& module);
RcppExport SEXP tensorflow_py_import(SEXP moduleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    __result = Rcpp::wrap(py_import(module));
    return __result;
END_RCPP
}
// py_run_string
void py_run_string(const std::string& code);
RcppExport SEXP tensorflow_py_run_string(SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type code(codeSEXP);
    py_run_string(code);
    return R_NilValue;
END_RCPP
}
// py_run_file
void py_run_file(const std::string& file);
RcppExport SEXP tensorflow_py_run_file(SEXP fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::string& >::type file(fileSEXP);
    py_run_file(file);
    return R_NilValue;
END_RCPP
}
