/* -*- C++ -*- ------------------------------------------------------------
 @@COPYRIGHT@@
 *-----------------------------------------------------------------------*/
/** @file
 */

#pragma once

#ifndef	cml_matrix_matrix_product_h
#define	cml_matrix_matrix_product_h

#include <cml/matrix/readable_matrix.h>
#include <cml/matrix/promotion.h>

namespace cml {

/** Multiply two matrices, and return the result as a temporary. */
template<class Sub1, class Sub2,
  enable_if_matrix_t<Sub1>* = nullptr,
  enable_if_matrix_t<Sub2>* = nullptr>
inline auto operator*(Sub1&& sub1, Sub2&& sub2)
-> matrix_inner_product_promote_t<Sub1, Sub2>;

} // namespace cml

#define __CML_MATRIX_MATRIX_PRODUCT_TPP
#include <cml/matrix/matrix_product.tpp>
#undef __CML_MATRIX_MATRIX_PRPDUCT_TPP

#endif

// -------------------------------------------------------------------------
// vim:ft=cpp:sw=2