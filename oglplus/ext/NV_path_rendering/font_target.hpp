/**
 *  @file oglplus/ext/NV_path_rendering/font_target.hpp
 *  @brief Wrapper for the NV_path_rendering font target enumeration
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#pragma once
#ifndef OGLPLUS_EXT_NV_PATH_RENDERING_FONT_TARGET_1203031902_HPP
#define OGLPLUS_EXT_NV_PATH_RENDERING_FONT_TARGET_1203031902_HPP

#include <oglplus/enumerations.hpp>

namespace oglplus {

/// Path font target enumeration
/**
 *  @ingroup enumerations
 *
 *  @glsymbols
 *  @glextref{NV,path_rendering}
 */
OGLPLUS_ENUM_CLASS_BEGIN(PathNVFontTarget, GLenum)
#include <oglplus/enums/ext/nv_path_font_target.ipp>
OGLPLUS_ENUM_CLASS_END(PathNVFontTarget)

#if !OGLPLUS_NO_ENUM_VALUE_NAMES
#include <oglplus/enums/ext/nv_path_font_target_names.ipp>
#endif

#if !OGLPLUS_ENUM_VALUE_RANGES
#include <oglplus/enums/ext/nv_path_font_target_range.ipp>
#endif

} // namespace oglplus

#endif // include guard
