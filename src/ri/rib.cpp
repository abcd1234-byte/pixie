/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         ribparse
#define yylex           riblex
#define yyerror         riberror
#define yydebug         ribdebug
#define yynerrs         ribnerrs

/* First part of user prologue.  */
#line 1 "rib.y"

//////////////////////////////////////////////////////////////////////
//
//                             Pixie
//
// Copyright © 1999 - 2003, Okan Arikan
//
// Contact: okan@cs.utexas.edu
//
//	This library is free software; you can redistribute it and/or
//	modify it under the terms of the GNU Lesser General Public
//	License as published by the Free Software Foundation; either
//	version 2.1 of the License, or (at your option) any later version.
//
//	This library is distributed in the hope that it will be useful,
//	but WITHOUT ANY WARRANTY; without even the implied warranty of
//	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//	Lesser General Public License for more details.
//
//	You should have received a copy of the GNU Lesser General Public
//	License along with this library; if not, write to the Free Software
//	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
//
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
//
//  File				:	rib.y
//  Classes				:	-
//  Description			:	RIB bindings
//
////////////////////////////////////////////////////////////////////////
#undef alloca
#define	YYMAXDEPTH	100000


#include "common/global.h"
#include "common/containers.h"
#include "common/os.h"
#include "ri.h"
#include "delayed.h"
#include "rib.h"
#include "rendererContext.h"
#include "renderer.h"
#include "error.h"
#include "ri_config.h"

#include <math.h>
#include <string.h>
#include <stdarg.h>


#ifdef HAVE_ZLIB
#include <zlib.h>
#endif


#line 132 "rib.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ribdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RIB_DECLARE = 258,
    RIB_FRAME_BEGIN = 259,
    RIB_FRAME_END = 260,
    RIB_WORLD_BEGIN = 261,
    RIB_WORLD_END = 262,
    RIB_FORMAT = 263,
    RIB_FRAME_ASPECT_RATIO = 264,
    RIB_SCREEN_WINDOW = 265,
    RIB_CROP_WINDOW = 266,
    RIB_PROJECTION = 267,
    RIB_CLIPPING = 268,
    RIB_CLIPPING_PLANE = 269,
    RIB_DEPTH_OF_FIELD = 270,
    RIB_SHUTTER = 271,
    RIB_PIXEL_VARIANCE = 272,
    RIB_PIXEL_SAMPLES = 273,
    RIB_PIXEL_FILTER = 274,
    RIB_EXPOSURE = 275,
    RIB_IMAGER = 276,
    RIB_QUANTIZE = 277,
    RIB_DISPLAY = 278,
    RIB_DISPLAYCHANNEL = 279,
    RIB_HIDER = 280,
    RIB_COLOR_SAMPLES = 281,
    RIB_RELATIVE_DETAIL = 282,
    RIB_OPTION = 283,
    RIB_ATTRIBUTE_BEGIN = 284,
    RIB_ATTRIBUTE_END = 285,
    RIB_COLOR = 286,
    RIB_OPACITY = 287,
    RIB_TEXTURE_COORDINATES = 288,
    RIB_LIGHT_SOURCE = 289,
    RIB_AREA_LIGHT_SOURCE = 290,
    RIB_ILLUMINATE = 291,
    RIB_SURFACE = 292,
    RIB_ATMOSPHERE = 293,
    RIB_INTERIOR = 294,
    RIB_EXTERIOR = 295,
    RIB_SHADING_RATE = 296,
    RIB_SHADING_INTERPOLATION = 297,
    RIB_MATTE = 298,
    RIB_BOUND = 299,
    RIB_DETAIL = 300,
    RIB_DETAIL_RANGE = 301,
    RIB_GEOMETRIC_APPROXIMATION = 302,
    RIB_GEOMETRIC_REPRESENTATION = 303,
    RIB_ORIENTATION = 304,
    RIB_REVERSE_ORIENTATION = 305,
    RIB_SIDES = 306,
    RIB_IDENTITY = 307,
    RIB_TRANSFORM = 308,
    RIB_CONCAT_TRANSFORM = 309,
    RIB_PERSPECTIVE = 310,
    RIB_TRANSLATE = 311,
    RIB_ROTATE = 312,
    RIB_SCALE = 313,
    RIB_SKEW = 314,
    RIB_DEFORMATION = 315,
    RIB_DISPLACEMENT = 316,
    RIB_COORDINATE_SYSTEM = 317,
    RIB_COORDINATE_SYS_TRANSFORM = 318,
    RIB_TRANSFORM_BEGIN = 319,
    RIB_TRANSFORM_END = 320,
    RIB_ATTRIBUTE = 321,
    RIB_POLYGON = 322,
    RIB_GENERAL_POLYGON = 323,
    RIB_POINTS_POLYGONS = 324,
    RIB_POINTS_GENERAL_POLYGONS = 325,
    RIB_BASIS = 326,
    RIB_PATCH = 327,
    RIB_PATCH_MESH = 328,
    RIB_NU_PATCH = 329,
    RIB_TRIM_CURVE = 330,
    RIB_SPHERE = 331,
    RIB_CONE = 332,
    RIB_CYLINDER = 333,
    RIB_HYPERBOLOID = 334,
    RIB_PARABOLOID = 335,
    RIB_DISK = 336,
    RIB_TORUS = 337,
    RIB_CURVES = 338,
    RIB_GEOMETRY = 339,
    RIB_POINTS = 340,
    RIB_SUBDIVISION_MESH = 341,
    RIB_BLOBBY = 342,
    RIB_PROCEDURAL = 343,
    RIB_SOLID_BEGIN = 344,
    RIB_SOLID_END = 345,
    RIB_OBJECT_BEGIN = 346,
    RIB_OBJECT_END = 347,
    RIB_OBJECT_INSTANCE = 348,
    RIB_MOTION_BEGIN = 349,
    RIB_MOTION_END = 350,
    RIB_MAKE_TEXTURE = 351,
    RIB_MAKE_BRICKMAP = 352,
    RIB_MAKE_BUMP = 353,
    RIB_MAKE_LAT_LONG_ENVIRONMENT = 354,
    RIB_MAKE_CUBE_FACE_ENVIRONMENT = 355,
    RIB_MAKE_SHADOW = 356,
    RIB_ARCHIVE_RECORD = 357,
    RIB_ARCHIVE_BEGIN = 358,
    RIB_ARCHIVE_END = 359,
    RIB_RESOURCE = 360,
    RIB_RESOURCE_BEGIN = 361,
    RIB_RESOURCE_END = 362,
    RIB_IFBEGIN = 363,
    RIB_IFEND = 364,
    RIB_ELSEIF = 365,
    RIB_ELSE = 366,
    RIB_ERROR_HANDLER = 367,
    RIB_VERSION = 368,
    RIB_VERSION_STRING = 369,
    RIB_ARRAY_BEGIN = 370,
    RIB_ARRAY_END = 371,
    RIB_TEXT = 372,
    RIB_FLOAT = 373,
    RIB_STRUCTURE_COMMENT = 374
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 58 "rib.y"
union ribval
{
#line 58 "rib.y"

	float	real;
	char	*string;
	int		integer;

#line 308 "rib.cpp"

};
#line 58 "rib.y"
typedef union ribval YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int ribparse (void);



/* Second part of user prologue.  */
#line 64 "rib.y"

// Some forward definitions
		int						riblex(ribval*);				// Forward definition for stupid yacc
		void					riberror(const char *,...);

// Types for the data encountered in the rib file
// Note that there's no type for integer as they are recovered from floats
typedef enum {
	RT_FLOAT,
	RT_TEXT,
	RT_STAR,
	RT_PL,
	RT_NULL
} ERIBType;

// Holds information about a parameter
typedef struct {
	char			*name;			// Name of the parameter
	ERIBType		type;			// Type of the parameter
	int				numItems;		// Number of items of type ERIBValue
	int				valuesStart;	// Index in the argument list where the parameter starts
} TParameter;

typedef struct TLight {
	char			*name;			// The name of the light (if any)
	RtLightHandle	handle;			// The returned handle
	TLight			*next;			// The next light in the list
	int				index;			// The index of the light
} TLight;

typedef struct TObject {
	RtObjectHandle	handle;			// The handle of the object
	TObject			*next;			// The next in the list
	char			*name;			// The name of the object (NULL if not named)
	int				index;			// The index of the object (-1 if named)
} TObject;

static	int					ribDepth						=	0;		// The rib parsing stack depth
static	int					numConstant						=	0;		// The number of constant
static	int					numVertex						=	0;		// The number of vertices
static	int					numVarying						=	0;		// The number of varyings
static	int					numFaceVarying					=	0;		// The number of facevaryings
static	int					numUniform						=	0;		// The number of uniforms
static	TLight				*lights							=	NULL;	// The linked list of light handles
static	TObject				*objects						=	NULL;	// The linked list of object handles
static	void				(*callback)(const char *,...)	=	NULL;	// The callback function for the parser

static	TMemCheckpoint		worldCheckpoint;
static	TMemCheckpoint		memoryCheckpoint;						// We use this to put a checkpoint to the memory
static	CArray<float>		floatArgs;								// The array of float arguments
static	CArray<int>			intArgs;								// The array of integer arguments
static	CArray<const char*>	stringArgs;								// The array of string arguments

static	int					numParameters				=	0;
static	int					maxParameter				=	0;
static	RtToken				*tokens						=	NULL;
static	RtPointer			*vals						=	NULL;
static	TParameter			*parameters					=	NULL;

		const char			*ribFile					=	NULL;	// The RIB file that we're parsing now
		int					ribLineno					=	-1;		// The line number in the rib file (where the parser is at)
		int					ribCommandLineno			=	-1;		// The line number of the last executed command in the RIB


#define	paramCheck()														\
	if (numParameters == maxParameter) {									\
		RtToken		*tmpTokens		=	new RtToken[maxParameter+10];		\
		RtPointer	*tmpVals		=	new RtPointer[maxParameter+10];		\
		TParameter	*tmpParameters	=	new TParameter[maxParameter+10];	\
																			\
		memcpy(tmpTokens,		tokens,maxParameter*sizeof(RtToken));		\
		memcpy(tmpVals,			vals,maxParameter*sizeof(RtPointer));		\
		memcpy(tmpParameters,	parameters,maxParameter*sizeof(TParameter));\
																			\
		delete [] tokens;													\
		delete [] vals;														\
		delete [] parameters;												\
																			\
		tokens						=	tmpTokens;							\
		vals						=	tmpVals;							\
		parameters					=	tmpParameters;						\
																			\
		maxParameter				+=	10;									\
	}

#define	getFloat(__n)		(floatArgs.array + __n)
#define	getInt(__n)			(intArgs.array + __n)
#define	getString(__n)		(stringArgs.array + __n)

// Some textual descriptions for the rib-ri parser

// Basis functions
const	char	*RI_BEZIERBASIS				=	"bezier";
const	char	*RI_BSPLINEBASIS			=	"b-spline";
const	char	*RI_POWERBASIS				=	"power";
const	char	*RI_CATMULLROMBASIS			=	"catmull-rom";
const	char	*RI_HERMITEBASIS			=	"hermite";

// Error handlers
const	char	*RI_ERRORIGNORE				=	"ignore";
const	char	*RI_ERRORPRINT				=	"print";
const	char	*RI_ERRORABORT				=	"abort";

// Predefined procedural handlers
const	char	*RI_PROCDELAYEDREADARCHIVE	=	"DelayedReadArchive";
const	char	*RI_PROCRUNPROGRAM			=	"RunProgram";
const	char	*RI_PROCDYNAMICLOAD			=	"DynamicLoad";

// Predefined error handlers
const	char	*RI_ERROR_IGNORE			=	"ignore";
const	char	*RI_ERROR_ABORT				=	"abort";
const	char	*RI_ERROR_PRINT				=	"print";

void	test();

///////////////////////////////////////////////////////////////////////
// Function				:	toLowerCase
// Description			:	Convert the argument to lowercase
// Return Value			:	Pointer to the argument
// Comments				:
static	char			*toLowerCase(char *s) {
	int	i;
	int	l	=	(int) strlen(s);

	for (i=0;i<l;i++) {
		if ((s[i] >= 'A') && (s[i] <= 'Z'))
			s[i]	=	'a'+s[i]-'A';
	}

	return s;
}


