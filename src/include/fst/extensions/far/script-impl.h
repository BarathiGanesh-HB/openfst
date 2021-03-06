// See www.openfst.org for extensive documentation on this weighted
// finite-state transducer library.
//
// Classes and functions for registering and invoking Far main
// functions that support multiple and extensible arc types.

#ifndef FST_EXTENSIONS_FAR_SCRIPT_IMPL_H_
#define FST_EXTENSIONS_FAR_SCRIPT_IMPL_H_

#include <string>

#include <fst/compat.h>
namespace fst {
namespace script {

std::string LoadArcTypeFromFar(const std::string &far_fname);

std::string LoadArcTypeFromFst(const std::string &fst_fname);

}  // namespace script
}  // namespace fst

#endif  // FST_EXTENSIONS_FAR_SCRIPT_IMPL_H_