///////////////////////////////////////////////////////////////////////
// Function				:	parameterListCheck
// Description			:	Count the number of variables in the parameter list
// Return Value			:	TRUE if OK
// Comments				:	(This version is used by the primitives)
static	int		parameterListCheck() {
	int			i;
	CVariable	tmp;

	// Set the number of variables
	numConstant		=	0;
	numVertex		=	0;
	numVarying		=	0;
	numFaceVarying	=	0;
	numUniform		=	0;

	// For each parameter encountered
	for (i=0;i<numParameters;i++) {
		TParameter		*par	=	parameters+i;
		CVariable		*var	=	CRenderer::retrieveVariable(par->name);
		EVariableClass	container;

		// Get the variable container to check the number of items
		if (var == NULL) {
			if (parseVariable(&tmp,NULL,par->name)) {
				// We have an inline declaration, use that container
				container	=	tmp.container;
				var			=	&tmp;
			} else {
				if (FALSE) { 	// If we want to go through the shader parameters (performance hit)
					// Not global, not inline, check the shaders
					CAttributes	*attributes	=	CRenderer::context->getAttributes(FALSE);
					var						=	attributes->findParameter(par->name);
					
					if (var != NULL) {
						container	=	var->container;
					} else {
						// This isn't a globally declared variable
						// Neither is it an inline delcaration
						error(CODE_BADTOKEN,"Parameter \"%s\" is not declared\n",par->name);
						return FALSE;
					}
				} else {
					// This isn't a globally declared variable
					// Neither is it an inline delcaration
					error(CODE_BADTOKEN,"Parameter \"%s\" is not declared\n",par->name);
					return FALSE;
				}
			}
		} else {
			// This variable is predeclared.  It may or may not be a global though
			container	=	var->container;
		}

		// Handle some irregular cases
		if (var == NULL) {
			// Special symbols
			if (strcmp(par->name,"Pz") == 0) {
				tmp.numFloats	=	1;
				tmp.numItems	=	1;
				tmp.entry		=	VARIABLE_P;
				strcpy(tmp.name,"Pz");
				tmp.type		=	TYPE_FLOAT;
				tmp.container	=	CONTAINER_VERTEX;
				tmp.usageMarker	=	PARAMETER_P;
				var				=	&tmp;
				container		=	var->container;
			} else if (strcmp(par->name,"Np") == 0) {
				tmp.numFloats	=	3;
				tmp.numItems	=	1;
				tmp.entry		=	VARIABLE_NG;
				strcpy(tmp.name,"Np");
				tmp.type		=	TYPE_NORMAL;
				tmp.container	=	CONTAINER_VERTEX;
				tmp.usageMarker	=	PARAMETER_NG;
				var				=	&tmp;
				container		=	var->container;
			} else if (strcmp(par->name,"Pw") == 0) {
				tmp.numFloats	=	4;
				tmp.numItems	=	1;
				tmp.entry		=	VARIABLE_P;
				strcpy(tmp.name,"Pw");
				tmp.type		=	TYPE_POINT;
				tmp.container	=	CONTAINER_VERTEX;
				tmp.usageMarker	=	PARAMETER_P;
				var				=	&tmp;
				container		=	var->container;
			}
		}	

		if (var == NULL)	{
			error(CODE_BADTOKEN,"Parameter \"%s\" is not declared\n",par->name);
			return FALSE;
		}

		if ((par->numItems % var->numFloats) != 0) {
			error(CODE_MISSINGDATA,"Invalid number of items for the parameter \"%s\" (expecting n*%d, found %d)\n",par->name,var->numFloats,par->numItems);
			return FALSE;
		}
		
		// Type checking
		if (var->type == TYPE_INTEGER) {
			if (par->type == RT_FLOAT) {
				// We need to convert the float argument list to int
				int	j;
				T32	*dest	=	(T32 *) vals[i];

				// FIXME: We're doing an ugly conversion here
				// These assertions must be valid even on 64 bit platforms
				assert(sizeof(T32) == 4);
				assert(sizeof(float) == sizeof(int));
				
				for (j=par->numItems;j>0;j--,dest++) {
					dest->integer	=	(int) dest->real;
				}
			} else {
				error(CODE_RANGE,"Type mismatch for parameter \"%s\" (expecting integer, found string)\n",par->name);
				return	FALSE;
			}
		} else if (var->type == TYPE_STRING) {
			if (par->type != RT_TEXT) {
				error(CODE_RANGE,"Type mismatch for parameter \"%s\" (expecting string, found float)\n",par->name);
				return	FALSE;
			}
		} else {
			if (par->type != RT_FLOAT) {
				error(CODE_RANGE,"Type mismatch for parameter \"%s\" (expecting float, found string)\n",par->name);
				return	FALSE;
			}
		}

#define	SIZECHECK(dest)																		\
			if (dest == 0) {																\
				dest = (par->numItems / var->numFloats);									\
			} else {																		\
				if (dest != (par->numItems / var->numFloats)) {								\
					error(CODE_RANGE,"Invalid number of items for the parameter \"%s\" (expecting %d, found %d)\n",par->name,dest,par->numItems/var->numFloats);	\
					return FALSE;															\
				}																			\
			}

		switch(container) {
		case CONTAINER_UNIFORM:
			SIZECHECK(numUniform);
			break;
		case CONTAINER_VERTEX:
			SIZECHECK(numVertex);
			break;
		case CONTAINER_VARYING:
			SIZECHECK(numVarying);
			break;
		case CONTAINER_FACEVARYING:
			SIZECHECK(numFaceVarying);
			break;
		case CONTAINER_CONSTANT:
			SIZECHECK(numConstant);
			break;
		default:
			error(CODE_BUG,"Unknown container class in parameter list\n");
			return FALSE;
			break;
		}

#undef SIZECHECK

	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////
// Function				:	getBasis
// Description			:	Get the basis matrix from a given text
// Return Value			:	TRUE if OK
// Comments				:
static	int		sizeCheck(int numExpVertex,int numExpVarying,int numExpFaceVarying,int numExpUniform) {
	if (numExpVarying == 0)		numExpVarying		=	numExpVertex;
	if (numExpVertex == 0)		numExpVertex		=	numExpVarying;
	if (numExpFaceVarying == 0)	numExpFaceVarying	=	numExpVertex;

	if (numConstant != 0) {
		if (numConstant != 1) {
			error(CODE_CONSISTENCY,"Unexpected number of constants (1 expected, %d found)\n",numVarying);
			return FALSE;
		}
	}

	if (numVertex != 0) {
		if (numExpVertex != numVertex) {
			error(CODE_CONSISTENCY,"Unexpected number of vertices (%d expected, %d found)\n",numExpVertex,numVertex);
			return FALSE;
		}
	}

	if (numVarying != 0) {
		if (numExpVarying != numVarying) {
			error(CODE_CONSISTENCY,"Unexpected number of varyings (%d expected, %d found)\n",numExpVarying,numVarying);
			return FALSE;
		}
	}

	if (numFaceVarying != 0) {
		if (numExpFaceVarying != numFaceVarying) {
			error(CODE_CONSISTENCY,"Unexpected number of facevaryings (%d expected, %d found)\n",numExpFaceVarying,numFaceVarying);
			return FALSE;
		}
	}

	if (numUniform != 0) {
		if (numExpUniform != numUniform) {
			error(CODE_CONSISTENCY,"Unexpected number of uniforms (%d expected, %d found)\n",numExpUniform,numUniform);
			return FALSE;
		}
	}

	return TRUE;
}

///////////////////////////////////////////////////////////////////////
// Function				:	getBasis
// Description			:	Get the basis matrix from a given text
// Return Value			:	TRUE if OK
// Comments				:
static	int		getBasis(RtBasis **a,char *n) {
	char	*name	=	toLowerCase(n);

	if (strcmp(name,RI_BEZIERBASIS) == 0)
		a[0]	=	&RiBezierBasis;
	else if (strcmp(name,RI_BSPLINEBASIS) == 0)
		a[0]	=	&RiBSplineBasis;
	else if (strcmp(name,RI_CATMULLROMBASIS) == 0)
		a[0]	=	&RiCatmullRomBasis;
	else if (strcmp(name,RI_HERMITEBASIS) == 0)
		a[0]	=	&RiHermiteBasis;
	else if (strcmp(name,RI_POWERBASIS) == 0)
		a[0]	=	&RiPowerBasis;
	else {
		error(CODE_BADTOKEN,"Unknown basis: \"%s\"\n",name);
		return	FALSE;
	}

	return	TRUE;
}

///////////////////////////////////////////////////////////////////////
// Function				:	getFilter
// Description			:	Get the filter from a given text
// Return Value			:	NULL if failed
// Comments				:
static	RtFilterFunc	getFilter(char *n) {
	char			*name	=	toLowerCase(n);
	RtFilterFunc	f		=	NULL;

	if (strcmp(name,RI_BOXFILTER) == 0) {
		f = RiBoxFilter;
	} else if (strcmp(name,RI_GAUSSIANFILTER) == 0) {
		f = RiGaussianFilter;
	} else if (strcmp(name,RI_TRIANGLEFILTER) == 0) {
		f = RiTriangleFilter;
	} else if (strcmp(name,RI_CATMULLROMFILTER) == 0) {
		f = RiCatmullRomFilter;
	} else if (strcmp(name,RI_BLACKMANHARRISFILTER) == 0) {
		f = RiBlackmanHarrisFilter;
	} else if (strcmp(name,RI_MITCHELLFILTER) == 0) {
		f = RiMitchellFilter;
	} else if (strcmp(name,RI_SINCFILTER) == 0) {
		f = RiSincFilter;
	} else if (strcmp(name,RI_BESSELFILTER) == 0) {
		f = RiBesselFilter;
	} else if (strcmp(name,RI_DISKFILTER) == 0) {
		f = RiDiskFilter;
	} else {
		error(CODE_BADTOKEN,"Filter \"%s\" is not recognized\n",name);
	}

	return f;
}

///////////////////////////////////////////////////////////////////////
// Function				:	getError
// Description			:	Get the error handler from a given text
// Return Value			:	NULL if failed
// Comments				:
static	RtErrorHandler	getErrorHandler(char *n) {
	char			*name	=	toLowerCase(n);
	RtErrorHandler	f		=	NULL;

	if (strcmp(name,RI_ERRORIGNORE) == 0) {
		f = RiErrorPrint;
	} else if (strcmp(name,RI_ERRORPRINT) == 0) {
		f = RiErrorPrint;
	} else if (strcmp(name,RI_ERRORABORT) == 0) {
		f = RiErrorAbort;
	} else {
		error(CODE_BADTOKEN,"Error handler \"%s\" is not recognized\n",name);
	}

	return f;
}



#line 760 "rib.cpp"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   695

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  120
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  674

#define YYUNDEFTOK  2
#define YYMAXUTOK   374


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   626,   626,   629,   636,   644,   651,   658,   665,   672,
     679,   687,   692,   698,   705,   713,   720,   729,   734,   752,
     764,   778,   777,   794,   798,   805,   812,   817,   823,   828,
     841,   849,   857,   863,   872,   883,   892,   903,   910,   917,
     928,   936,   941,   948,   954,   961,   973,   980,   990,  1000,
    1009,  1016,  1025,  1039,  1054,  1060,  1069,  1074,  1079,  1093,
    1107,  1123,  1139,  1152,  1167,  1180,  1193,  1200,  1213,  1226,
    1242,  1260,  1267,  1274,  1281,  1288,  1294,  1300,  1306,  1328,
    1348,  1370,  1390,  1399,  1410,  1417,  1423,  1429,  1434,  1440,
    1445,  1487,  1529,  1535,  1543,  1551,  1560,  1572,  1586,  1593,
    1600,  1606,  1612,  1617,  1622,  1631,  1641,  1654,  1690,  1734,
    1747,  1796,  1845,  1924,  1950,  2026,  2059,  2083,  2097,  2113,
    2126,  2141,  2155,  2171,  2197,  2225,  2239,  2255,  2268,  2283,
    2298,  2315,  2361,  2371,  2409,  2482,  2491,  2501,  2510,  2580,
    2586,  2591,  2603,  2615,  2620,  2636,  2652,  2660,  2665,  2682,
    2690,  2707,  2722,  2743,  2751,  2758,  2763,  2768,  2773,  2781,
    2788,  2793,  2800,  2805,  2815,  2820,  2825
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RIB_DECLARE", "RIB_FRAME_BEGIN",
  "RIB_FRAME_END", "RIB_WORLD_BEGIN", "RIB_WORLD_END", "RIB_FORMAT",
  "RIB_FRAME_ASPECT_RATIO", "RIB_SCREEN_WINDOW", "RIB_CROP_WINDOW",
  "RIB_PROJECTION", "RIB_CLIPPING", "RIB_CLIPPING_PLANE",
  "RIB_DEPTH_OF_FIELD", "RIB_SHUTTER", "RIB_PIXEL_VARIANCE",
  "RIB_PIXEL_SAMPLES", "RIB_PIXEL_FILTER", "RIB_EXPOSURE", "RIB_IMAGER",
  "RIB_QUANTIZE", "RIB_DISPLAY", "RIB_DISPLAYCHANNEL", "RIB_HIDER",
  "RIB_COLOR_SAMPLES", "RIB_RELATIVE_DETAIL", "RIB_OPTION",
  "RIB_ATTRIBUTE_BEGIN", "RIB_ATTRIBUTE_END", "RIB_COLOR", "RIB_OPACITY",
  "RIB_TEXTURE_COORDINATES", "RIB_LIGHT_SOURCE", "RIB_AREA_LIGHT_SOURCE",
  "RIB_ILLUMINATE", "RIB_SURFACE", "RIB_ATMOSPHERE", "RIB_INTERIOR",
  "RIB_EXTERIOR", "RIB_SHADING_RATE", "RIB_SHADING_INTERPOLATION",
  "RIB_MATTE", "RIB_BOUND", "RIB_DETAIL", "RIB_DETAIL_RANGE",
  "RIB_GEOMETRIC_APPROXIMATION", "RIB_GEOMETRIC_REPRESENTATION",
  "RIB_ORIENTATION", "RIB_REVERSE_ORIENTATION", "RIB_SIDES",
  "RIB_IDENTITY", "RIB_TRANSFORM", "RIB_CONCAT_TRANSFORM",
  "RIB_PERSPECTIVE", "RIB_TRANSLATE", "RIB_ROTATE", "RIB_SCALE",
  "RIB_SKEW", "RIB_DEFORMATION", "RIB_DISPLACEMENT",
  "RIB_COORDINATE_SYSTEM", "RIB_COORDINATE_SYS_TRANSFORM",
  "RIB_TRANSFORM_BEGIN", "RIB_TRANSFORM_END", "RIB_ATTRIBUTE",
  "RIB_POLYGON", "RIB_GENERAL_POLYGON", "RIB_POINTS_POLYGONS",
  "RIB_POINTS_GENERAL_POLYGONS", "RIB_BASIS", "RIB_PATCH",
  "RIB_PATCH_MESH", "RIB_NU_PATCH", "RIB_TRIM_CURVE", "RIB_SPHERE",
  "RIB_CONE", "RIB_CYLINDER", "RIB_HYPERBOLOID", "RIB_PARABOLOID",
  "RIB_DISK", "RIB_TORUS", "RIB_CURVES", "RIB_GEOMETRY", "RIB_POINTS",
  "RIB_SUBDIVISION_MESH", "RIB_BLOBBY", "RIB_PROCEDURAL",
  "RIB_SOLID_BEGIN", "RIB_SOLID_END", "RIB_OBJECT_BEGIN", "RIB_OBJECT_END",
  "RIB_OBJECT_INSTANCE", "RIB_MOTION_BEGIN", "RIB_MOTION_END",
  "RIB_MAKE_TEXTURE", "RIB_MAKE_BRICKMAP", "RIB_MAKE_BUMP",
  "RIB_MAKE_LAT_LONG_ENVIRONMENT", "RIB_MAKE_CUBE_FACE_ENVIRONMENT",
  "RIB_MAKE_SHADOW", "RIB_ARCHIVE_RECORD", "RIB_ARCHIVE_BEGIN",
  "RIB_ARCHIVE_END", "RIB_RESOURCE", "RIB_RESOURCE_BEGIN",
  "RIB_RESOURCE_END", "RIB_IFBEGIN", "RIB_IFEND", "RIB_ELSEIF", "RIB_ELSE",
  "RIB_ERROR_HANDLER", "RIB_VERSION", "RIB_VERSION_STRING",
  "RIB_ARRAY_BEGIN", "RIB_ARRAY_END", "RIB_TEXT", "RIB_FLOAT",
  "RIB_STRUCTURE_COMMENT", "$accept", "start", "ribIntString",
  "ribFloatString", "ribTextString", "ribFloatArray", "ribFloats",
  "ribIntArray", "ribTextArray", "ribPL", "ribParameter", "ribCommands",
  "$@1", "ribComm", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374
};
# endif

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -136,    19,    30,  -136,   553,  -136,   -79,   -74,  -136,  -136,
    -136,   -67,   -60,  -101,   -97,   -54,   -37,   -31,   -19,     6,
       7,     8,   -50,     9,    12,    14,    15,    16,    17,   -95,
      18,    20,  -136,  -136,   -93,   -91,   -89,    21,    22,   -10,
      23,    24,    25,    27,    31,    28,    33,   -87,   -83,   -82,
      37,    38,    39,  -136,    40,  -136,   -68,    42,    41,    43,
      44,    45,   -81,    47,    49,    50,    51,  -136,  -136,    52,
      53,    56,    56,    56,   -51,    55,    57,    58,    56,   -76,
     -75,   -70,   -69,   -63,   -59,   -58,    60,    61,    53,    62,
      63,    65,    66,  -136,    -8,  -136,    -5,   -95,  -136,    67,
     -35,    68,    69,    72,    75,    76,  -136,    77,  -136,  -136,
      78,  -136,    79,  -136,    80,  -108,  -136,  -136,    81,  -136,
      82,  -136,    83,    84,    85,    86,    53,    87,    88,    89,
      90,  -136,    91,    92,    93,    53,    94,    96,    53,    53,
     -33,  -136,    97,    99,  -136,  -136,    53,    98,   100,   101,
     102,   103,   104,    -2,     0,   106,   107,    53,    53,    53,
      53,  -136,  -136,  -136,   108,   109,   110,   111,   112,   113,
     114,  -136,  -136,  -136,   115,   116,  -136,   117,   118,   119,
     121,   122,    53,    53,  -136,  -136,    53,  -106,  -136,    53,
     -32,    53,    56,    56,   123,   124,    53,   125,   126,    56,
     127,   128,   129,   130,   131,   132,   133,   134,   136,   137,
     138,   140,   142,   144,    56,    53,  -136,    56,    56,   -35,
    -136,  -136,  -136,  -136,  -136,  -136,  -136,   146,   147,  -136,
     148,   149,   150,   151,   152,    53,   153,    53,    53,  -136,
    -136,  -136,  -136,   154,   155,   156,   157,   158,  -136,  -136,
     159,   160,  -136,  -136,   161,  -136,  -136,   162,   164,  -136,
    -136,  -136,   -28,  -136,  -136,  -136,   165,   166,   169,   170,
     171,   172,  -102,    53,  -136,    53,    53,  -136,  -136,  -136,
    -136,  -136,  -136,   173,   174,   175,   176,   177,   178,  -136,
     179,   180,   181,   183,   184,   185,   187,  -136,  -136,  -136,
     -47,  -136,  -136,  -136,  -136,  -136,   -27,  -136,    53,    56,
     188,   -23,  -136,   190,    99,    99,   191,   195,   196,   197,
     198,   199,   201,   202,   204,   206,   207,   208,   209,   210,
     212,  -136,    56,    99,   167,   213,  -136,     3,    53,   214,
     215,   216,    53,  -136,    53,  -136,  -136,  -136,   217,   219,
     220,   221,   222,  -136,  -136,   223,    53,  -136,   224,  -136,
     225,  -136,   226,   227,   -53,  -136,  -136,  -136,  -136,   228,
     229,   230,   231,   232,   233,   234,   235,  -136,   236,  -136,
     237,   238,  -136,  -136,  -136,    53,   239,   240,   241,   242,
     243,    99,   245,   247,   248,    53,   249,   251,   252,   253,
     255,   256,   257,    53,   258,   259,    53,   -22,   -15,   260,
     262,  -136,  -136,  -136,   263,   264,   266,  -136,  -136,   267,
    -136,   268,  -136,   269,   270,  -136,   -20,    32,   271,   272,
     273,   274,   277,   278,   279,  -136,   280,   281,  -136,   282,
     283,  -136,   284,   285,  -136,   287,   288,    99,   290,    53,
      59,  -136,   291,    53,   292,   293,   295,    53,    64,  -136,
     296,   297,  -136,   -39,    56,    56,    53,  -136,   298,   300,
     303,   304,   307,   192,   218,   308,  -136,  -136,  -136,   309,
     311,   312,   313,   314,   315,   289,   316,   317,   320,   321,
     322,   323,    53,   324,    56,   327,  -136,    53,   328,  -136,
     329,   330,   334,  -136,    53,   335,    53,    56,    56,  -136,
     337,   338,   339,    53,   341,  -136,  -136,  -136,   342,   343,
     344,  -136,   345,  -136,  -136,   346,   347,   348,   349,   350,
     351,  -136,   352,    99,    53,  -136,    53,   353,   354,    53,
    -136,   336,  -136,    99,    99,   355,   356,   357,  -136,   359,
     360,   361,   365,   369,   370,   371,   372,  -136,   373,   374,
      99,    99,  -136,  -136,   375,    53,  -136,    53,    53,    53,
     376,    53,    53,   377,   378,  -136,  -136,  -136,   379,   380,
     383,   382,   384,   385,    99,   389,  -136,  -136,  -136,  -136,
     388,  -136,  -136,   390,   392,   391,   393,  -136,   394,   395,
     398,  -136,    53,   402,   401,  -136,   403,   404,   405,   406,
      53,  -136,  -136,   408,   409,   410,   411,   412,  -136,    53,
     415,   417,   418,   419,  -136,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   539,   551,   552,   555,  -136,  -136,   556,   557,   -12,
     554,   558,   559,   560,   561,  -136,  -136,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   578,   577,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      23,     0,    21,     1,     0,   166,     0,    26,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   103,     0,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,     0,   140,     0,   143,     0,     0,   147,     0,
       0,     0,     0,     0,     0,     0,   155,     0,   156,   157,
       0,   160,     0,   162,     0,     0,    24,    22,     0,    27,
       0,    32,     0,     0,     0,     0,    18,     0,     0,     0,
       0,    43,     0,     0,     0,    18,     0,     0,    18,    18,
       0,     6,    12,    11,    52,    54,    18,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    18,    18,    18,
      18,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,    85,    86,    88,     0,     0,    92,     0,     0,     0,
       0,     0,    18,    18,   100,   101,    18,     0,   105,    18,
       0,    18,     0,     0,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,   132,     0,     0,     0,
     139,   142,   141,   145,   144,    11,   146,     0,     0,    16,
       0,     0,     0,     0,     0,    18,     0,    18,    18,   163,
     165,   164,    25,     0,     0,     0,     0,     0,    37,    38,
       0,     0,    42,    44,     0,    46,    47,     0,     0,    50,
      51,    10,     0,     5,    53,    55,     0,     0,     0,     0,
       0,     0,    18,    18,    66,    18,    18,    70,    69,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    98,    99,   104,
       0,    19,    20,    17,    14,     4,     0,   106,    18,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,     0,     0,     0,     0,     8,     0,    18,     0,
       0,     0,    18,   154,    18,   159,   161,    31,     0,     0,
       0,     0,     0,    40,    45,     0,    18,     9,     0,    58,
       0,    59,     0,     0,    16,    65,    64,    68,    67,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,    94,
       0,     0,    13,     3,   107,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,    18,     0,    18,     0,
       0,    15,     7,   149,     0,     0,     0,   153,   158,     0,
      33,     0,    35,     0,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,    95,     0,
       0,   108,     0,     0,   109,     0,     0,     0,     0,    18,
       0,   119,     0,    18,     0,     0,     0,    18,     0,   127,
       0,     0,   131,     0,     0,     0,    18,   135,     0,     0,
       0,     0,     0,     0,     0,     0,    48,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,   117,    18,     0,   121,
       0,     0,     0,   125,    18,     0,    18,     0,     0,   136,
       0,     0,     0,    18,     0,    34,    36,    39,     0,     0,
       0,    79,     0,    81,    83,     0,     0,     0,     0,     0,
       0,   114,     0,     0,    18,   120,    18,     0,     0,    18,
     128,     0,   129,     0,     0,     0,     0,     0,   151,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,   118,   122,     0,    18,   126,    18,    18,    18,
       0,    18,    18,     0,     0,    62,    78,    80,     0,     0,
       0,     0,     0,     0,     0,     0,   123,   130,   134,   133,
       0,   148,   150,     0,     0,     0,     0,    97,     0,     0,
       0,   116,    18,     0,     0,    63,     0,     0,     0,     0,
      18,   124,   138,     0,     0,     0,     0,     0,   115,    18,
       0,     0,     0,     0,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,  -136,  -135,  -136,   -29,   -21,   -71,   -96,   -85,
    -136,  -136,  -136,  -136
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   306,   142,   337,   225,   301,   191,   302,   188,
     189,     2,     4,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     143,   192,   193,   216,   230,   262,   240,   199,   144,   300,
     241,   229,   141,   300,   122,   364,   141,   123,   124,     3,
     140,   125,   147,   141,   149,   148,   151,   150,   164,   152,
      -2,   165,   166,   168,   180,   167,   169,   181,   118,   200,
     202,   248,   201,   203,   119,   204,   206,   174,   205,   207,
     256,   120,   208,   259,   260,   209,   210,   212,   121,   211,
     213,   265,   300,   126,   194,   141,   195,   133,   274,   261,
     336,   141,   279,   280,   281,   282,   226,   304,   336,   305,
     228,   127,   229,   261,   304,   141,   305,   128,   357,   382,
     263,   383,   387,   463,   388,   229,   477,   297,   298,   129,
     228,   299,   364,   651,   303,   652,   307,   155,   156,   221,
     222,   312,   223,   224,   264,   272,   273,   275,   276,   411,
     412,   308,   309,   334,   130,   131,   132,   134,   315,   135,
     331,   136,   137,   138,   139,     0,   145,   146,   153,   154,
     157,   158,   159,   330,   160,   162,   332,   333,   478,   161,
     343,   163,   345,   346,   170,   171,   172,   175,   173,   176,
       0,   177,   178,   179,   182,   262,   183,   184,   185,   186,
     187,   190,   196,     0,   197,   497,   198,   214,   215,   217,
     504,   218,   219,   220,   227,   231,   232,   365,   366,   233,
     367,   368,   234,   235,   236,   237,   238,   239,   242,     0,
     243,   244,   245,   246,   247,   249,   250,   251,   252,   253,
     254,   255,   257,   258,   140,   263,   266,     0,   267,   268,
     269,   270,   271,   384,   277,   278,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   385,   295,
     296,   310,   311,   313,   314,   316,   317,   318,   319,   320,
     321,   322,   323,   413,   324,   325,   326,   417,   327,   418,
     328,   407,   329,   335,   336,   338,   339,   340,   341,   342,
     344,   425,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   409,   358,   359,   390,   391,   360,   361,   362,
     363,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     441,   378,   379,   380,   408,   381,   386,   389,   515,   392,
     451,   465,   466,   393,   394,   395,   396,   397,   459,   398,
     399,   462,   400,   467,   401,   402,   403,   404,   405,   406,
     410,   414,   415,   416,   516,   419,   464,   420,   421,   422,
     423,   424,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   442,   443,   444,
     445,   446,   447,   448,   496,   449,   450,   452,   499,   453,
     454,   455,   503,   456,   457,   458,   460,   461,   468,   469,
     470,   509,   471,   472,     0,   473,   474,   475,   476,   479,
     480,   481,   482,   507,   508,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   524,   493,   531,   495,   498,
     500,   501,   535,   502,   505,   506,   510,   511,   494,   540,
     512,   542,   513,   533,   514,     0,   517,   518,   548,   519,
     520,   521,   522,   523,   525,   526,   543,   544,   527,   528,
     529,   530,   532,   534,   536,     0,     0,   537,   538,   562,
     539,   563,   567,   541,   566,   545,   546,   547,   549,     0,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   564,   565,   570,   571,   572,   573,     0,   574,   575,
     586,   576,   587,   588,   589,   577,   591,   592,   578,   579,
     580,   581,   582,   585,   590,   593,   594,   595,   596,   597,
     598,     0,   599,   600,   561,   602,   603,   604,   605,   606,
       0,   607,   608,   609,   568,   569,   610,   611,   612,   613,
       0,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   583,   584,   625,   624,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,     5,   601,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   645,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   646,   647,     0,
     653,     0,   116,   648,   649,   650,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673
};

static const yytype_int16 yycheck[] =
{
      29,    72,    73,    88,   100,   140,   114,    78,    29,   115,
     118,   117,   118,   115,   115,   117,   118,   118,   115,     0,
     115,   118,   115,   118,   115,   118,   115,   118,   115,   118,
       0,   118,   115,   115,   115,   118,   118,   118,   117,   115,
     115,   126,   118,   118,   118,   115,   115,   115,   118,   118,
     135,   118,   115,   138,   139,   118,   115,   115,   118,   118,
     118,   146,   115,   117,   115,   118,   117,   117,   153,   116,
     117,   118,   157,   158,   159,   160,    97,   116,   117,   118,
     115,   118,   117,   116,   116,   118,   118,   118,   116,   116,
     118,   118,   115,   115,   117,   117,   116,   182,   183,   118,
     115,   186,   117,   115,   189,   117,   191,   117,   118,   117,
     118,   196,   117,   118,   143,   117,   118,   117,   118,   116,
     117,   192,   193,   219,   118,   118,   118,   118,   199,   117,
     215,   117,   117,   117,   117,    -1,   118,   117,   117,   117,
     117,   117,   117,   214,   117,   117,   217,   218,   116,   118,
     235,   118,   237,   238,   117,   117,   117,   115,   118,   118,
      -1,   118,   118,   118,   117,   300,   117,   117,   117,   117,
     117,   115,   117,    -1,   117,   116,   118,   117,   117,   117,
     116,   118,   117,   117,   117,   117,   117,   272,   273,   117,
     275,   276,   117,   117,   117,   117,   117,   117,   117,    -1,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   117,   115,   118,   118,    -1,   118,   118,
     118,   118,   118,   308,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   309,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   338,   118,   118,   118,   342,   118,   344,
     118,   332,   118,   117,   117,   117,   117,   117,   117,   117,
     117,   356,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   117,   115,   118,   118,   314,   315,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     385,   118,   118,   118,   333,   118,   118,   117,   116,   118,
     395,   407,   408,   118,   118,   118,   118,   118,   403,   118,
     118,   406,   118,   408,   118,   118,   118,   118,   118,   117,
     117,   117,   117,   117,   116,   118,   407,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   391,   118,   449,   118,   118,   118,   453,   118,
     118,   118,   457,   118,   118,   118,   118,   118,   118,   117,
     117,   466,   118,   117,    -1,   118,   118,   118,   118,   118,
     118,   118,   118,   464,   465,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   117,   116,   118,   492,   118,   118,
     118,   118,   497,   118,   118,   118,   118,   117,   447,   504,
     117,   506,   118,   494,   117,    -1,   118,   118,   513,   118,
     118,   118,   118,   118,   118,   118,   507,   508,   118,   118,
     118,   118,   118,   116,   116,    -1,    -1,   118,   118,   534,
     116,   536,   116,   118,   539,   118,   118,   118,   117,    -1,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   117,    -1,   118,   118,
     565,   116,   567,   568,   569,   116,   571,   572,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   116,
     118,    -1,   118,   118,   533,   116,   118,   117,   116,   118,
      -1,   118,   118,   118,   543,   544,   118,   602,   116,   118,
      -1,   118,   118,   118,   118,   610,   118,   118,   118,   118,
     118,   560,   561,   118,   619,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,     1,   584,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   116,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   116,   116,    -1,
     116,    -1,   119,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   116,   118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   121,   131,     0,   132,     1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   119,   133,   117,   118,
     118,   118,   115,   118,   115,   118,   117,   118,   118,   118,
     118,   118,   118,   117,   118,   117,   117,   117,   117,   117,
     115,   118,   123,   125,   126,   118,   117,   115,   118,   115,
     118,   115,   118,   117,   117,   117,   118,   117,   117,   117,
     117,   118,   117,   118,   115,   118,   115,   118,   115,   118,
     117,   117,   117,   118,   115,   115,   118,   118,   118,   118,
     115,   118,   117,   117,   117,   117,   117,   117,   129,   130,
     115,   127,   127,   127,   115,   117,   117,   117,   118,   127,
     115,   118,   115,   118,   115,   118,   115,   118,   115,   118,
     115,   118,   115,   118,   117,   117,   129,   117,   118,   117,
     117,   117,   118,   117,   118,   125,   126,   117,   115,   117,
     128,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     114,   118,   117,   118,   118,   118,   118,   118,   129,   118,
     118,   118,   118,   118,   118,   118,   129,   118,   117,   129,
     129,   116,   123,   118,   125,   129,   118,   118,   118,   118,
     118,   118,   117,   118,   129,   117,   118,   118,   118,   129,
     129,   129,   129,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   129,   129,   129,
     115,   126,   128,   129,   116,   118,   122,   129,   127,   127,
     118,   118,   129,   118,   118,   127,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     127,   129,   127,   127,   128,   117,   117,   124,   117,   117,
     117,   117,   117,   129,   117,   129,   129,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   117,   116,   118,   118,
     118,   118,   118,   118,   117,   129,   129,   129,   129,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   116,   118,   129,   127,   118,   115,   117,   117,
     125,   125,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   117,   127,   125,   115,
     117,   116,   117,   129,   117,   117,   117,   129,   129,   118,
     118,   118,   118,   118,   118,   129,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   129,   118,   118,   118,   118,   118,   125,   118,   118,
     118,   129,   118,   118,   118,   118,   118,   118,   118,   129,
     118,   118,   129,   115,   127,   128,   128,   129,   118,   117,
     117,   118,   117,   118,   118,   118,   118,   116,   116,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   117,   118,   125,   118,   129,   116,   118,   129,
     118,   118,   118,   129,   116,   118,   118,   127,   127,   129,
     118,   117,   117,   118,   117,   116,   116,   118,   118,   118,
     118,   118,   118,   118,   116,   118,   118,   118,   118,   118,
     118,   129,   118,   127,   116,   129,   116,   118,   118,   116,
     129,   118,   129,   127,   127,   118,   118,   118,   129,   117,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   125,   129,   129,   118,   118,   129,   116,   125,   125,
     118,   118,   118,   117,   118,   118,   116,   116,   118,   118,
     118,   118,   118,   125,   125,   118,   129,   129,   129,   129,
     118,   129,   129,   118,   118,   118,   118,   116,   118,   118,
     118,   125,   116,   118,   117,   116,   118,   118,   118,   118,
     118,   129,   116,   118,   118,   118,   118,   118,   129,   118,
     118,   118,   118,   118,   129,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   116,   116,   116,   118,   118,
     118,   115,   117,   116,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   116,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   120,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   132,   131,   131,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       2,     1,     1,     3,     2,     3,     1,     2,     0,     2,
       2,     0,     3,     0,     1,     3,     1,     2,     1,     1,
       1,     4,     2,     5,     7,     5,     7,     3,     3,     7,
       4,     1,     3,     2,     3,     4,     3,     3,     6,     5,
       3,     3,     2,     3,     2,     3,     1,     1,     4,     4,
       6,     6,     9,    11,     4,     4,     3,     4,     4,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     9,     7,
       9,     7,     5,     7,     3,     2,     2,     1,     2,     1,
      19,    19,     2,     4,     4,     5,     8,    10,     3,     3,
       2,     2,     1,     1,     3,     2,     3,     4,     5,     5,
      22,    22,    39,     3,     7,    12,    10,     6,     8,     5,
       7,     6,     8,     9,    11,     6,     8,     5,     7,     7,
       9,     5,     2,     9,     9,     5,     6,     3,    11,     2,
       1,     2,     2,     1,     2,     2,     2,     1,     9,     4,
       9,     7,    13,     4,     3,     1,     1,     1,     4,     3,
       1,     3,     1,     2,     2,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3:
#line 631 "rib.y"
                                {
					intArgs.push((int) (yyvsp[0].real));
					(yyval.integer)	=	(yyvsp[-1].integer)	+	1;
				}
#line 2364 "rib.cpp"
    break;

  case 4:
#line 637 "rib.y"
                                {
					intArgs.push((int) (yyvsp[0].real));
					(yyval.integer)	=	1;
				}
#line 2373 "rib.cpp"
    break;

  case 5:
#line 646 "rib.y"
                                {
					floatArgs.push((yyvsp[0].real));
					(yyval.integer)	=	(yyvsp[-1].integer)	+	1;
				}
#line 2382 "rib.cpp"
    break;

  case 6:
#line 652 "rib.y"
                                {
					floatArgs.push((yyvsp[0].real));
					(yyval.integer)	=	1;
				}
#line 2391 "rib.cpp"
    break;

  case 7:
#line 660 "rib.y"
                                {
					stringArgs.push((yyvsp[0].string));
					(yyval.integer)	=	(yyvsp[-1].integer)	+	1;
				}
#line 2400 "rib.cpp"
    break;

  case 8:
#line 666 "rib.y"
                                {
					stringArgs.push((yyvsp[0].string));
					(yyval.integer)	=	1;
				}
#line 2409 "rib.cpp"
    break;

  case 9:
#line 675 "rib.y"
                                {
					(yyval.integer) = (yyvsp[-1].integer);
				}
#line 2417 "rib.cpp"
    break;

  case 10:
#line 681 "rib.y"
                                {
					(yyval.integer) = 0;
				}
#line 2425 "rib.cpp"
    break;

  case 11:
#line 688 "rib.y"
                                {
					(yyval.integer)	=	(yyvsp[0].integer);
				}
#line 2433 "rib.cpp"
    break;

  case 12:
#line 693 "rib.y"
                                {
					(yyval.integer)	=	(yyvsp[0].integer);
				}
#line 2441 "rib.cpp"
    break;

  case 13:
#line 701 "rib.y"
                                {
					(yyval.integer) = (yyvsp[-1].integer);
				}
#line 2449 "rib.cpp"
    break;

  case 14:
#line 707 "rib.y"
                                {
					(yyval.integer) = 0;
				}
#line 2457 "rib.cpp"
    break;

  case 15:
#line 716 "rib.y"
                                {
					(yyval.integer)	=	(yyvsp[-1].integer);
				}
#line 2465 "rib.cpp"
    break;

  case 16:
#line 721 "rib.y"
                                {
					stringArgs.push((yyvsp[0].string));
					(yyval.integer)	= 1;
				}
#line 2474 "rib.cpp"
    break;

  case 17:
#line 731 "rib.y"
                                {
				}
#line 2481 "rib.cpp"
    break;

  case 18:
#line 734 "rib.y"
                                {
					int	i;

					assert(numParameters < maxParameter);

					// Fix the pointers
					for (i=0;i<numParameters;i++) {
						tokens[i]				=	parameters[i].name;

						if (parameters[i].type == RT_TEXT)
							vals[i]				=	(RtPointer) (stringArgs.array + parameters[i].valuesStart);
						else
							vals[i]				=	(RtPointer) (floatArgs.array + parameters[i].valuesStart);

					}
				}
#line 2502 "rib.cpp"
    break;

  case 19:
#line 754 "rib.y"
                                {
					// A parameter is either a float array
					parameters[numParameters].name			=	(yyvsp[-1].string);
					parameters[numParameters].type			=	RT_FLOAT;
					parameters[numParameters].numItems		=	(yyvsp[0].integer);
					parameters[numParameters].valuesStart	=	floatArgs.numItems-(yyvsp[0].integer);
					numParameters++;
					paramCheck();
				}
#line 2516 "rib.cpp"
    break;

  case 20:
#line 766 "rib.y"
                                {	
					// Or a string array
					parameters[numParameters].name			=	(yyvsp[-1].string);
					parameters[numParameters].type			=	RT_TEXT;
					parameters[numParameters].numItems		=	(yyvsp[0].integer);
					parameters[numParameters].valuesStart	=	stringArgs.numItems-(yyvsp[0].integer);
					numParameters++;
					paramCheck();
				}
#line 2530 "rib.cpp"
    break;

  case 21:
#line 778 "rib.y"
                                {
					// Save the line number in case we have an error
					ribCommandLineno		=	ribLineno;
					
					// Reset the number of parameters
					floatArgs.numItems		=	0;
					intArgs.numItems		=	0;
					stringArgs.numItems		=	0;
					numParameters			=	0;
					
					// Restore the memory
					memRestore(memoryCheckpoint,CRenderer::globalMemory);
				}
#line 2548 "rib.cpp"
    break;

  case 22:
#line 792 "rib.y"
                                {	
				}
#line 2555 "rib.cpp"
    break;

  case 24:
#line 799 "rib.y"
                                {
					if (callback != NULL) {
						callback((yyvsp[0].string));
					}
				}
#line 2565 "rib.cpp"
    break;

  case 25:
#line 808 "rib.y"
                                {
					RiDeclare((yyvsp[-1].string),(yyvsp[0].string));
				}
#line 2573 "rib.cpp"
    break;

  case 26:
#line 813 "rib.y"
                                {
					RiFrameBegin(0);
				}
#line 2581 "rib.cpp"
    break;

  case 27:
#line 819 "rib.y"
                                {
					RiFrameBegin((int) (yyvsp[0].real));
				}
#line 2589 "rib.cpp"
    break;

  case 28:
#line 824 "rib.y"
                                {
					RiFrameEnd();
				}
#line 2597 "rib.cpp"
    break;

  case 29:
#line 829 "rib.y"
                                {
					// Save the checkpoint
					worldCheckpoint		=	memoryCheckpoint;
					
					// Call the worldbegin
					RiWorldBegin();
					
					// Create a new checkpoint because we allocate some stuff in RiWorldBegin
					memSave(memoryCheckpoint,CRenderer::globalMemory);
					
				}
#line 2613 "rib.cpp"
    break;

  case 30:
#line 842 "rib.y"
                                {
					RiWorldEnd();
					
					// Restore the checkpoint to that before the world begin
					memoryCheckpoint	=	worldCheckpoint;
				}
#line 2624 "rib.cpp"
    break;

  case 31:
#line 853 "rib.y"
                                {
					RiFormat((int) (yyvsp[-2].real),(int) (yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2632 "rib.cpp"
    break;

  case 32:
#line 859 "rib.y"
                                {
					RiFrameAspectRatio((yyvsp[0].real));
				}
#line 2640 "rib.cpp"
    break;

  case 33:
#line 868 "rib.y"
                                {
					RiScreenWindow((yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2648 "rib.cpp"
    break;

  case 34:
#line 879 "rib.y"
                                {
					RiScreenWindow((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real));
				}
#line 2656 "rib.cpp"
    break;

  case 35:
#line 888 "rib.y"
                                {
					RiCropWindow((yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2664 "rib.cpp"
    break;

  case 36:
#line 899 "rib.y"
                                {
					RiCropWindow((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real));
				}
#line 2672 "rib.cpp"
    break;

  case 37:
#line 906 "rib.y"
                                {
					RiProjectionV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 2680 "rib.cpp"
    break;

  case 38:
#line 913 "rib.y"
                                {
					RiClipping((yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2688 "rib.cpp"
    break;

  case 39:
#line 924 "rib.y"
                                {
					RiClippingPlane((yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2696 "rib.cpp"
    break;

  case 40:
#line 932 "rib.y"
                                {
					RiDepthOfField((yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2704 "rib.cpp"
    break;

  case 41:
#line 937 "rib.y"
                                {
					RiDepthOfField(C_INFINITY,1,1);
				}
#line 2712 "rib.cpp"
    break;

  case 42:
#line 944 "rib.y"
                                {
					RiShutter((yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2720 "rib.cpp"
    break;

  case 43:
#line 950 "rib.y"
                                {
					RiPixelVariance((yyvsp[0].real));
				}
#line 2728 "rib.cpp"
    break;

  case 44:
#line 957 "rib.y"
                                {
					RiPixelSamples((yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2736 "rib.cpp"
    break;

  case 45:
#line 965 "rib.y"
                                {
					RtFilterFunc	f;

					if ((f = getFilter((yyvsp[-2].string))) != NULL) {
						RiPixelFilter(f,(yyvsp[-1].real),(yyvsp[0].real));
					}
				}
#line 2748 "rib.cpp"
    break;

  case 46:
#line 976 "rib.y"
                                {
					RiExposure((yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2756 "rib.cpp"
    break;

  case 47:
#line 983 "rib.y"
                                {
					// No parameter list checking is performed for the shaders
					if (parameterListCheck()) {
						RiImagerV((yyvsp[-1].string),numParameters,tokens,vals);
					}
				}
#line 2767 "rib.cpp"
    break;

  case 48:
#line 996 "rib.y"
                                {
					RiQuantize((yyvsp[-4].string),(int) (yyvsp[-3].real),(int) (yyvsp[-2].real),(int) (yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2775 "rib.cpp"
    break;

  case 49:
#line 1005 "rib.y"
                                {
					RiDisplayV((yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 2783 "rib.cpp"
    break;

  case 50:
#line 1012 "rib.y"
                                {
					RiDisplayChannelV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 2791 "rib.cpp"
    break;

  case 51:
#line 1019 "rib.y"
                                {
					if (parameterListCheck()) {
						RiHiderV((yyvsp[-1].string),numParameters,tokens,vals);
					}
				}
#line 2801 "rib.cpp"
    break;

  case 52:
#line 1027 "rib.y"
                                {
					if ((floatArgs.numItems & 1) || ((floatArgs.numItems % 6) != 0)) {
						error(CODE_MISSINGDATA,"ColorSamples: Invalid number of arguments (\"%d\")\n",floatArgs.numItems);
					} else {
						int		n		=	floatArgs.numItems/6;
						float	*argf1	=	getFloat(0);
						float	*argf2	=	getFloat(n*3);

						RiColorSamples(n,argf1,argf2);
					}
				}
#line 2817 "rib.cpp"
    break;

  case 53:
#line 1042 "rib.y"
                                {
					if (((yyvsp[-1].integer) != (yyvsp[0].integer)) || ((floatArgs.numItems % 6) != 0)) {
						error(CODE_MISSINGDATA,"ColorSamples: Invalid number of arguments (\"%d\")\n",floatArgs.numItems);
					} else {
						int		n		=	floatArgs.numItems/6;
						float	*argf1	=	getFloat(0);
						float	*argf2	=	getFloat(n*3);

						RiColorSamples(n,argf1,argf2);
					}
				}
#line 2833 "rib.cpp"
    break;

  case 54:
#line 1056 "rib.y"
                                {
					RiRelativeDetail((yyvsp[0].real));	
				}
#line 2841 "rib.cpp"
    break;

  case 55:
#line 1063 "rib.y"
                                {
					if (parameterListCheck()) {
						RiOptionV((yyvsp[-1].string),numParameters,tokens,vals);
					}
				}
#line 2851 "rib.cpp"
    break;

  case 56:
#line 1070 "rib.y"
                                {
					RiAttributeBegin();
				}
#line 2859 "rib.cpp"
    break;

  case 57:
#line 1075 "rib.y"
                                {
					RiAttributeEnd();
				}
#line 2867 "rib.cpp"
    break;

  case 58:
#line 1083 "rib.y"
                                {
					RtColor	color;

					color[0]	=	(yyvsp[-2].real);
					color[1]	=	(yyvsp[-1].real);
					color[2]	=	(yyvsp[0].real);

					RiColor(color);
				}
#line 2881 "rib.cpp"
    break;

  case 59:
#line 1097 "rib.y"
                                {
					RtColor	color;

					color[0]	=	(yyvsp[-2].real);
					color[1]	=	(yyvsp[-1].real);
					color[2]	=	(yyvsp[0].real);

					RiOpacity(color);
				}
#line 2895 "rib.cpp"
    break;

  case 60:
#line 1113 "rib.y"
                                {
					RtColor	color;

					color[0]	=	(yyvsp[-3].real);
					color[1]	=	(yyvsp[-2].real);
					color[2]	=	(yyvsp[-1].real);

					RiColor(color);
				}
#line 2909 "rib.cpp"
    break;

  case 61:
#line 1129 "rib.y"
                                {
					RtColor	color;

					color[0]	=	(yyvsp[-3].real);
					color[1]	=	(yyvsp[-2].real);
					color[2]	=	(yyvsp[-1].real);

					RiOpacity(color);
				}
#line 2923 "rib.cpp"
    break;

  case 62:
#line 1148 "rib.y"
                                {
					RiTextureCoordinates((yyvsp[-7].real),(yyvsp[-6].real),(yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 2931 "rib.cpp"
    break;

  case 63:
#line 1163 "rib.y"
                                {
					RiTextureCoordinates((yyvsp[-8].real),(yyvsp[-7].real),(yyvsp[-6].real),(yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real));
				}
#line 2939 "rib.cpp"
    break;

  case 64:
#line 1171 "rib.y"
                                {
					TLight	*nLight	=	new TLight;
					nLight->index	=	(int) (yyvsp[-1].real);
					nLight->name	=	NULL;
					nLight->handle	=	RiLightSourceV((yyvsp[-2].string),numParameters,tokens,vals);					
					nLight->next	=	lights;
					lights			=	nLight;
				}
#line 2952 "rib.cpp"
    break;

  case 65:
#line 1184 "rib.y"
                                {
					TLight	*nLight	=	new TLight;
					nLight->index	=	0;
					nLight->name	=	strdup((yyvsp[-1].string));
					nLight->handle	=	RiLightSourceV((yyvsp[-2].string),numParameters,tokens,vals);					
					nLight->next	=	lights;
					lights			=	nLight;
				}
#line 2965 "rib.cpp"
    break;

  case 66:
#line 1196 "rib.y"
                                {
					RiLightSourceV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 2973 "rib.cpp"
    break;

  case 67:
#line 1204 "rib.y"
                                {
					TLight	*nLight	=	new TLight;
					nLight->index	=	(int) (yyvsp[-1].real);
					nLight->name	=	NULL;
					nLight->handle	=	RiAreaLightSourceV((yyvsp[-2].string),numParameters,tokens,vals);					
					nLight->next	=	lights;
					lights			=	nLight;
				}
#line 2986 "rib.cpp"
    break;

  case 68:
#line 1217 "rib.y"
                                {
					TLight	*nLight	=	new TLight;
					nLight->index	=	0;
					nLight->name	=	strdup((yyvsp[-1].string));
					nLight->handle	=	RiAreaLightSourceV((yyvsp[-2].string),numParameters,tokens,vals);					
					nLight->next	=	lights;
					lights			=	nLight;
				}
#line 2999 "rib.cpp"
    break;

  case 69:
#line 1229 "rib.y"
                                {
					TLight	*cLight;
					
					for (cLight=lights;cLight!=NULL;cLight=cLight->next)
						if (cLight->index == (int) (yyvsp[-1].real))	break;
						
					if (cLight != NULL) {
						RiIlluminate(cLight->handle,(int) (yyvsp[0].real));
					} else {
						error(CODE_RANGE,"The light %d is not found",(int) (yyvsp[-1].real));
					}
				}
#line 3016 "rib.cpp"
    break;

  case 70:
#line 1245 "rib.y"
                                {
					TLight	*cLight;
					
					for (cLight=lights;cLight!=NULL;cLight=cLight->next)
						if (cLight->name != NULL) {
							if (strcmp(cLight->name,(yyvsp[-1].string)) == 0) break;
						}
						
					if (cLight != NULL) {
						RiIlluminate(cLight->handle,(int) (yyvsp[0].real));
					} else {
						error(CODE_RANGE,"The light \"%s\" is not found",(yyvsp[-1].string));
					}
				}
#line 3035 "rib.cpp"
    break;

  case 71:
#line 1263 "rib.y"
                                {
					RiSurfaceV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 3043 "rib.cpp"
    break;

  case 72:
#line 1270 "rib.y"
                                {
					RiAtmosphereV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 3051 "rib.cpp"
    break;

  case 73:
#line 1277 "rib.y"
                                {
					RiInteriorV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 3059 "rib.cpp"
    break;

  case 74:
#line 1284 "rib.y"
                                {
					RiExteriorV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 3067 "rib.cpp"
    break;

  case 75:
#line 1290 "rib.y"
                                {
					RiShadingRate((yyvsp[0].real));
				}
#line 3075 "rib.cpp"
    break;

  case 76:
#line 1296 "rib.y"
                                {
					RiShadingInterpolation((yyvsp[0].string));
				}
#line 3083 "rib.cpp"
    break;

  case 77:
#line 1302 "rib.y"
                                {
					RiMatte((RtBoolean) (yyvsp[0].real));
				}
#line 3091 "rib.cpp"
    break;

  case 78:
#line 1315 "rib.y"
                                {
					RtBound	bound;

					bound[0]	=	(yyvsp[-6].real);
					bound[1]	=	(yyvsp[-5].real);
					bound[2]	=	(yyvsp[-4].real);
					bound[3]	=	(yyvsp[-3].real);
					bound[4]	=	(yyvsp[-2].real);
					bound[5]	=	(yyvsp[-1].real);

					RiBound(bound);
				}
#line 3108 "rib.cpp"
    break;

  case 79:
#line 1335 "rib.y"
                                {
					RtBound	bound;

					bound[0]	=	(yyvsp[-5].real);
					bound[1]	=	(yyvsp[-4].real);
					bound[2]	=	(yyvsp[-3].real);
					bound[3]	=	(yyvsp[-2].real);
					bound[4]	=	(yyvsp[-1].real);
					bound[5]	=	(yyvsp[0].real);

					RiBound(bound);
				}
#line 3125 "rib.cpp"
    break;

  case 80:
#line 1357 "rib.y"
                                {
					RtBound	bound;

					bound[0]	=	(yyvsp[-6].real);
					bound[1]	=	(yyvsp[-5].real);
					bound[2]	=	(yyvsp[-4].real);
					bound[3]	=	(yyvsp[-3].real);
					bound[4]	=	(yyvsp[-2].real);
					bound[5]	=	(yyvsp[-1].real);

					RiDetail(bound);
				}
#line 3142 "rib.cpp"
    break;

  case 81:
#line 1377 "rib.y"
                                {
					RtBound	bound;

					bound[0]	=	(yyvsp[-5].real);
					bound[1]	=	(yyvsp[-4].real);
					bound[2]	=	(yyvsp[-3].real);
					bound[3]	=	(yyvsp[-2].real);
					bound[4]	=	(yyvsp[-1].real);
					bound[5]	=	(yyvsp[0].real);

					RiDetail(bound);
				}
#line 3159 "rib.cpp"
    break;

  case 82:
#line 1395 "rib.y"
                                {
					RiDetailRange((yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 3167 "rib.cpp"
    break;

  case 83:
#line 1406 "rib.y"
                                {
					RiDetailRange((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real));
				}
#line 3175 "rib.cpp"
    break;

  case 84:
#line 1413 "rib.y"
                                {
					RiGeometricApproximation((yyvsp[-1].string),(yyvsp[0].real));
				}
#line 3183 "rib.cpp"
    break;

  case 85:
#line 1419 "rib.y"
                                {
					RiGeometricRepresentation((yyvsp[0].string));
				}
#line 3191 "rib.cpp"
    break;

  case 86:
#line 1425 "rib.y"
                                {
					RiOrientation((yyvsp[0].string));
				}
#line 3199 "rib.cpp"
    break;

  case 87:
#line 1430 "rib.y"
                                {
					RiReverseOrientation();
				}
#line 3207 "rib.cpp"
    break;

  case 88:
#line 1436 "rib.y"
                                {
					RiSides((int) (yyvsp[0].real));
				}
#line 3215 "rib.cpp"
    break;

  case 89:
#line 1441 "rib.y"
                                {
					RiIdentity();
				}
#line 3223 "rib.cpp"
    break;

  case 90:
#line 1464 "rib.y"
                                {
					RtMatrix	tmp;

					tmp[0][0]	=	(yyvsp[-16].real);
					tmp[0][1]	=	(yyvsp[-15].real);
					tmp[0][2]	=	(yyvsp[-14].real);
					tmp[0][3]	=	(yyvsp[-13].real);
					tmp[1][0]	=	(yyvsp[-12].real);
					tmp[1][1]	=	(yyvsp[-11].real);
					tmp[1][2]	=	(yyvsp[-10].real);
					tmp[1][3]	=	(yyvsp[-9].real);
					tmp[2][0]	=	(yyvsp[-8].real);
					tmp[2][1]	=	(yyvsp[-7].real);
					tmp[2][2]	=	(yyvsp[-6].real);
					tmp[2][3]	=	(yyvsp[-5].real);
					tmp[3][0]	=	(yyvsp[-4].real);
					tmp[3][1]	=	(yyvsp[-3].real);
					tmp[3][2]	=	(yyvsp[-2].real);
					tmp[3][3]	=	(yyvsp[-1].real);

					RiTransform(tmp);
				}
#line 3250 "rib.cpp"
    break;

  case 91:
#line 1506 "rib.y"
                                {
					RtMatrix	tmp;

					tmp[0][0]	=	(yyvsp[-16].real);
					tmp[0][1]	=	(yyvsp[-15].real)	;
					tmp[0][2]	=	(yyvsp[-14].real);
					tmp[0][3]	=	(yyvsp[-13].real);
					tmp[1][0]	=	(yyvsp[-12].real);
					tmp[1][1]	=	(yyvsp[-11].real);
					tmp[1][2]	=	(yyvsp[-10].real);
					tmp[1][3]	=	(yyvsp[-9].real);
					tmp[2][0]	=	(yyvsp[-8].real);
					tmp[2][1]	=	(yyvsp[-7].real);
					tmp[2][2]	=	(yyvsp[-6].real);
					tmp[2][3]	=	(yyvsp[-5].real);
					tmp[3][0]	=	(yyvsp[-4].real);
					tmp[3][1]	=	(yyvsp[-3].real);
					tmp[3][2]	=	(yyvsp[-2].real);
					tmp[3][3]	=	(yyvsp[-1].real);

					RiConcatTransform(tmp);
				}
#line 3277 "rib.cpp"
    break;

  case 92:
#line 1531 "rib.y"
                                {
					RiPerspective((yyvsp[0].real));
				}
#line 3285 "rib.cpp"
    break;

  case 93:
#line 1539 "rib.y"
                                {
					RiTranslate((yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 3293 "rib.cpp"
    break;

  case 94:
#line 1547 "rib.y"
                                {
					RiScale((yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 3301 "rib.cpp"
    break;

  case 95:
#line 1556 "rib.y"
                                {
					RiRotate((yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 3309 "rib.cpp"
    break;

  case 96:
#line 1568 "rib.y"
                                {
					RiSkew((yyvsp[-6].real),(yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),(yyvsp[0].real));
				}
#line 3317 "rib.cpp"
    break;

  case 97:
#line 1582 "rib.y"
                                {
					RiSkew((yyvsp[-7].real),(yyvsp[-6].real),(yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real));
				}
#line 3325 "rib.cpp"
    break;

  case 98:
#line 1589 "rib.y"
                                {
					RiDeformationV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 3333 "rib.cpp"
    break;

  case 99:
#line 1596 "rib.y"
                                {
					RiDisplacementV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 3341 "rib.cpp"
    break;

  case 100:
#line 1602 "rib.y"
                                {
					RiCoordinateSystem((yyvsp[0].string));
				}
#line 3349 "rib.cpp"
    break;

  case 101:
#line 1608 "rib.y"
                                {
					RiCoordSysTransform((yyvsp[0].string));
				}
#line 3357 "rib.cpp"
    break;

  case 102:
#line 1613 "rib.y"
                                {
					RiTransformBegin();
				}
#line 3365 "rib.cpp"
    break;

  case 103:
#line 1618 "rib.y"
                                {
					RiTransformEnd();
				}
#line 3373 "rib.cpp"
    break;

  case 104:
#line 1625 "rib.y"
                                {
					if (parameterListCheck()) {
						RiAttributeV((yyvsp[-1].string),numParameters,tokens,vals);
					}
				}
#line 3383 "rib.cpp"
    break;

  case 105:
#line 1633 "rib.y"
                                {
					if (parameterListCheck()) {	
						if (sizeCheck(numVertex,0,0,1)) {
							RiPolygonV(numVertex,numParameters,tokens,vals);
						}
					}
				}
#line 3395 "rib.cpp"
    break;

  case 106:
#line 1644 "rib.y"
                                {
					int		*argi	=	getInt(0);

					if (parameterListCheck()) {
						if (sizeCheck(numVertex,0,0,1)) {
							RiGeneralPolygonV((yyvsp[-1].integer),argi,numParameters,tokens,vals);
						}
					}
				}
#line 3409 "rib.cpp"
    break;

  case 107:
#line 1658 "rib.y"
                                {
					int	*argi1		=	getInt(0);
					int	*argi2		=	getInt((yyvsp[-2].integer));
					int	nvertices	=	0;
					int	i;
					int	maxVertex	=	0;


					// Find out how many items are in verts array
					for (i=0;i<(yyvsp[-2].integer);i++) {
						nvertices	+=	argi1[i];
					}

					if (nvertices != (yyvsp[-1].integer)) {
						error(CODE_MISSINGDATA,"Vertex count mismatch (%d != %d)\n",nvertices,(yyvsp[-1].integer));
					} else {
						// Find out the number of vertices required
						for (i=0,maxVertex=0;i<nvertices;i++) {
							if (argi2[i] > maxVertex)
								maxVertex	=	argi2[i];
						}

						maxVertex++;

						if (parameterListCheck()) {
							if (sizeCheck(maxVertex,0,nvertices,(yyvsp[-2].integer))) {
								RiPointsPolygonsV((yyvsp[-2].integer),argi1,argi2,numParameters,tokens,vals);
							}
						}
					}
				}
#line 3445 "rib.cpp"
    break;

  case 108:
#line 1695 "rib.y"
                                {
					int	*argi1		=	getInt(0);
					int	*argi2		=	getInt((yyvsp[-3].integer));
					int	*argi3		=	getInt((yyvsp[-2].integer)+(yyvsp[-3].integer));
					int	numvertices	=	0;
					int	numloops	=	0;
					int	maxVertex	=	0;
					int	i;

					for (i=0;i<(yyvsp[-3].integer);i++) {
						numloops	+=	argi1[i];
					}

					if (numloops != (yyvsp[-2].integer)) {
						error(CODE_MISSINGDATA,"Loop count mismatch (%d != %d)\n",numloops,(yyvsp[-2].integer));
					} else {
						for (i=0;i<(yyvsp[-2].integer);i++) {
							numvertices	+=	argi2[i];
						}

						if (numvertices != (yyvsp[-1].integer)) {
							error(CODE_MISSINGDATA,"Vertex count mismatch (%d != %d)\n",numvertices,(yyvsp[-1].integer));
						} else {
							for (i=0;i<numvertices;i++) {
								if (argi3[i] > maxVertex)
									maxVertex	=	argi3[i];
							}

							maxVertex++;

							if (parameterListCheck()) {
								if (sizeCheck(maxVertex,0,numvertices,(yyvsp[-3].integer))) {
									RiPointsGeneralPolygonsV((yyvsp[-3].integer),argi1,argi2,argi3,numParameters,tokens,vals);
								}
							}
						}
					}
				}
#line 3488 "rib.cpp"
    break;

  case 109:
#line 1739 "rib.y"
                                {
					RtBasis	*argf1,*argf2;

					if ((getBasis(&argf1,(yyvsp[-3].string))) && (getBasis(&argf2,(yyvsp[-1].string)))) {
						RiBasis(argf1[0],(int) (yyvsp[-2].real), argf2[0],(int) (yyvsp[0].real));
					}
				}
#line 3500 "rib.cpp"
    break;

  case 110:
#line 1769 "rib.y"
                                {
					RtBasis	*argf2;

					if (getBasis(&argf2,(yyvsp[-1].string))) {
						RtBasis	tmp;
					
						tmp[0][0]	=	(yyvsp[-19].real);
						tmp[0][1]	=	(yyvsp[-18].real);
						tmp[0][2]	=	(yyvsp[-17].real);
						tmp[0][3]	=	(yyvsp[-16].real);
						tmp[1][0]	=	(yyvsp[-15].real);
						tmp[1][1]	=	(yyvsp[-14].real);
						tmp[1][2]	=	(yyvsp[-13].real);
						tmp[1][3]	=	(yyvsp[-12].real);
						tmp[2][0]	=	(yyvsp[-11].real);
						tmp[2][1]	=	(yyvsp[-10].real);
						tmp[2][2]	=	(yyvsp[-9].real);
						tmp[2][3]	=	(yyvsp[-8].real);
						tmp[3][0]	=	(yyvsp[-7].real);
						tmp[3][1]	=	(yyvsp[-6].real);
						tmp[3][2]	=	(yyvsp[-5].real);
						tmp[3][3]	=	(yyvsp[-4].real);
										
						RiBasis(tmp,(int) (yyvsp[-2].real),argf2[0],(int) (yyvsp[0].real));
					}
				}
#line 3531 "rib.cpp"
    break;

  case 111:
#line 1818 "rib.y"
                                {
					RtBasis	*argf1;

					if (getBasis(&argf1,(yyvsp[-20].string))) {
						RtBasis	tmp;
					
						tmp[0][0]	=	(yyvsp[-17].real);
						tmp[0][1]	=	(yyvsp[-16].real);
						tmp[0][2]	=	(yyvsp[-15].real);
						tmp[0][3]	=	(yyvsp[-14].real);
						tmp[1][0]	=	(yyvsp[-13].real);
						tmp[1][1]	=	(yyvsp[-12].real);
						tmp[1][2]	=	(yyvsp[-11].real);
						tmp[1][3]	=	(yyvsp[-10].real);
						tmp[2][0]	=	(yyvsp[-9].real);
						tmp[2][1]	=	(yyvsp[-8].real);
						tmp[2][2]	=	(yyvsp[-7].real);
						tmp[2][3]	=	(yyvsp[-6].real);
						tmp[3][0]	=	(yyvsp[-5].real);
						tmp[3][1]	=	(yyvsp[-4].real);
						tmp[3][2]	=	(yyvsp[-3].real);
						tmp[3][3]	=	(yyvsp[-2].real);

						RiBasis(argf1[0],(int) (yyvsp[-19].real),tmp,(int) (yyvsp[0].real));
					}
				}
#line 3562 "rib.cpp"
    break;

  case 112:
#line 1884 "rib.y"
                                {
					RtBasis	b1,b2;

					b1[0][0]	=	(yyvsp[-36].real);
					b1[0][1]	=	(yyvsp[-35].real);
					b1[0][2]	=	(yyvsp[-34].real);
					b1[0][3]	=	(yyvsp[-33].real);
					b1[1][0]	=	(yyvsp[-32].real);
					b1[1][1]	=	(yyvsp[-31].real);
					b1[1][2]	=	(yyvsp[-30].real);
					b1[1][3]	=	(yyvsp[-29].real);
					b1[2][0]	=	(yyvsp[-28].real);
					b1[2][1]	=	(yyvsp[-27].real);
					b1[2][2]	=	(yyvsp[-26].real);
					b1[2][3]	=	(yyvsp[-25].real);
					b1[3][0]	=	(yyvsp[-24].real);
					b1[3][1]	=	(yyvsp[-23].real);
					b1[3][2]	=	(yyvsp[-22].real);
					b1[3][3]	=	(yyvsp[-21].real);

					b2[0][0]	=	(yyvsp[-17].real);
					b2[0][1]	=	(yyvsp[-16].real);
					b2[0][2]	=	(yyvsp[-15].real);
					b2[0][3]	=	(yyvsp[-14].real);
					b2[1][0]	=	(yyvsp[-13].real);
					b2[1][1]	=	(yyvsp[-12].real);
					b2[1][2]	=	(yyvsp[-11].real);
					b2[1][3]	=	(yyvsp[-10].real);
					b2[2][0]	=	(yyvsp[-9].real);
					b2[2][1]	=	(yyvsp[-8].real);
					b2[2][2]	=	(yyvsp[-7].real);
					b2[2][3]	=	(yyvsp[-6].real);
					b2[3][0]	=	(yyvsp[-5].real);
					b2[3][1]	=	(yyvsp[-4].real);
					b2[3][2]	=	(yyvsp[-3].real);
					b2[3][3]	=	(yyvsp[-2].real);

					RiBasis(b1,(int) (yyvsp[-19].real),b2,(int) (yyvsp[0].real));
				}
#line 3606 "rib.cpp"
    break;

  case 113:
#line 1927 "rib.y"
                                {
					int	numExpectedVertices;
					int	numExpectedPatches	=	1;


					if (strcmp((yyvsp[-1].string),RI_BILINEAR) == 0) {
						numExpectedVertices	=	4;
					} else if (strcmp((yyvsp[-1].string),RI_BICUBIC) == 0) {
						numExpectedVertices	=	16;
					} else {
						error(CODE_BADTOKEN,"Unknown patch type: \"%s\"\n",(yyvsp[-1].string));
						numExpectedVertices	=	0;
					}

					if (numExpectedVertices > 0) {
						if (parameterListCheck()) {
							if (sizeCheck(numExpectedVertices,4,4,1)) {
								RiPatchV((yyvsp[-1].string),numParameters,tokens,vals);
							}
						}
					}
				}
#line 3633 "rib.cpp"
    break;

  case 114:
#line 1957 "rib.y"
                                {
					int	numExpectedVertices;
					int	numuPatches,numvPatches;
					int	nu	=	(int) (yyvsp[-4].real);
					int	nv	=	(int) (yyvsp[-2].real);
					CAttributes	*attributes	=	CRenderer::context->getAttributes(FALSE);
					int	uw,vw;
					int	numVaryings;

					if (strcmp((yyvsp[-3].string),RI_PERIODIC) == 0) {
						uw	=	TRUE;
					} else {
						uw	=	FALSE;
					}

					if (strcmp((yyvsp[-1].string),RI_PERIODIC) == 0) {
						vw	=	TRUE;
					} else {
						vw	=	FALSE;
					}

					if (strcmp((yyvsp[-5].string),RI_BILINEAR) == 0) {
						numExpectedVertices	=	nu*nv;

						if (uw) {
							numuPatches	=	nu;
						} else {
							numuPatches	=	nu-1;
						}


						if (vw) {
							numvPatches	=	nv;
						} else {
							numvPatches	=	nv-1;
						}

						numVaryings		=	nu*nv;
					} else if (strcmp((yyvsp[-5].string),RI_BICUBIC) == 0) {
						numExpectedVertices	=	nu*nv;

						if (uw) {
							numuPatches	=	nu / attributes->uStep;
						} else {
							numuPatches	=	(nu - 4) / attributes->uStep + 1;
						}


						if (vw) {
							numvPatches	=	nv / attributes->vStep;
						} else {
							numvPatches	=	(nv - 4) / attributes->vStep + 1;
						}

						numVaryings		=	(numuPatches+1-uw)*(numvPatches+1-vw);
					} else {
						error(CODE_BADTOKEN,"Unknown patch type: \"%s\"\n",(yyvsp[-5].string));
						numExpectedVertices	=	0;
					}

					if (numExpectedVertices > 0) {
						if (parameterListCheck()) {
							if (sizeCheck(numExpectedVertices,numVaryings,numuPatches*numvPatches*4,numuPatches*numvPatches)) {
								RiPatchMeshV((yyvsp[-5].string),(int) (yyvsp[-4].real),(yyvsp[-3].string),(int) (yyvsp[-2].real),(yyvsp[-1].string),numParameters,tokens,vals);
							}
						}
					}
				}
#line 3706 "rib.cpp"
    break;

  case 115:
#line 2038 "rib.y"
                                {
					float	*argf1	=	getFloat(0);
					float	*argf2	=	getFloat((yyvsp[-8].integer));

					int		uPoints	=	(int) (yyvsp[-10].real);
					int		uOrder	=	(int) (yyvsp[-9].real);
					int		vPoints	=	(int) (yyvsp[-5].real);
					int		vOrder	=	(int) (yyvsp[-4].real);

					int		uPatches	=	uPoints - uOrder+1;
					int		vPatches	=	vPoints - vOrder+1;

					int		numExpectedVertices	=	uPoints*vPoints;

					if (parameterListCheck()) {
						if (sizeCheck(numExpectedVertices,(uPoints-uOrder+2)*(vPoints-vOrder+2),uPatches*vPatches*4,uPatches*vPatches)) {
							RiNuPatchV((int) (yyvsp[-10].real),(int) (yyvsp[-9].real),argf1,(yyvsp[-7].real),(yyvsp[-6].real),(int) (yyvsp[-5].real),(int) (yyvsp[-4].real),argf2,(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3731 "rib.cpp"
    break;

  case 116:
#line 2069 "rib.y"
                                {
					int		*argi1	=	getInt(0);
					int		*argi2	=	getInt((yyvsp[-8].integer));
					float	*argf3	=	getFloat(0);
					float	*argf4	=	getFloat((yyvsp[-6].integer));
					float	*argf5	=	getFloat((yyvsp[-5].integer)+(yyvsp[-6].integer));
					int		*argi6	=	getInt((yyvsp[-7].integer)+(yyvsp[-8].integer));
					float	*argf7	=	getFloat((yyvsp[-4].integer)+(yyvsp[-5].integer)+(yyvsp[-6].integer));
					float	*argf8	=	getFloat((yyvsp[-2].integer)+(yyvsp[-4].integer)+(yyvsp[-5].integer)+(yyvsp[-6].integer));
					float	*argf9	=	getFloat((yyvsp[-1].integer)+(yyvsp[-2].integer)+(yyvsp[-4].integer)+(yyvsp[-5].integer)+(yyvsp[-6].integer));

					RiTrimCurve((yyvsp[-8].integer),argi1,argi2,argf3,argf4,argf5,argi6,argf7,argf8,argf9);
				}
#line 3749 "rib.cpp"
    break;

  case 117:
#line 2089 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiSphereV((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3761 "rib.cpp"
    break;

  case 118:
#line 2105 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiSphereV((yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),numParameters,tokens,vals);
						}
					}
				}
#line 3773 "rib.cpp"
    break;

  case 119:
#line 2118 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiConeV((yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3785 "rib.cpp"
    break;

  case 120:
#line 2133 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiConeV((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),numParameters,tokens,vals);
						}
					}
				}
#line 3797 "rib.cpp"
    break;

  case 121:
#line 2147 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiCylinderV((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3809 "rib.cpp"
    break;

  case 122:
#line 2163 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiCylinderV((yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),numParameters,tokens,vals);
						}
					}
				}
#line 3821 "rib.cpp"
    break;

  case 123:
#line 2180 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RtPoint	p1,p2;

							p1[0]	=	(yyvsp[-7].real);
							p1[1]	=	(yyvsp[-6].real);
							p1[2]	=	(yyvsp[-5].real);
							p2[0]	=	(yyvsp[-4].real);
							p2[1]	=	(yyvsp[-3].real);
							p2[2]	=	(yyvsp[-2].real);

							RiHyperboloidV(p1,p2,(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3842 "rib.cpp"
    break;

  case 124:
#line 2208 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RtPoint	p1,p2;

							p1[0]	=	(yyvsp[-8].real);
							p1[1]	=	(yyvsp[-7].real);
							p1[2]	=	(yyvsp[-6].real);
							p2[0]	=	(yyvsp[-5].real);
							p2[1]	=	(yyvsp[-4].real);
							p2[2]	=	(yyvsp[-3].real);

							RiHyperboloidV(p1,p2,(yyvsp[-2].real),numParameters,tokens,vals);
						}
					}
				}
#line 3863 "rib.cpp"
    break;

  case 125:
#line 2231 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiParaboloidV((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3875 "rib.cpp"
    break;

  case 126:
#line 2247 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiParaboloidV((yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),numParameters,tokens,vals);
						}
					}
				}
#line 3887 "rib.cpp"
    break;

  case 127:
#line 2260 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiDiskV((yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3899 "rib.cpp"
    break;

  case 128:
#line 2275 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiDiskV((yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),numParameters,tokens,vals);
						}
					}
				}
#line 3911 "rib.cpp"
    break;

  case 129:
#line 2290 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiTorusV((yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
						}
					}
				}
#line 3923 "rib.cpp"
    break;

  case 130:
#line 2307 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(0,4,4,1)) {
							RiTorusV((yyvsp[-6].real),(yyvsp[-5].real),(yyvsp[-4].real),(yyvsp[-3].real),(yyvsp[-2].real),numParameters,tokens,vals);
						}
					}
				}
#line 3935 "rib.cpp"
    break;

  case 131:
#line 2320 "rib.y"
                                {
					int			*argi1		=	getInt(0);
					int			numVertices,numUniforms;
					CAttributes	*attributes	=	CRenderer::context->getAttributes(FALSE);
					int			wrap;
					int			numVaryings,i;

					if (strcmp((yyvsp[-1].string),RI_PERIODIC) == 0) {
						wrap	=	TRUE;
					} else {
						wrap	=	FALSE;
					}

					if (strcmp((yyvsp[-3].string),RI_LINEAR) == 0) {
						for (i=0,numVertices=0;i<(yyvsp[-2].integer);i++) {
							numVertices	+=	argi1[i];
						}

						numVaryings		=	numVertices;
						numUniforms		=	(yyvsp[-2].integer);
					} else if (strcmp((yyvsp[-3].string),RI_CUBIC) == 0) {
						for (i=0,numVertices=0,numVaryings=0,numUniforms=0;i<(yyvsp[-2].integer);i++) {
							int	j		=	(argi1[i] - 4) / attributes->vStep + 1;
							numVertices	+=	argi1[i];
							numVaryings	+=	j + (1 - wrap);
						}
						numUniforms		=	(yyvsp[-2].integer);
					} else {
						error(CODE_BADTOKEN,"Unknown patch type: \"%s\"\n",(yyvsp[-3].string));
						numVertices	=	0;
					}

					if (numVertices > 0) {
						if (parameterListCheck()) {
							if (sizeCheck(numVertices,numVaryings,0,numUniforms)) {
								RiCurvesV((yyvsp[-3].string),(yyvsp[-2].integer),argi1,(yyvsp[-1].string),numParameters,tokens,vals);
							}
						}
					}
				}
#line 3980 "rib.cpp"
    break;

  case 132:
#line 2363 "rib.y"
                                {
					if (parameterListCheck()) {
						if (sizeCheck(numVertex,0,0,1)) {
							RiPointsV(numVertex,numParameters,tokens,vals);
						}
					}
				}
#line 3992 "rib.cpp"
    break;

  case 133:
#line 2380 "rib.y"
                                {
					int			*argi1,*argi2,*argi3,*argi4;
					const char	**args1;
					float		*argf1;
					int			numVertices,i,j;

					if (parameterListCheck()) {
						argi1	=	getInt(0);
						argi2	=	getInt((yyvsp[-6].integer));
						args1	=	getString(0);
						argi3	=	getInt((yyvsp[-6].integer)+(yyvsp[-5].integer));
						argi4	=	getInt((yyvsp[-6].integer)+(yyvsp[-5].integer)+(yyvsp[-3].integer));
						argf1	=	getFloat(0);

						// Count the number of faces / vertices
						for (i=0,j=0;i<(yyvsp[-6].integer);j+=argi1[i],i++);

						for (numVertices=-1,i=0;i<j;i++) {
							if (argi2[i] > numVertices)	numVertices	=	argi2[i];
						}
						numVertices++;


						if (sizeCheck(numVertices,numVertices,j,(yyvsp[-6].integer))) {
							RiSubdivisionMeshV((yyvsp[-7].string),(yyvsp[-6].integer),argi1,argi2,(yyvsp[-4].integer),args1,argi3,argi4,argf1,numParameters,tokens,vals);
						}
					}
				}
#line 4025 "rib.cpp"
    break;

  case 134:
#line 2418 "rib.y"
                                {
					// Support for no tags (parsed as int array for arg 5)
					int			*argi1,*argi2,*argi3,*argi4;
					const char	**args1;
					float		*argf1;
					int			numVertices,i,j;

					if (parameterListCheck()) {
						argi1	=	getInt(0);
						argi2	=	getInt((yyvsp[-6].integer));
						args1	=	getString(0);
						argi3	=	getInt((yyvsp[-6].integer)+(yyvsp[-5].integer));
						argi4	=	getInt((yyvsp[-6].integer)+(yyvsp[-5].integer)+(yyvsp[-3].integer));
						argf1	=	getFloat(0);

						if ((yyvsp[-4].integer) == 0) {
							// Count the number of faces / vertices
							for (i=0,j=0;i<(yyvsp[-6].integer);j+=argi1[i],i++);

							for (numVertices=-1,i=0;i<j;i++) {
								if (argi2[i] > numVertices)	numVertices	=	argi2[i];
							}
							numVertices++;


							if (sizeCheck(numVertices,numVertices,j,(yyvsp[-6].integer))) {
								RiSubdivisionMeshV((yyvsp[-7].string),(yyvsp[-6].integer),argi1,argi2,0,args1,argi3,argi4,argf1,numParameters,tokens,vals);
							}
						} else {
							error(CODE_BADTOKEN,"Subdivision surface expected string array (tags) for argument 5\n");
						}
					}
				}
#line 4063 "rib.cpp"
    break;

  case 135:
#line 2487 "rib.y"
                                {
					// FIXME: Not implemented
				}
#line 4071 "rib.cpp"
    break;

  case 136:
#line 2497 "rib.y"
                                {
					// FIXME: Not implemented
				}
#line 4079 "rib.cpp"
    break;

  case 137:
#line 2504 "rib.y"
                                {
					if (parameterListCheck()) {
						RiGeometryV((yyvsp[-1].string),numParameters,tokens,vals);
					}
				}
#line 4089 "rib.cpp"
    break;

  case 138:
#line 2521 "rib.y"
                                {
					RtBound			bound;
					CDelayedData	*cData	=	new CDelayedData;
					const char		**arg;

					bound[0]	=	(yyvsp[-6].real);
					bound[1]	=	(yyvsp[-5].real);
					bound[2]	=	(yyvsp[-4].real);
					bound[3]	=	(yyvsp[-3].real);
					bound[4]	=	(yyvsp[-2].real);
					bound[5]	=	(yyvsp[-1].real);

					cData->bmin[COMP_X]	=	(yyvsp[-6].real);
					cData->bmax[COMP_X]	=	(yyvsp[-5].real);
					
					cData->bmin[COMP_Y]	=	(yyvsp[-4].real);
					cData->bmax[COMP_Y]	=	(yyvsp[-3].real);
					
					cData->bmin[COMP_Z]	=	(yyvsp[-2].real);
					cData->bmax[COMP_Z]	=	(yyvsp[-1].real);

					if (strcmp((yyvsp[-9].string),RI_PROCDELAYEDREADARCHIVE) == 0) {
						if ((yyvsp[-8].integer) != 1) {
							error(CODE_MISSINGDATA,"Procedure delayed archive expects one argument (given %d)\n",(yyvsp[-8].integer));
						} else {
							arg		=	getString(0);

							cData->generator	=	strdup(arg[0]);

							RiProcedural(cData,bound,RiProcDelayedReadArchive,RiProcFree);
						}
					} else if (strcmp((yyvsp[-9].string),RI_PROCRUNPROGRAM) == 0) {
						if ((yyvsp[-8].integer) != 2) {
							error(CODE_MISSINGDATA,"Procedure run program expects two arguments (given %d)\n",(yyvsp[-8].integer));
						} else {
							arg		=	getString(0);

							cData->generator	=	strdup(arg[0]);
							cData->helper		=	strdup(arg[1]);

							RiProcedural(cData,bound,RiProcRunProgram,RiProcFree);
						}
					} else if (strcmp((yyvsp[-9].string),RI_PROCDYNAMICLOAD) == 0) {
						if ((yyvsp[-8].integer) != 2) {
							error(CODE_MISSINGDATA,"Procedure dynamic load expects two arguments (given %d)\n",(yyvsp[-8].integer));
						} else {
							arg		=	getString(0);

							cData->generator	=	strdup(arg[0]);
							cData->helper		=	strdup(arg[1]);

							RiProcedural(cData,bound,RiProcDynamicLoad,RiProcFree);
						}
					} else {
						error(CODE_BADTOKEN,"Unknown procedural: %s\n",(yyvsp[-9].string));
						delete cData;
					}
				}
#line 4152 "rib.cpp"
    break;

  case 139:
#line 2582 "rib.y"
                                {
					RiSolidBegin((yyvsp[0].string));
				}
#line 4160 "rib.cpp"
    break;

  case 140:
#line 2587 "rib.y"
                                {
					RiSolidEnd();
				}
#line 4168 "rib.cpp"
    break;

  case 141:
#line 2593 "rib.y"
                                {
					TObject	*nObject	=	new TObject;
					
					nObject->handle		=	RiObjectBegin();
					nObject->index		=	(int) (yyvsp[0].real);
					nObject->name		=	NULL;
					nObject->next		=	objects;
					objects				=	nObject;
				}
#line 4182 "rib.cpp"
    break;

  case 142:
#line 2605 "rib.y"
                                {
					TObject	*nObject	=	new TObject;
					
					nObject->handle		=	RiObjectBegin();
					nObject->index		=	-1;
					nObject->name		=	strdup((yyvsp[0].string));
					nObject->next		=	objects;
					objects				=	nObject;
				}
#line 4196 "rib.cpp"
    break;

  case 143:
#line 2616 "rib.y"
                                {
					RiObjectEnd();
				}
#line 4204 "rib.cpp"
    break;

  case 144:
#line 2622 "rib.y"
                                {
					TObject	*cObject;
					
					for (cObject=objects;cObject!=NULL;cObject=cObject->next) {
						if (cObject->index == (int) (yyvsp[0].real))	break;
					}
					
					if (cObject != NULL) {
						RiObjectInstance(cObject->handle);
					} else {
						error(CODE_MISSINGDATA,"Object %d is not found\n",(int) (yyvsp[0].real));
					}
				}
#line 4222 "rib.cpp"
    break;

  case 145:
#line 2638 "rib.y"
                                {
					TObject	*cObject;
					
					for (cObject=objects;cObject!=NULL;cObject=cObject->next) {
						if (strcmp(cObject->name,(yyvsp[0].string)) == 0)	break;
					}
					
					if (cObject != NULL) {
						RiObjectInstance(cObject->handle);
					} else {
						error(CODE_MISSINGDATA,"Object \"%s\" is not found\n",(yyvsp[0].string));
					}
				}
#line 4240 "rib.cpp"
    break;

  case 146:
#line 2654 "rib.y"
                                {
					float	*argf	=	getFloat(0);

					RiMotionBeginV((yyvsp[0].integer),argf);
				}
#line 4250 "rib.cpp"
    break;

  case 147:
#line 2661 "rib.y"
                                {
					RiMotionEnd();
				}
#line 4258 "rib.cpp"
    break;

  case 148:
#line 2674 "rib.y"
                                {
					RtFilterFunc	f;

					if ((f		=	getFilter((yyvsp[-3].string))) != NULL)  {
						RiMakeTextureV((yyvsp[-7].string),(yyvsp[-6].string),(yyvsp[-5].string),(yyvsp[-4].string),f,(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
					}
				}
#line 4270 "rib.cpp"
    break;

  case 149:
#line 2686 "rib.y"
                                {
					RiMakeBrickMapV((yyvsp[-2].integer),getString(0),(yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 4278 "rib.cpp"
    break;

  case 150:
#line 2699 "rib.y"
                                {
					RtFilterFunc	f;

					if ((f		=	getFilter((yyvsp[-3].string))) != NULL) {
						RiMakeBumpV((yyvsp[-7].string),(yyvsp[-6].string),(yyvsp[-5].string),(yyvsp[-4].string),f,(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
					}
				}
#line 4290 "rib.cpp"
    break;

  case 151:
#line 2714 "rib.y"
                                {
					RtFilterFunc	f;

					if ((f		=	getFilter((yyvsp[-3].string))) != NULL) {
						RiMakeLatLongEnvironmentV((yyvsp[-5].string),(yyvsp[-4].string),f,(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
					}
				}
#line 4302 "rib.cpp"
    break;

  case 152:
#line 2735 "rib.y"
                                {
					RtFilterFunc	f;

					if ((f =	getFilter((yyvsp[-3].string))) != NULL) {
						RiMakeCubeFaceEnvironmentV((yyvsp[-11].string),(yyvsp[-10].string),(yyvsp[-9].string),(yyvsp[-8].string),(yyvsp[-7].string),(yyvsp[-6].string),(yyvsp[-5].string),(yyvsp[-4].real),f,(yyvsp[-2].real),(yyvsp[-1].real),numParameters,tokens,vals);
					}
				}
#line 4314 "rib.cpp"
    break;

  case 153:
#line 2747 "rib.y"
                                {
					RiMakeShadowV((yyvsp[-2].string),(yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 4322 "rib.cpp"
    break;

  case 154:
#line 2754 "rib.y"
                                {
					RiArchiveBeginV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 4330 "rib.cpp"
    break;

  case 155:
#line 2759 "rib.y"
                                {
					RiArchiveEnd();
				}
#line 4338 "rib.cpp"
    break;

  case 156:
#line 2764 "rib.y"
                                {
					RiResourceBegin();
				}
#line 4346 "rib.cpp"
    break;

  case 157:
#line 2769 "rib.y"
                                {
					RiResourceEnd();
				}
#line 4354 "rib.cpp"
    break;

  case 158:
#line 2777 "rib.y"
                                {
					RiResourceV((yyvsp[-2].string),(yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 4362 "rib.cpp"
    break;

  case 159:
#line 2784 "rib.y"
                                {
					RiIfBeginV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 4370 "rib.cpp"
    break;

  case 160:
#line 2789 "rib.y"
                                {
					RiIfEnd();
				}
#line 4378 "rib.cpp"
    break;

  case 161:
#line 2796 "rib.y"
                                {
					RiElseIfV((yyvsp[-1].string),numParameters,tokens,vals);
				}
#line 4386 "rib.cpp"
    break;

  case 162:
#line 2801 "rib.y"
                                {
					RiElse();
				}
#line 4394 "rib.cpp"
    break;

  case 163:
#line 2807 "rib.y"
                                {
					RtErrorHandler 	e	=	getErrorHandler((yyvsp[0].string));

					if (e != NULL) {
						RiErrorHandler(e);
					}
				}
#line 4406 "rib.cpp"
    break;

  case 164:
#line 2817 "rib.y"
                                {
				}
#line 4413 "rib.cpp"
    break;

  case 165:
#line 2822 "rib.y"
                                {
				}
#line 4420 "rib.cpp"
    break;

  case 166:
#line 2826 "rib.y"
                                {
					if (YYRECOVERING() == 0) {
						error(CODE_BADFILE,"Syntax error\n");
					}
				}
#line 4430 "rib.cpp"
    break;


#line 4434 "rib.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2833 "rib.y"


#include "lex.rib.cpp"

// Our position in the rib file
static	int		ribStart	=	0;
static	int		ribStep		=	5*(1<<10);	// Parse 5 KB at a time

///////////////////////////////////////////////////////////////////////
// Function				:	riberror
// Description			:	Parser error file
// Return Value			:	-
// Comments				:
void	riberror(const char *s,...) {
	warning(CODE_BADFILE,"RIB Parse error\n");
}

///////////////////////////////////////////////////////////////////////
// Function				:	ribParse
// Description			:	Parse a rib file
// Return Value			:	-
// Comments				:
void	ribParse(const char *fileName,void (*c)(const char *,...)) {


	if (fileName != NULL) {
		

		// Save the environment first
		TLight				*savedLights						=	lights;
		TObject				*savedObjects						=	objects;
		int					savedRibLineno						=	ribLineno;
		void				(*savedCallback)(const char *,...)	=	callback;
		int					savedNumParameters					=	numParameters;
		int					savedMaxParameter					=	maxParameter;
		TParameter			*savedParameters					=	parameters;
		RtToken				*savedTokens						=	tokens;
		RtPointer			*savedVals							=	vals;
		int					savedRibDepth						=	ribDepth;
		YY_BUFFER_STATE		savedLexState						=	YY_CURRENT_BUFFER;
		TRibFile			*savedRibStack						=	ribStack;
		const char			*savedRibFile						=	ribFile;
		FILE				*savedRibIn							=	ribin;
	
		// Guard against the depreciated fdopen on windoze	
#ifdef _WINDOWS
#define fdopen _fdopen
#endif
		
		// Init the environment
		if (fileName[0] == '-') {
			// Read from stdin
#ifdef HAVE_ZLIB
			ribin			=	(FILE *) gzdopen(fileno(stdin),"rb");
#else
			ribin			=	stdin;
#endif
		} else if (fileName[0] == '|') {
			// Read from an arbitrary stream
#ifdef HAVE_ZLIB
			ribin			=	(FILE *) gzdopen(atoi(fileName+1),"rb");
#else
			ribin			=	fdopen(atoi(fileName+1),"r");
#endif		
		} else {
			// Read from file
#ifdef HAVE_ZLIB
			ribin			=	(FILE *) gzopen(fileName,"rb");
#else
			ribin			=	fopen(fileName,"r");
#endif
		}

		lights				=	NULL;
		objects				=	NULL;
		callback			=	c;
		maxParameter		=	20;
		numParameters		=	0;
		parameters			=	new TParameter[maxParameter];
		tokens				=	new RtToken[maxParameter];
		vals				=	new RtPointer[maxParameter];
		
		if ( ribDepth++ == 0) {
			// outhermost
		} else {
			// create a new lex buffer and switch to it
			
			// Note: there are two stacking methods here,
			//  one is explicitly handled when lexing for ReadArchive
			//	the other uses the return stack (and increments ribDepth)

			rib_switch_to_buffer(rib_create_buffer( ribin, YY_BUF_SIZE ) );	
			ribStack		=	NULL;	// prevent falling out of current ReadArchive
		}
		
		ribFile				=	fileName;
		ribLineno			=	1;

		// Put a checkpoint in the global memory
		// This checkpoint is restored after every RIB command
		memSave(memoryCheckpoint,CRenderer::globalMemory);

		// Parse the RIB
		ribparse();

		// Restore the memory to the latest checkpoint
		memRestore(memoryCheckpoint,CRenderer::globalMemory);
		
		if (ribin != NULL) {
#ifdef HAVE_ZLIB
			gzclose(ribin);
#else
			fclose(ribin);
#endif
		}

		// Clear the lights
		TLight	*cLight;
		while((cLight=lights) != NULL) {
			lights	=	lights->next;
			if (cLight->name != NULL)	free(cLight->name);
			delete cLight;
		}
		
		// Clear the objects
		TObject	*cObject;
		while((cObject=objects) != NULL) {
			objects	=	objects->next;
			if (cObject->name != NULL)	free(cObject->name);
			delete cObject;
		}
		
		// Clear the parameters
		delete [] parameters;
		delete [] tokens;
		delete [] vals;
		

		ribin				=	savedRibIn;
		ribFile				=	savedRibFile;
		tokens				=	savedTokens;
		vals				=	savedVals;
		parameters			=	savedParameters;
		numParameters		=	savedNumParameters;
		maxParameter		=	savedMaxParameter;
		lights				=	savedLights;
		objects				=	savedObjects;
		ribLineno			=	savedRibLineno;
		callback			=	savedCallback;
		
		if ((ribDepth = savedRibDepth) == 0) {
			// outhermost
		} else {
			// We're done parsing an inner level, switch the lex buffer back
			
			rib_delete_buffer( YY_CURRENT_BUFFER );
			rib_switch_to_buffer( savedLexState );
			
			ribStack 		= 	savedRibStack;
		}
	}
}



///////////////////////////////////////////////////////////////////////
// Function				:	parserCleanup
// Description			:	Clean the memory allocated by the parser
// Return Value			:	-
// Comments				:
void		parserCleanup() {
	rib_delete_buffer(YY_CURRENT_BUFFER);
	yy_init				= 1;
}

