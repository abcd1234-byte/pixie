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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         slparse
#define yylex           sllex
#define yyerror         slerror
#define yydebug         sldebug
#define yynerrs         slnerrs
#define yylval          sllval
#define yychar          slchar

/* First part of user prologue.  */
#line 1 "sdr.y"

//////////////////////////////////////////////////////////////////////
//
//                             Pixie
//
// Copyright � 1999 - 2003, Okan Arikan
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
//  File				:	sl.y
//  Classes				:	-
//  Description			:	This is the parser file for CShader
//
////////////////////////////////////////////////////////////////////////
#undef alloca
#include <math.h>
#include <string.h>

#include "common/global.h"
#include "common/containers.h"
#include "shader.h"
#include "slcode.h"
#include "error.h"
#include "renderer.h"
#include "dso.h"
#include "ri_config.h"

/////////////////////////////////////////////////////////////////////////////////////
//   First some temporary data structures used during the script parsing


// Some forward definitions
		void							slerror(const char *);		// Forward definition for stupid yacc
		int								sllex(void );				// Forward definition for stupid yacc

		const	char					*initLabel	=	"#!Init";	// The label for the init
		const	char					*codeLabel	=	"#!Code";	// The label for the code

typedef struct TSlVariable {
	char			name[64];
	int				index;
	int				multiplicity;
	EVariableType	type;
	EVariableClass	container;
	int				uniform;
	CVariable		*variable;
	TSlVariable		*next;
} TSlVariable;

typedef struct TSlLabel {
	char			name[64];
	int				index;
	TArgument		*argument;
	TSlLabel		*next;
} TSlLabel;

typedef struct {
	ESlCode			entryPoint;
	const char		*name;
	int				nargs;
	unsigned int	usedParameters;
} TSlOpcode;

typedef struct {
	ESlCode			entryPoint;
	const char		*name;
	const char		*prototype;
	unsigned int	usedParameters;
} TSlFunction;

#define	DEFOPCODE(name,text,nargs,expr_pre,expr,expr_update,expr_post,params)			{OPCODE_##name,text,nargs,params},
#define	DEFSHORTOPCODE(name,text,nargs,expr_pre,expr,expr_update,expr_post,params)		{OPCODE_##name,text,nargs,params},
#define	DEFLINKOPCODE(name,text,nargs)													{OPCODE_##name,text,nargs,0},
#define	DEFFUNC(name,text,prototype,expr_pre,expr,expr_update,expr_post,par)
#define	DEFLIGHTFUNC(name,text,prototype,expr_pre,expr,expr_update,expr_post,par)
#define	DESHORTFFUNC(name,text,prototype,expr_pre,expr,expr_update,expr_post,par)
#define	DEFLINKFUNC(name,text,prototype,par)

static	TSlOpcode	opcodes[]	=	{
#include "scriptOpcodes.h"
{	OPCODE_NOP	,	NULL	,	0	}
};

#undef DEFOPCODE
#undef DEFSHORTOPCODE
#undef DEFLINKOPCODE
#undef DEFFUNC
#undef DEFLIGHTFUNC
#undef DEFSHORTFUNC
#undef DEFLINKFUNC

#define	DEFOPCODE(name,text,nargs,expr_pre,expr,expr_update,expr_post)
#define	DEFSHORTOPCODE(name,text,nargs,expr_pre,expr,expr_update,expr_post)
#define DEFLINKOPCODE(name,text,nargs)
#define	DEFFUNC(name,text,prototype,expr_pre,expr,expr_update,expr_post,par)			{FUNCTION_##name,text,prototype,par},
#define	DEFLIGHTFUNC(name,text,prototype,expr_pre,expr,expr_update,expr_post,par)		{FUNCTION_##name,text,prototype,par},
#define	DEFSHORTFUNC(name,text,prototype,expr_pre,expr,expr_update,expr_post,par)		{FUNCTION_##name,text,prototype,par},
#define	DEFLINKFUNC(name,text,prototype,par)											{FUNCTION_##name,text,prototype,par},
static	TSlFunction		functions[]	=	{
#include "scriptFunctions.h"
{	OPCODE_NOP	,	NULL	,	NULL	}
};


#undef DEFOPCODE
#undef DEFSHORTOPCODE
#undef DEFLINKOPCODE
#undef DEFFUNC
#undef DEFSHORTFUNC
#undef DEFLINKFUNC


		////////////////////////////////////////////////////////////////////////////////////////////////////
		//
		//	This structure holds the compiling context
		//
		//
		typedef struct {
				const char				*name;					// Name of the file being parsed
				int						passNumber;				// Current pass number (we make 2 passes)
				int						parsingInit;			// TRUE if we're parsing the init code
				int						numErrors;				// Number of errors encountered during parse
				int						accessorType;			// Accessor type for _interpolatable_ parameters

				// Pass 1
				int						numCode;				// The number of code blocks
				int						numArgument;			// The number of argument blocks
				int						numConstants;			// The number of constants
				int						numVariables;			// The number of variables (local + parameters)
				int						numStrings;				// The number of strings

				int						constantSize;			// Total size required by the constants
				int						varyingSize;			// Total size required by the variables

				int						shaderType;				// Type of the shader

				int						uniform;				// TRUE if the current expression is uniform
				int						opcodeUniform;			// TRUE if the opcode/function is uniform

				// Pass 2
				EVariableType			currentParameterType;	// The type of the current parameter
				int						currentParameterMutable;// TRUE if the current parameter is global or writable
				EVariableClass			currentParameterClass;	// The container class of the current parameter
				int						currentConstant;
				int						currentVariable;
				int						currentString;

				int						currentConstantSize;
				int						currentVaryingSize;

				float					*currentArray;			// Array items go here as we read them
				char					**currentStringArray;	// If the array is string, we this pointer instead
				int						numArrayItemsRemaining;	// Number of array items we're still expecting to read
				
				char					currentOpcode[64];		// Holds the opcode being parsed
				char					currentPrototype[64];	// Holds the prototype being parsed
				int						currentArgument;		// The current argument number
				unsigned int			usedParameters;			// Used parameters by this shader
				TCode					*currentOpcodePlace;	// Points to the code that should holds the opcode
				TArgument				*currentArgumentPlace;	// Points to the current argument that should hold the argument

				int						codeEntryPoint;			// Indices in the code array for corresponding entry points
				int						initEntryPoint;
				
				char					*memory;				// The memory base for the area that's allocated
				TCode					*code;					// Code blocks
				TArgument				*arguments;				// Argument blocks
				char					*constants;				// Constants blocks
				int						*varyingSizes;			// Holds the size of each varying in codes
				char					**strings;				// Strings defined
				void					**constantEntries;		// Where the constant entries are stored

				TSlVariable				*definedVariables;		// List of defined variables
				TSlLabel				*labelReferences;		// List of label references
				TSlLabel				*labelDefinitions;		// List of label definitions
		} TShaderData;

		TShaderData						currentData;

									///////////////////////////////////////////////////////////////////////
									// Function				:	numComponents
									// Description			:	Returns the number of codes that a particular type takes
									// Return Value			:	Size in codes
									// Comments				:
		static	int					numComponents(EVariableType type) {
										switch(type) {
										case TYPE_FLOAT:
											return	1;
											break;
										case TYPE_COLOR:
											return	3;
											break;
										case TYPE_VECTOR:
											return	3;
											break;
										case TYPE_NORMAL:
											return	3;
											break;
										case TYPE_POINT:
											return	3;
											break;
										case TYPE_MATRIX:
											return	16;
											break;
										case TYPE_QUAD:
											return	4;
											break;
										case TYPE_DOUBLE:
											return	2;
											break;
										case TYPE_STRING:
											return	1;
											break;
										case TYPE_INTEGER:
											return	1;
											break;
										default:
											slerror("Unknown type (bug)");
											break;
										}

										return 0;
									}


									///////////////////////////////////////////////////////////////////////
									// Function				:	newVariable
									// Description			:	Add a new variable/parameter
									// Return Value			:	The default area if available
									// Comments				:
		static	void				*newVariable(char *name,EVariableType type,int numItems,int parameter) {
										const int	numComp			=	numComponents(type);

										switch(currentData.passNumber) {
										case 1:
											currentData.numVariables++;
											if (type == TYPE_STRING)
												currentData.varyingSize		+=	numItems*numComp*sizeof(char*);
											else
												currentData.varyingSize		+=	numItems*numComp*sizeof(float);
											break;
										case 2:
											{
												// Create a new variable
												TSlVariable	*cVariable	=	new TSlVariable;

												strcpy(cVariable->name,name);
												cVariable->multiplicity	=	numItems;
												cVariable->type			=	type;
												cVariable->container	=	currentData.currentParameterClass;
												cVariable->uniform		=	currentData.uniform;
												cVariable->variable		=	NULL;
												cVariable->index		=	currentData.currentVariable;
												
												if (type == TYPE_STRING)
													currentData.varyingSizes[currentData.currentVariable]	=	numItems*numComp*sizeof(char*);
												else
													currentData.varyingSizes[currentData.currentVariable]	=	numItems*numComp*sizeof(float);
												
												if (cVariable->uniform)	currentData.varyingSizes[currentData.currentVariable]	=	-currentData.varyingSizes[currentData.currentVariable];
												
												currentData.currentVariable++;
												if (type == TYPE_STRING)
													currentData.currentVaryingSize	+=	numItems*numComp*sizeof(char*);
												else
													currentData.currentVaryingSize	+=	numItems*numComp*sizeof(float);

													
												cVariable->next					=	currentData.definedVariables;
												currentData.definedVariables	=	cVariable;
												
												// Here's the trick part ...
												// If this is a parameter, allocate a parameter entry and make sure it points to the right location
												if (parameter) {
													CVariable	*newVariable;
													CVariable	*gVariable;
													
													newVariable					=	new CVariable;
													strcpy(newVariable->name,name);
													newVariable->type			=	type;
													newVariable->container		=	currentData.currentParameterClass;
													newVariable->numItems		=	numItems;
													newVariable->numFloats		=	numItems*numComp;
													newVariable->entry			=	cVariable->index;
													newVariable->usageMarker	=	0;
													newVariable->storage		=	currentData.currentParameterMutable	? STORAGE_MUTABLEPARAMETER : STORAGE_PARAMETER;
													if (type == TYPE_STRING) 	newVariable->defaultValue	=	new char*[numItems*numComp];
													else						newVariable->defaultValue	=	new float[numItems*numComp];
													newVariable->accessor		=	currentData.accessorType;
													newVariable->next			=	NULL;													
													cVariable->variable			=	newVariable;
													
													// Is this a global variable ?
													gVariable					=	CRenderer::retrieveVariable(name);
													if (gVariable != NULL)	{
														if (gVariable->storage == STORAGE_GLOBAL) {
															// If the variable is actually defined
															
															if (newVariable->type == gVariable->type &&
																newVariable->numItems == gVariable->numItems &&
																newVariable->numFloats == gVariable->numFloats &&
																!(cVariable->uniform ^ ((gVariable->container == CONTAINER_UNIFORM) || (gVariable->container == CONTAINER_CONSTANT)))
																) {
																
																// And it matchces the current definition
																
																newVariable->storage						=	STORAGE_GLOBAL;
																currentData.varyingSizes[cVariable->index]	=	0;		// It takes up no space in the cache
																
																// Note: the variable index will be re-pointed at the global when init is run
															}
															/*else {
																// This mismatches the predeclared variable.  Issue warning, and continue
																warning(CODE_CONSISTENCY,"Parameter \"%s\" in shader \"%s\" mismatches predeclared variable\n",gVariable->name,currentData.name);
															}*/
														}
													} //If so, then lets ensure we don't delete it by taking a copy
													
													return	newVariable->defaultValue;
												}
											}
											break;
										default:
											break;
										}

										return NULL;
									}

									///////////////////////////////////////////////////////////////////////
									// Function				:	addStringReference
									// Description			:	Add a reference to a string
									// Return Value			:	-
									// Comments				:
		static	void				addStringReference(char **items,int numItems) {
										int	i;
										
										switch(currentData.passNumber) {
										case 1:
											currentData.numArgument		+=	1;							// Add one argument
											currentData.numConstants	+=	1;							// We have one more constant
											currentData.numStrings		+=	numItems;					// Reserve numItems strings
											currentData.constantSize	+=	numItems*sizeof(char *);	// This is the final constant size we consume
											break;
										case 2:
											assert(currentData.currentConstant < 65535);
											
											char	**dest;
											
											currentData.currentArgumentPlace->numItems									=	numItems;
											currentData.currentArgumentPlace->bytesPerItem								=	sizeof(char *);
											currentData.currentArgumentPlace->index										=	(unsigned short) currentData.currentConstant;
											currentData.currentArgumentPlace->accessor									=	SL_IMMEDIATE_OPERAND;
											currentData.currentArgumentPlace->varyingStep								=	0;
											currentData.constantEntries[currentData.currentConstant]					=	currentData.constants + currentData.currentConstantSize;
											dest																		=	(char **) currentData.constantEntries[currentData.currentConstant];
											currentData.currentConstant++;
											currentData.currentArgumentPlace++;
											currentData.currentArgument++;
											currentData.currentConstantSize	+=	numItems*sizeof(char *);

											// Acturally record the strings
											for (i=0;i<numItems;i++)
												dest[i]	=	currentData.strings[currentData.currentString++]	=	strdup(items[i]);
											
											break;
										default:
											break;
										}
									}


									///////////////////////////////////////////////////////////////////////
									// Function				:	addFloatReference
									// Description			:	Add a reference to a float
									// Return Value			:	-
									// Comments				:
		static	void				addFloatReference(float *items,int numItems) {
										int	i;
										switch(currentData.passNumber) {
											case 1:
												currentData.numArgument		+=	1;
												currentData.numConstants	+=	1;
												currentData.constantSize	+=	numItems*sizeof(float);
												break;
											case 2:
												assert(currentData.currentConstant < 65536);
												
												float	*dest;
												
												currentData.currentArgumentPlace->numItems						=	numItems;
												currentData.currentArgumentPlace->bytesPerItem					=	sizeof(float);
												currentData.currentArgumentPlace->index							=	(unsigned short) currentData.currentConstant;
												currentData.currentArgumentPlace->accessor						=	SL_IMMEDIATE_OPERAND;
												currentData.currentArgumentPlace->varyingStep					=	0;
												currentData.constantEntries[currentData.currentConstant]		=	currentData.constants + currentData.currentConstantSize;
												dest															=	(float *) currentData.constantEntries[currentData.currentConstant];
												currentData.currentConstant++;
												currentData.currentArgumentPlace++;
												currentData.currentArgument++;
												currentData.currentConstantSize	+=	numItems*sizeof(float);

												for (i=0;i<numItems;i++) dest[i]	=	items[i];

												break;
											default:
												break;
											}
										}

										///////////////////////////////////////////////////////////////////////
										// Function				:	addVariableReference
										// Description			:	Add a reference to a variable/parameter
										// Return Value			:	-
										// Comments				:
		static	void					addVariableReference(char *name) {
											CVariable		*var;
											TSlVariable		*cVariable;

											switch(currentData.passNumber) {
											case 1:
												currentData.numArgument	+=	1;
												break;
											case 2:
												currentData.currentArgument++;

												// Search the variables
												for (cVariable=currentData.definedVariables;cVariable!=NULL;cVariable=cVariable->next) {
													if (strcmp(cVariable->name,name) == 0) {
														
														// If this is a global parameter, let the next section deal with it
														if (cVariable->variable) {
															// in init, we treat the global as a parameter, but in the init phase, it's a local varying
															if ((cVariable->variable->storage == STORAGE_GLOBAL) && !currentData.parsingInit) continue;
														} 
														
														assert(cVariable->index < 65536);
														assert((cVariable->multiplicity*numComponents(cVariable->type)) < 256);
														
														currentData.currentArgumentPlace->index			=	(unsigned short) cVariable->index;
														currentData.currentArgumentPlace->numItems		=	(char) (cVariable->multiplicity*numComponents(cVariable->type));
														currentData.currentArgumentPlace->bytesPerItem	=	(cVariable->type == TYPE_STRING ? sizeof(char *) : sizeof(float));
														currentData.currentArgumentPlace->accessor		=	SL_VARYING_OPERAND;
														currentData.currentArgumentPlace->varyingStep	=	(cVariable->uniform ? 0 : currentData.currentArgumentPlace->numItems);
														currentData.currentArgumentPlace++;
														
														if (cVariable->uniform == FALSE)
															currentData.opcodeUniform									=	FALSE;
														
														return;
													}
												}

												var	=	CRenderer::retrieveVariable(name);

												if (var != NULL) {
													currentData.usedParameters										|=	var->usageMarker;

													assert(var->entry < 65536);
													assert(var->numFloats < 256);
													
													currentData.currentArgumentPlace->index			=	(unsigned short) var->entry;
													currentData.currentArgumentPlace->numItems		=	(char) var->numFloats;
													currentData.currentArgumentPlace->bytesPerItem	=	(var->type == TYPE_STRING ? sizeof(char *) : sizeof(float));
													currentData.currentArgumentPlace->accessor		=	SL_GLOBAL_OPERAND;
													
													if ((var->container != CONTAINER_UNIFORM) || (var->container != CONTAINER_CONSTANT)) {
														currentData.opcodeUniform						=	FALSE;
														currentData.currentArgumentPlace->varyingStep	=	currentData.currentArgumentPlace->numItems;
													} else {
														currentData.currentArgumentPlace->varyingStep	=	0;
													}
															
													currentData.currentArgumentPlace++;
												} else {
													slerror("Unknown variable");
												}

												break;
											default:
												break;
											}
										}

										///////////////////////////////////////////////////////////////////////
										// Function				:	setOpcode
										// Description			:	Find/Set an opcode/function
										// Return Value			:	-
										// Comments				:
		static	void					setOpcode() {
											switch(currentData.passNumber) {
											case 1:
												break;
											case 2:
												// Is this an opcode or function
												if (currentData.currentPrototype[0] == '~') {
													ESlCode	opcode;
													int		i;

													for(i=0;opcodes[i].name != NULL;i++) {
														if (strcmp(opcodes[i].name,currentData.currentOpcode) == 0) 
															if (opcodes[i].nargs == currentData.currentArgument) {
																opcode	=	opcodes[i].entryPoint;
																break;
															}
													}

													if (opcodes[i].name == NULL)
														slerror("Unknown opcode");
													else {
														assert((currentData.currentArgument+2) < 256);
														assert((currentData.opcodeUniform) < 256);
														
														// Save the opcode
														currentData.usedParameters						|=	opcodes[i].usedParameters;
														currentData.currentOpcodePlace->opcode			=	(int) opcode;
														currentData.currentOpcodePlace->numArguments	=	(unsigned char) (currentData.currentArgument);
														currentData.currentOpcodePlace->uniform			=	(unsigned char) (currentData.opcodeUniform);
														currentData.currentOpcodePlace++;
													}
												} else {
													int			i;
													ESlCode		opcode;

													for(i=0;functions[i].name != NULL;i++) {
														if (strcmp(functions[i].name,currentData.currentOpcode) == 0) {
															if (strcmp(functions[i].prototype,currentData.currentPrototype) == 0) {
																currentData.usedParameters	|=	functions[i].usedParameters;
																opcode						=	functions[i].entryPoint;
																break;
															} else {
																// Do a pattern match
				

																// The return types must match exactly
																if (functions[i].prototype[0] != currentData.currentPrototype[0]) continue;

																{
																	int		j,k,t;

																	t	=	FALSE;

																	for (j=2,k=2;(currentData.currentPrototype[j] != '\0') && (functions[i].prototype[k] != '\0');j++,k++) {
																		// Do the current parameters match
																		if (currentData.currentPrototype[j] == functions[i].prototype[k]) continue;
																		// Does the function match any parameter ?
																		else if (functions[i].prototype[k] == '.') continue;
																		// Is the current parameter a * or + ?
																		else if ((functions[i].prototype[k] == '+') || (functions[i].prototype[k] == '*')) {
																			k-=2;
																			j--;
																			continue;
																		// Is the current parameter a parameter list ?
																		} else if (functions[i].prototype[k] == '!') {
																			if ((currentData.currentPrototype[j] == 's') || (currentData.currentPrototype[j] == 'S')) {
																				j++;
																				k--;
																			} else {
																				t	=	TRUE;
																				break;
																			}
																		} else {
																			t	=	TRUE;
																			break;
																		}
																	}


																	if (t == FALSE) {
																		if (
																				((functions[i].prototype[k] == '\0') && (currentData.currentPrototype[j] == '\0')) ||
																				((functions[i].prototype[k] == '+') || (functions[i].prototype[k] == '*')) || 
																				(functions[i].prototype[k] == '!') ||
																				(functions[i].prototype[k+1] == '*')) {
																			// We found our function/opcode
																			currentData.usedParameters	|=	functions[i].usedParameters;
																			opcode	=	functions[i].entryPoint;
																			break;
																		} else {
																			continue;
																		}
																	}
																}
															}
														}
													}	

													// Save the opcode
													if (functions[i].name != NULL) {
														assert((currentData.currentArgument+2) < 256);
														assert(currentData.opcodeUniform < 256);
														
														currentData.currentOpcodePlace->opcode				=	(int) opcode;
														currentData.currentOpcodePlace->numArguments		=	(unsigned char) (currentData.currentArgument);
														currentData.currentOpcodePlace->uniform				=	(unsigned char) (currentData.opcodeUniform);
														currentData.currentOpcodePlace++;
													} else {
														// Allright, we could not find the function, check the DSO shaders
														CDSO	*dso;

														// See if this is a DSO function
														if ((dso = CRenderer::getDSO(currentData.currentOpcode,currentData.currentPrototype)) != NULL) {
														
															// We have the DSO
															if (currentData.currentPrototype[0] == 'o')		currentData.currentOpcodePlace->opcode	=	FUNCTION_DSO_VOID;
															else											currentData.currentOpcodePlace->opcode	=	FUNCTION_DSO;
								
															currentData.currentOpcodePlace->numArguments	=	(unsigned char) (currentData.currentArgument);
															currentData.currentOpcodePlace->uniform			=	(unsigned char) (currentData.opcodeUniform);
															currentData.currentOpcodePlace->dso				=	dso;
															currentData.currentOpcodePlace++;
														} else {
															slerror("Unknown function");
														}
													}
												}
												break;
											default:
												break;
											}
										}


									///////////////////////////////////////////////////////////////////////
									// Function				:	newLabel
									// Description			:	Create a new label definition/reference
									// Return Value			:	-
									// Comments				:
		static	void				newLabel(const char *name,int reference) {
										switch(currentData.passNumber) {
										case 1:
											if (reference)
												currentData.numArgument++;
											break;
										case 2:
											{
												TSlLabel	*cLabel	=	new TSlLabel;

												strcpy(cLabel->name,name);
												cLabel->index	=	(int) (currentData.currentOpcodePlace - currentData.code);

												if (reference) {
													cLabel->next					=	currentData.labelReferences;
													currentData.labelReferences		=	cLabel;
													cLabel->argument				=	currentData.currentArgumentPlace++;
													currentData.currentArgument++;
												} else {
													TSlLabel	*tLabel;

													for (tLabel=currentData.labelDefinitions;tLabel!=NULL;tLabel=tLabel->next) {
														if (strcmp(tLabel->name,cLabel->name) == 0) {
															slerror("Duplicate label definition\n");
														}
													}

													cLabel->argument				=	NULL;
													cLabel->next					=	currentData.labelDefinitions;
													currentData.labelDefinitions	=	cLabel;
												}
											}
											break;
										default:
											break;
										}
									}

									// Some forward references
		void						reset();
		void						alloc();
		CShader						*shaderCreate(const char *);
		int							getVariable(char *);
		int							getOpcode(char *,int);
		int							getFunction(char *,char *,int *ps = NULL);
		void						*newVariable(char *,int,int,int,int m=1);
		TSlLabel					*newLabelDef(char *,int);
		TSlLabel					*newLabelRef(char *,int);

#line 772 "sl.cpp"

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
extern int sldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SCRL_PARAMETERS = 258,
    SCRL_VARIABLES = 259,
    SCRL_OUTPUT = 260,
    SCRL_VARYING = 261,
    SCRL_UNIFORM = 262,
    SCRL_FLOAT = 263,
    SCRL_COLOR = 264,
    SCRL_VECTOR = 265,
    SCRL_NORMAL = 266,
    SCRL_POINT = 267,
    SCRL_MATRIX = 268,
    SCRL_STRING = 269,
    SCRL_SURFACE = 270,
    SCRL_DISPLACEMENT = 271,
    SCRL_IMAGER = 272,
    SCRL_LIGHTSOURCE = 273,
    SCRL_VOLUME = 274,
    SCRL_GENERIC = 275,
    SCRL_DSO = 276,
    SCRL_INIT = 277,
    SCRL_CODE = 278,
    SCRL_DOT = 279,
    SCRL_COLON = 280,
    SCRL_EQUAL = 281,
    SCRL_OPEN_PARANTHESIS = 282,
    SCRL_CLOSE_PARANTHESIS = 283,
    SCRL_OPEN_SQR_PARANTHESIS = 284,
    SCRL_CLOSE_SQR_PARANTHESIS = 285,
    SCRL_COMMA = 286,
    SCRL_NL = 287,
    SCRL_TEXT_VALUE = 288,
    SCRL_IDENTIFIER_VALUE = 289,
    SCRL_LABEL_VALUE = 290,
    SCRL_FLOAT_VALUE = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 695 "sdr.y"
union slval
{
#line 695 "sdr.y"

	float	real;
	char	*string;
	matrix	m;
	vector	v;

#line 866 "sl.cpp"

};
#line 695 "sdr.y"
typedef union slval YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE sllval;

int slparse (void);





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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

#define YYUNDEFTOK  2
#define YYMAXUTOK   291


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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   747,   747,   755,   757,   761,   770,   783,   791,   803,
     810,   819,   826,   833,   841,   850,   858,   865,   868,   872,
     879,   886,   894,   902,   909,   918,   924,   926,   928,   930,
     932,   934,   936,   941,   953,   969,   963,   985,  1004,  1015,
    1027,  1032,  1051,  1078,  1072,  1103,  1120,  1131,  1144,  1151,
    1149,  1169,  1163,  1178,  1191,  1189,  1209,  1203,  1220,  1233,
    1231,  1251,  1245,  1262,  1275,  1273,  1293,  1287,  1304,  1314,
    1322,  1334,  1341,  1355,  1366,  1380,  1385,  1429,  1456,  1487,
    1481,  1503,  1522,  1533,  1581,  1611,  1616,  1623,  1626,  1630,
    1633,  1636,  1639,  1642,  1645,  1648,  1654,  1660,  1671,  1677,
    1688,  1694,  1705,  1711,  1722,  1728,  1739,  1745,  1756,  1762,
    1774,  1772,  1783,  1781,  1791,  1795,  1799,  1802,  1808,  1806,
    1860,  1878,  1896,  1916,  1921,  1926,  1934,  1942,  1949,  1954,
    1959,  1964,  1981,  2037
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SCRL_PARAMETERS", "SCRL_VARIABLES",
  "SCRL_OUTPUT", "SCRL_VARYING", "SCRL_UNIFORM", "SCRL_FLOAT",
  "SCRL_COLOR", "SCRL_VECTOR", "SCRL_NORMAL", "SCRL_POINT", "SCRL_MATRIX",
  "SCRL_STRING", "SCRL_SURFACE", "SCRL_DISPLACEMENT", "SCRL_IMAGER",
  "SCRL_LIGHTSOURCE", "SCRL_VOLUME", "SCRL_GENERIC", "SCRL_DSO",
  "SCRL_INIT", "SCRL_CODE", "SCRL_DOT", "SCRL_COLON", "SCRL_EQUAL",
  "SCRL_OPEN_PARANTHESIS", "SCRL_CLOSE_PARANTHESIS",
  "SCRL_OPEN_SQR_PARANTHESIS", "SCRL_CLOSE_SQR_PARANTHESIS", "SCRL_COMMA",
  "SCRL_NL", "SCRL_TEXT_VALUE", "SCRL_IDENTIFIER_VALUE",
  "SCRL_LABEL_VALUE", "SCRL_FLOAT_VALUE", "$accept", "start",
  "slEmptySpace", "slVectorIn", "slVector", "slType",
  "slParameterDefinitions", "slParameters", "slContainer", "slParameter",
  "slAParameter", "slFloatParameter", "$@1", "slFloatArrayInitializer",
  "slFloatArrayInitializerItems", "slStringParameter", "$@2",
  "slStringArrayInitializer", "slStringArrayInitializerItems",
  "slColorParameter", "$@3", "$@4", "slVectorParameter", "$@5", "$@6",
  "slNormalParameter", "$@7", "$@8", "slPointParameter", "$@9", "$@10",
  "slVectorValue", "slVectorArrayInitializer",
  "slVectorArrayInitializerItems", "slMatrixParameter", "$@11",
  "slMatrixArrayInitializer", "slMatrixArrayInitializerItems",
  "slVariableDefinitions", "slVariables", "slVariable", "slFloatVariable",
  "slStringVariable", "slVectorVariable", "slColorVariable",
  "slNormalVariable", "slPointVariable", "slMatrixVariable", "slInit",
  "$@12", "slCode", "$@13", "slShaderLine", "slDSO", "$@14", "slOpcode",
  "slOperandList", "slStatement", "slLabelDefinition", "slOperand", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -28,     9,    27,    29,    37,    81,    24,  -124,  -124,
    -124,  -124,  -124,  -124,    14,    82,    53,    62,    66,  -124,
      57,    58,    68,    59,  -124,  -124,    60,    61,    77,  -124,
    -124,    36,    63,     3,  -124,  -124,    61,  -124,  -124,  -124,
      64,    65,    67,    69,    70,    71,    72,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,    43,    75,   -14,  -124,
    -124,   -23,    73,    79,    80,    83,    41,    42,    76,    84,
      85,    86,    87,    88,    89,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,    90,  -124,    91,    93,   -22,
      94,    95,   -14,    78,    92,    96,    74,    97,    74,    98,
      74,    99,    74,     1,   100,   104,   102,   101,   110,   111,
     112,   113,   114,   115,  -124,  -124,  -124,    39,  -124,  -124,
    -124,  -124,  -124,   -22,  -124,  -124,  -124,   116,   117,    -5,
    -124,  -124,   118,  -124,   119,  -124,   120,  -124,   109,  -124,
     121,  -124,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   103,   135,  -124,   132,   141,   133,     6,  -124,   142,
     144,   145,   136,   147,   148,   146,   149,   150,   151,   152,
     153,   154,   155,  -124,   139,  -124,  -124,   156,   157,  -124,
    -124,  -124,  -124,   158,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,   159,   160,   161,   166,   162,   163,   166,
     166,   166,   164,   167,   168,   -22,   165,  -124,  -124,  -124,
    -124,   172,   169,  -124,  -124,  -124,   170,  -124,  -124,  -124,
    -124,  -124,    45,     2,    -7,  -124,   173,   171,     4,    44,
    -124,   174,  -124,  -124,   175,  -124,     7,  -124,  -124,  -124,
     176,   177,  -124,  -124,  -124,  -124,   178,   179,   180,  -124,
     181,   182,   183,   184,   185,   186,   187,   193,   195,   190,
     191,   192,   194,  -124,   199,   196,   197,   200,  -124,   198,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     216,   212,   213,   214,   211,   215,   221,  -124,   217,   218,
     219,   225,   222,   223,   224,   226,   227,   228,   231,   234,
    -124,   230,   236,   232,   238,   235,   239,   237,   244,  -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
      15,    13,    14,     1,     0,     0,     0,     0,     0,    18,
       0,     0,     0,    24,    88,   110,     0,     3,    23,    20,
      19,     0,     0,    24,   117,   112,     3,     2,    22,    21,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    17,     0,     0,   111,   117,
       4,    34,    49,    54,    59,    64,    78,    41,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    92,    91,    93,
      94,    95,    87,   121,   122,     0,   120,     0,     0,   124,
       0,     0,   113,     0,     0,     0,     9,     0,     9,     0,
       9,     0,     9,     0,     0,     0,     0,    96,   102,   100,
     104,   106,   108,    98,   118,   126,   116,     0,   127,   129,
     128,   130,   125,   124,   114,   115,    33,     0,     0,     0,
      10,    50,     0,    55,     0,    60,     0,    65,     0,    77,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   123,    37,    53,     0,     0,     7,    58,
      63,    68,     0,    81,    45,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     0,    35,    51,     0,     0,     5,
      56,    61,    66,     0,    79,    43,    97,   103,   101,   105,
     107,   109,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,    40,    36,    75,
      52,     0,     0,    57,    62,    67,     0,    85,    80,    48,
      44,   119,     0,     0,     0,     8,     0,     0,     0,     0,
     131,     0,    38,    39,     0,    73,     0,    71,    74,     6,
       0,     0,    82,    84,    46,    47,     0,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,   132
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,   240,  -124,   -40,  -124,  -124,  -124,   229,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -121,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,    35,  -124,  -124,  -124,  -123,  -124,  -124,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    37,   130,   131,     7,    15,    23,    31,    32,
      47,    48,   195,   208,   223,    49,   204,   220,   229,    50,
      96,   196,    51,    98,   199,    52,   100,   200,    53,   102,
     201,   238,   210,   224,    54,   203,   218,   228,    18,    33,
      57,    75,    76,    77,    78,    79,    80,    81,    22,    34,
      27,    59,    58,    88,   150,    89,   122,    90,    91,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     153,    83,    84,    93,     8,   117,    94,    85,    28,    29,
      30,   118,   119,   120,   121,     1,     2,     3,     4,     5,
      86,    87,   234,   235,   156,   -86,   236,    14,   157,   237,
     138,   158,   232,   241,   242,   178,   248,   139,   233,    16,
     243,     9,   179,   249,    40,    41,    42,    43,    44,    45,
      46,    68,    69,    70,    71,    72,    73,    74,   133,    10,
     135,    11,   137,   -16,    28,    29,    30,   103,   105,    12,
     104,   106,   151,   230,   244,   152,   231,   245,   213,   214,
     215,    13,   221,    38,    39,    19,    17,    20,    21,    24,
      25,    26,    35,    36,    92,    55,     0,     0,    61,    62,
     129,    63,    95,    64,    65,    66,    67,    82,    97,    99,
     107,     0,   101,     0,   126,     0,   115,     0,   108,   109,
     110,   111,   112,   113,   114,   116,   124,   125,   127,     0,
     143,   173,   128,   132,   134,   136,   140,   141,   142,   144,
     145,   146,   147,   148,   149,   162,   154,   155,   159,   160,
     161,   163,   164,     0,     0,     0,     0,   172,   175,   165,
     166,   167,   168,   169,   170,   171,   174,   176,   180,   177,
     181,   182,   183,   184,   185,   194,   186,     0,     0,   187,
     188,   189,   190,   191,   192,     0,     0,   205,   193,     0,
     207,   206,   197,   198,   202,   209,   217,   219,   211,   212,
     216,   222,   225,   239,     0,   226,   227,   240,     0,   252,
     246,   247,   250,   251,     0,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   268,
     267,   271,   269,   270,   272,     0,   277,   273,   274,   275,
     276,   287,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   288,   289,   290,   291,   292,   293,   297,   294,   295,
     296,   300,    56,   298,   299,   301,   302,   303,   304,   305,
     307,   306,   309,   308,     0,     0,    60
};

static const yytype_int16 yycheck[] =
{
     123,    15,    16,    26,    32,    27,    29,    21,     5,     6,
       7,    33,    34,    35,    36,    15,    16,    17,    18,    19,
      34,    35,    29,    30,    29,    22,    33,     3,    33,    36,
      29,    36,    30,    29,    30,    29,    29,    36,    36,    25,
      36,    32,    36,    36,     8,     9,    10,    11,    12,    13,
      14,     8,     9,    10,    11,    12,    13,    14,    98,    32,
     100,    32,   102,     4,     5,     6,     7,    26,    26,    32,
      29,    29,    33,    28,    30,    36,    31,    33,   199,   200,
     201,     0,   205,     6,     7,    32,     4,    25,    22,    32,
      32,    23,    32,    32,    59,    32,    -1,    -1,    34,    34,
      26,    34,    29,    34,    34,    34,    34,    32,    29,    29,
      34,    -1,    29,    -1,    36,    -1,    25,    -1,    34,    34,
      34,    34,    34,    34,    34,    32,    32,    32,    36,    -1,
      29,    28,    36,    36,    36,    36,    36,    33,    36,    29,
      29,    29,    29,    29,    29,    36,    30,    30,    30,    30,
      30,    30,    30,    -1,    -1,    -1,    -1,    27,    26,    36,
      36,    36,    36,    36,    36,    36,    31,    26,    26,    36,
      26,    26,    36,    26,    26,    36,    30,    -1,    -1,    30,
      30,    30,    30,    30,    30,    -1,    -1,    28,    33,    -1,
      29,    31,    36,    36,    36,    29,    29,    29,    36,    36,
      36,    36,    30,    30,    -1,    36,    36,    36,    -1,    31,
      36,    36,    36,    36,    -1,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    31,    30,    36,    36,    36,    30,
      36,    31,    36,    36,    36,    -1,    31,    36,    36,    36,
      36,    30,    36,    36,    36,    36,    36,    31,    36,    36,
      36,    36,    31,    36,    36,    36,    31,    31,    36,    36,
      36,    30,    33,    36,    36,    31,    36,    31,    36,    31,
      31,    36,    28,    36,    -1,    -1,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    16,    17,    18,    19,    38,    42,    32,    32,
      32,    32,    32,     0,     3,    43,    25,     4,    75,    32,
      25,    22,    85,    44,    32,    32,    23,    87,     5,     6,
       7,    45,    46,    76,    86,    32,    32,    39,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    47,    48,    52,
      56,    59,    62,    65,    71,    32,    45,    77,    89,    88,
      39,    34,    34,    34,    34,    34,    34,    34,     8,     9,
      10,    11,    12,    13,    14,    78,    79,    80,    81,    82,
      83,    84,    32,    15,    16,    21,    34,    35,    90,    92,
      94,    95,    89,    26,    29,    29,    57,    29,    60,    29,
      63,    29,    66,    26,    29,    26,    29,    34,    34,    34,
      34,    34,    34,    34,    34,    25,    32,    27,    33,    34,
      35,    36,    93,    96,    32,    32,    36,    36,    36,    26,
      40,    41,    36,    41,    36,    41,    36,    41,    29,    36,
      36,    33,    36,    29,    29,    29,    29,    29,    29,    29,
      91,    33,    36,    93,    30,    30,    29,    33,    36,    30,
      30,    30,    36,    30,    30,    36,    36,    36,    36,    36,
      36,    36,    27,    28,    31,    26,    26,    36,    29,    36,
      26,    26,    26,    36,    26,    26,    30,    30,    30,    30,
      30,    30,    30,    33,    36,    49,    58,    36,    36,    61,
      64,    67,    36,    72,    53,    28,    31,    29,    50,    29,
      69,    36,    36,    69,    69,    69,    36,    29,    73,    29,
      54,    93,    36,    51,    70,    30,    36,    36,    74,    55,
      28,    31,    30,    36,    29,    30,    33,    36,    68,    30,
      36,    29,    30,    36,    30,    33,    36,    36,    29,    36,
      36,    36,    31,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    31,    30,    36,    36,    36,    36,    30,    36,
      36,    31,    36,    36,    36,    36,    36,    31,    36,    36,
      36,    36,    36,    31,    36,    36,    36,    30,    36,    31,
      36,    36,    36,    31,    36,    36,    36,    31,    36,    36,
      30,    31,    36,    31,    36,    31,    36,    31,    36,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    40,    40,    40,
      41,    42,    42,    42,    42,    42,    43,    44,    44,    45,
      45,    45,    45,    45,    45,    46,    47,    47,    47,    47,
      47,    47,    47,    48,    48,    49,    48,    48,    50,    51,
      51,    52,    52,    53,    52,    52,    54,    55,    55,    57,
      56,    58,    56,    56,    60,    59,    61,    59,    59,    63,
      62,    64,    62,    62,    66,    65,    67,    65,    65,    68,
      68,    68,    68,    69,    70,    70,    71,    71,    71,    72,
      71,    71,    73,    74,    74,    74,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      86,    85,    88,    87,    89,    89,    89,    89,    91,    90,
      92,    92,    92,    93,    93,    94,    95,    96,    96,    96,
      96,    96,    96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     2,     3,     7,     2,     6,     0,
       1,     2,     2,     2,     2,     2,     4,     3,     0,     1,
       1,     2,     2,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     0,     8,     5,     3,     2,
       0,     2,     4,     0,     8,     5,     3,     2,     0,     0,
       4,     0,     8,     5,     0,     4,     0,     8,     5,     0,
       4,     0,     8,     5,     0,     4,     0,     8,     5,     2,
       6,     1,     5,     3,     2,     0,    21,     4,     2,     0,
       8,     5,     3,    19,     2,     0,     4,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     5,     2,     5,
       2,     5,     2,     5,     2,     5,     2,     5,     2,     5,
       0,     4,     0,     4,     3,     3,     3,     0,     0,     7,
       1,     1,     1,     2,     0,     2,     2,     1,     1,     1,
       1,     7,    33,     3
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




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
  case 5:
#line 764 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[0].real);
					(yyval.v)[1]	=	(yyvsp[0].real);
					(yyval.v)[2]	=	(yyvsp[0].real);
				}
#line 2256 "sl.cpp"
    break;

  case 6:
#line 777 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[-3].real);
					(yyval.v)[1]	=	(yyvsp[-2].real);
					(yyval.v)[2]	=	(yyvsp[-1].real);
				}
#line 2266 "sl.cpp"
    break;

  case 7:
#line 785 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[0].real);
					(yyval.v)[1]	=	(yyvsp[0].real);
					(yyval.v)[2]	=	(yyvsp[0].real);
				}
#line 2276 "sl.cpp"
    break;

  case 8:
#line 797 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[-3].real);
					(yyval.v)[1]	=	(yyvsp[-2].real);
					(yyval.v)[2]	=	(yyvsp[-1].real);
				}
#line 2286 "sl.cpp"
    break;

  case 9:
#line 803 "sdr.y"
                                {
					(yyval.v)[0]	=	0;
					(yyval.v)[1]	=	0;
					(yyval.v)[2]	=	0;
				}
#line 2296 "sl.cpp"
    break;

  case 10:
#line 811 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[0].v)[0];
					(yyval.v)[1]	=	(yyvsp[0].v)[1];
					(yyval.v)[2]	=	(yyvsp[0].v)[2];
				}
#line 2306 "sl.cpp"
    break;

  case 11:
#line 821 "sdr.y"
                                {
					currentData.shaderType		=	SL_SURFACE;
					currentData.accessorType 	=	ACCESSOR_SURFACE;
				}
#line 2315 "sl.cpp"
    break;

  case 12:
#line 828 "sdr.y"
                                {
					currentData.shaderType		=	SL_DISPLACEMENT;
					currentData.accessorType	=	ACCESSOR_DISPLACEMENT;
				}
#line 2324 "sl.cpp"
    break;

  case 13:
#line 835 "sdr.y"
                                {
					currentData.shaderType		=	SL_LIGHTSOURCE;
					// Note: we don't set accessorType because you can't interpolate into
					// light shader parameters
				}
#line 2334 "sl.cpp"
    break;

  case 14:
#line 843 "sdr.y"
                                {
					currentData.shaderType		=	SL_ATMOSPHERE;
					currentData.accessorType	=	ACCESSOR_ATMOSPHERE;
					// Note: we can assume the accessor is atmosphere as that's the only
					// volume shader that can be interpolated into
				}
#line 2345 "sl.cpp"
    break;

  case 15:
#line 852 "sdr.y"
                                {
					currentData.shaderType		=	SL_IMAGER;
				}
#line 2353 "sl.cpp"
    break;

  case 19:
#line 873 "sdr.y"
                                {
					currentData.currentParameterClass	=	CONTAINER_UNIFORM;
					currentData.currentParameterMutable	=	FALSE;
					currentData.uniform					=	TRUE;
				}
#line 2363 "sl.cpp"
    break;

  case 20:
#line 880 "sdr.y"
                                {
					currentData.currentParameterClass	=	CONTAINER_VARYING;
					currentData.currentParameterMutable	=	FALSE;
					currentData.uniform					=	FALSE;
				}
#line 2373 "sl.cpp"
    break;

  case 21:
#line 888 "sdr.y"
                                {
					currentData.currentParameterClass	=	CONTAINER_UNIFORM;
					currentData.currentParameterMutable	=	TRUE;
					currentData.uniform					=	TRUE;
				}
#line 2383 "sl.cpp"
    break;

  case 22:
#line 896 "sdr.y"
                                {
					currentData.currentParameterClass	=	CONTAINER_VARYING;
					currentData.currentParameterMutable	=	TRUE;
					currentData.uniform					=	FALSE;
				}
#line 2393 "sl.cpp"
    break;

  case 23:
#line 903 "sdr.y"
                                {
					currentData.currentParameterClass	=	CONTAINER_UNIFORM;
					currentData.currentParameterMutable	=	TRUE;
					currentData.uniform					=	TRUE;
				}
#line 2403 "sl.cpp"
    break;

  case 24:
#line 909 "sdr.y"
                                {
					currentData.currentParameterClass	=	CONTAINER_UNIFORM;
					currentData.currentParameterMutable	=	FALSE;
					currentData.uniform					=	TRUE;
				}
#line 2413 "sl.cpp"
    break;

  case 33:
#line 945 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-2].string),TYPE_FLOAT,1,TRUE);

					if (def != NULL) {
						def[0]	=	(yyvsp[0].real);
					}
				}
#line 2425 "sl.cpp"
    break;

  case 34:
#line 955 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[0].string),TYPE_FLOAT,1,TRUE);

					if (def != NULL) {
						def[0]		=	0;
					}
				}
#line 2437 "sl.cpp"
    break;

  case 35:
#line 969 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-4].string),TYPE_FLOAT,(int) (yyvsp[-2].real),TRUE);
					
					if (def != NULL) {
						int	i;

						for (i=0;i<(int) (yyvsp[-2].real);i++)
							def[i]	=	0;
						
						currentData.currentArray = def;
					}
					
					currentData.numArrayItemsRemaining = (int) (yyvsp[-2].real);
				}
#line 2456 "sl.cpp"
    break;

  case 37:
#line 990 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-3].string),TYPE_FLOAT,(int) (yyvsp[-1].real),TRUE);

					if (def != NULL) {
						int	i;

						for (i=0;i<(int) (yyvsp[-1].real);i++)
							def[i]	=	0;
					}
				}
#line 2471 "sl.cpp"
    break;

  case 38:
#line 1007 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining){
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2481 "sl.cpp"
    break;

  case 39:
#line 1017 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining > 0){
						if(currentData.currentArray){
							*currentData.currentArray++ = (yyvsp[0].real);
						}
						currentData.numArrayItemsRemaining--;
					} else{
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2496 "sl.cpp"
    break;

  case 41:
#line 1034 "sdr.y"
                                {
					char	**def	=	(char **) newVariable((yyvsp[0].string),TYPE_STRING,1,TRUE);

					switch(currentData.passNumber) {
					case 1:
						currentData.numStrings++;
						break;
					case 2:
						if (def != NULL) {
							*def	=	currentData.strings[currentData.currentString++]	=	strdup("*");
						}
						break;
					default:
						break;
					}
				}
#line 2517 "sl.cpp"
    break;

  case 42:
#line 1055 "sdr.y"
                                {
					char	**def	=	(char **) newVariable((yyvsp[-2].string),TYPE_STRING,1,TRUE);

					switch(currentData.passNumber) {
					case 1:
						currentData.numStrings++;
						break;
					case 2:
						if (def != NULL) {
							*def	=	currentData.strings[currentData.currentString++]	=	strdup((yyvsp[0].string));
						}
						break;
					default:
						break;
					}
				}
#line 2538 "sl.cpp"
    break;

  case 43:
#line 1078 "sdr.y"
                                {
					char	**def	=	(char **) newVariable((yyvsp[-4].string),TYPE_STRING,(int) (yyvsp[-2].real),TRUE);
					
					switch(currentData.passNumber) {
					case 1:
						currentData.numStrings += (int) (yyvsp[-2].real);
						break;
					case 2:
						if (def != NULL) {
							int	i;

							for (i=0;i<(int) (yyvsp[-2].real);i++)
								def[i]	=	NULL;
							
							currentData.currentStringArray = def;
						}
						break;
					default:
						break;
					}
					
					currentData.numArrayItemsRemaining = (int) (yyvsp[-2].real);
				}
#line 2566 "sl.cpp"
    break;

  case 45:
#line 1108 "sdr.y"
                                {
					char	**def	=	(char **) newVariable((yyvsp[-3].string),TYPE_STRING,(int) (yyvsp[-1].real),TRUE);

					if (def != NULL) {
						int	i;

						for (i=0;i<(int) (yyvsp[-1].real);i++)
							def[i]	=	NULL;
					}
				}
#line 2581 "sl.cpp"
    break;

  case 46:
#line 1123 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining){
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2591 "sl.cpp"
    break;

  case 47:
#line 1133 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining > 0){
						if(currentData.currentArray){
							*currentData.currentStringArray++	=	currentData.strings[currentData.currentString++]	=	strdup((yyvsp[0].string));
						}
						currentData.numArrayItemsRemaining--;
					}
					else{
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2607 "sl.cpp"
    break;

  case 49:
#line 1151 "sdr.y"
                                {
					currentData.currentParameterType	=	TYPE_COLOR;
				}
#line 2615 "sl.cpp"
    break;

  case 50:
#line 1155 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-2].string),currentData.currentParameterType,1,TRUE);

					if (def != NULL) {
						movvv(def,(yyvsp[0].v));
					}
				}
#line 2627 "sl.cpp"
    break;

  case 51:
#line 1169 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-4].string),TYPE_COLOR,(int) (yyvsp[-2].real),TRUE);
					
					if(def != NULL)
						currentData.currentArray = def;
					currentData.numArrayItemsRemaining = (int) (yyvsp[-2].real);
				}
#line 2639 "sl.cpp"
    break;

  case 53:
#line 1183 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-3].string),TYPE_COLOR,(int) (yyvsp[-1].real),TRUE);
				}
#line 2647 "sl.cpp"
    break;

  case 54:
#line 1191 "sdr.y"
                                {
					currentData.currentParameterType	=	TYPE_VECTOR;
				}
#line 2655 "sl.cpp"
    break;

  case 55:
#line 1195 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-2].string),currentData.currentParameterType,1,TRUE);

					if (def != NULL) {
						movvv(def,(yyvsp[0].v));
					}
				}
#line 2667 "sl.cpp"
    break;

  case 56:
#line 1209 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-4].string),TYPE_VECTOR,(int) (yyvsp[-2].real),TRUE);
					
					if(def != NULL) {
						currentData.currentArray = def;
					}
					
					currentData.numArrayItemsRemaining = (int) (yyvsp[-2].real);
				}
#line 2681 "sl.cpp"
    break;

  case 58:
#line 1225 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-3].string),TYPE_VECTOR,(int) (yyvsp[-1].real),TRUE);
				}
#line 2689 "sl.cpp"
    break;

  case 59:
#line 1233 "sdr.y"
                                {
					currentData.currentParameterType	=	TYPE_NORMAL;
				}
#line 2697 "sl.cpp"
    break;

  case 60:
#line 1237 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-2].string),currentData.currentParameterType,1,TRUE);

					if (def != NULL) {
						movvv(def,(yyvsp[0].v));
					}
				}
#line 2709 "sl.cpp"
    break;

  case 61:
#line 1251 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-4].string),TYPE_NORMAL,(int) (yyvsp[-2].real),TRUE);
					
					if(def != NULL) {
						currentData.currentArray = def;
					}
					
					currentData.numArrayItemsRemaining = (int) (yyvsp[-2].real);
				}
#line 2723 "sl.cpp"
    break;

  case 63:
#line 1267 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-3].string),TYPE_NORMAL,(int) (yyvsp[-1].real),TRUE);
				}
#line 2731 "sl.cpp"
    break;

  case 64:
#line 1275 "sdr.y"
                                {
					currentData.currentParameterType	=	TYPE_POINT;
				}
#line 2739 "sl.cpp"
    break;

  case 65:
#line 1279 "sdr.y"
                                {
					float	*def	=	(float *)newVariable((yyvsp[-2].string),currentData.currentParameterType,1,TRUE);

					if (def != NULL) {
						movvv(def,(yyvsp[0].v));
					}
				}
#line 2751 "sl.cpp"
    break;

  case 66:
#line 1293 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-4].string),TYPE_POINT,(int) (yyvsp[-2].real),TRUE);
					
					if(def != NULL) {
						currentData.currentArray = def;
					}
					
					currentData.numArrayItemsRemaining = (int) (yyvsp[-2].real);
				}
#line 2765 "sl.cpp"
    break;

  case 68:
#line 1309 "sdr.y"
                                {
					float 	*def	=	(float *) newVariable((yyvsp[-3].string),TYPE_POINT,(int) (yyvsp[-1].real),TRUE);
				}
#line 2773 "sl.cpp"
    break;

  case 69:
#line 1316 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[0].real);
					(yyval.v)[1]	=	(yyvsp[0].real);
					(yyval.v)[2]	=	(yyvsp[0].real);
				}
#line 2783 "sl.cpp"
    break;

  case 70:
#line 1328 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[-3].real);
					(yyval.v)[1]	=	(yyvsp[-2].real);
					(yyval.v)[2]	=	(yyvsp[-1].real);
				}
#line 2793 "sl.cpp"
    break;

  case 71:
#line 1335 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[0].real);
					(yyval.v)[1]	=	(yyvsp[0].real);
					(yyval.v)[2]	=	(yyvsp[0].real);
				}
#line 2803 "sl.cpp"
    break;

  case 72:
#line 1346 "sdr.y"
                                {
					(yyval.v)[0]	=	(yyvsp[-3].real);
					(yyval.v)[1]	=	(yyvsp[-2].real);
					(yyval.v)[2]	=	(yyvsp[-1].real);
				}
#line 2813 "sl.cpp"
    break;

  case 73:
#line 1358 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining){
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2823 "sl.cpp"
    break;

  case 74:
#line 1368 "sdr.y"
                                {
					
					if(currentData.numArrayItemsRemaining > 0){
						if(currentData.currentArray){
							movvv(currentData.currentArray,(yyvsp[0].v));
							currentData.currentArray += 3;
						}
						currentData.numArrayItemsRemaining--;
					} else{
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2840 "sl.cpp"
    break;

  case 76:
#line 1406 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-19].string),TYPE_MATRIX,1,TRUE);

					if (def != NULL) {
						def[0]		=	(yyvsp[-16].real);
						def[1]		=	(yyvsp[-15].real);
						def[2]		=	(yyvsp[-14].real);
						def[3]		=	(yyvsp[-13].real);
						def[4]		=	(yyvsp[-12].real);
						def[5]		=	(yyvsp[-11].real);
						def[6]		=	(yyvsp[-10].real);
						def[7]		=	(yyvsp[-9].real);
						def[8]		=	(yyvsp[-8].real);
						def[9]		=	(yyvsp[-7].real);
						def[10]		=	(yyvsp[-6].real);
						def[11]		=	(yyvsp[-5].real);
						def[12]		=	(yyvsp[-4].real);
						def[13]		=	(yyvsp[-3].real);
						def[14]		=	(yyvsp[-2].real);
						def[15]		=	(yyvsp[-1].real);
					}
				}
#line 2867 "sl.cpp"
    break;

  case 77:
#line 1433 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-2].string),TYPE_MATRIX,1,TRUE);

					if (def != NULL) {
						def[0]		=	(yyvsp[0].real);
						def[1]		=	0;
						def[2]		=	0;
						def[3]		=	0;
						def[4]		=	0;
						def[5]		=	(yyvsp[0].real);
						def[6]		=	0;
						def[7]		=	0;
						def[8]		=	0;
						def[9]		=	0;
						def[10]		=	(yyvsp[0].real);
						def[11]		=	0;
						def[12]		=	0;
						def[13]		=	0;
						def[14]		=	0;
						def[15]		=	1;
					}
				}
#line 2894 "sl.cpp"
    break;

  case 78:
#line 1458 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[0].string),TYPE_MATRIX,1,TRUE);

					if (def != NULL) {
						def[0]		=	1;
						def[1]		=	0;
						def[2]		=	0;
						def[3]		=	0;
						def[4]		=	0;
						def[5]		=	1;
						def[6]		=	0;
						def[7]		=	0;
						def[8]		=	0;
						def[9]		=	0;
						def[10]		=	1;
						def[11]		=	0;
						def[12]		=	0;
						def[13]		=	0;
						def[14]		=	0;
						def[15]		=	1;
					}
				}
#line 2921 "sl.cpp"
    break;

  case 79:
#line 1487 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-4].string),TYPE_MATRIX,(int) (yyvsp[-2].real),TRUE);
					
					if (def != NULL) {
						int	i;

						for (i=0;i<((int) (yyvsp[-2].real))*16;i++)
							def[i]	=	0;
							
						currentData.currentArray = def;
					}
					
					currentData.numArrayItemsRemaining = (int) (yyvsp[-2].real);
				}
#line 2940 "sl.cpp"
    break;

  case 81:
#line 1508 "sdr.y"
                                {
					float	*def	=	(float *) newVariable((yyvsp[-3].string),TYPE_MATRIX,(int) (yyvsp[-1].real),TRUE);

					if (def != NULL) {
						int	i;

						for (i=0;i<((int) (yyvsp[-1].real))*16;i++)
							def[i]	=	0;
					}
				}
#line 2955 "sl.cpp"
    break;

  case 82:
#line 1525 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining){
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2965 "sl.cpp"
    break;

  case 83:
#line 1552 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining > 0){
						if(currentData.currentArray){
							currentData.currentArray[0] = (yyvsp[-16].real);
							currentData.currentArray[1] = (yyvsp[-15].real);
							currentData.currentArray[2] = (yyvsp[-14].real);
							currentData.currentArray[3] = (yyvsp[-13].real);
							currentData.currentArray[4] = (yyvsp[-12].real);
							currentData.currentArray[5] = (yyvsp[-11].real);
							currentData.currentArray[6] = (yyvsp[-10].real);
							currentData.currentArray[7] = (yyvsp[-9].real);
							currentData.currentArray[8] = (yyvsp[-8].real);
							currentData.currentArray[9] = (yyvsp[-7].real);
							currentData.currentArray[10] = (yyvsp[-6].real);
							currentData.currentArray[11] = (yyvsp[-5].real);
							currentData.currentArray[12] = (yyvsp[-4].real);
							currentData.currentArray[13] = (yyvsp[-3].real);
							currentData.currentArray[14] = (yyvsp[-2].real);
							currentData.currentArray[15] = (yyvsp[-1].real);
							
							currentData.currentArray += 16;
						}
						currentData.numArrayItemsRemaining--;
					}
					else{
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 2998 "sl.cpp"
    break;

  case 84:
#line 1583 "sdr.y"
                                {
					if(currentData.numArrayItemsRemaining > 0){
						if(currentData.currentArray){
							currentData.currentArray[0] = (yyvsp[0].real);
							currentData.currentArray[1] = 0;
							currentData.currentArray[2] = 0;
							currentData.currentArray[3] = 0;
							currentData.currentArray[4] = 0;
							currentData.currentArray[5] = (yyvsp[0].real);
							currentData.currentArray[6] = 0;
							currentData.currentArray[7] = 0;
							currentData.currentArray[8] = 0;
							currentData.currentArray[9] = 0;
							currentData.currentArray[10] = (yyvsp[0].real);
							currentData.currentArray[11] = 0;
							currentData.currentArray[12] = 0;
							currentData.currentArray[13] = 0;
							currentData.currentArray[14] = 0;
							currentData.currentArray[15] = 1;
							
							currentData.currentArray += 16;
						}
						currentData.numArrayItemsRemaining--;
					}
					else{
						slerror("Wrong number of items in array initializer\n");
					}
				}
#line 3031 "sl.cpp"
    break;

  case 96:
#line 1656 "sdr.y"
                                {
					newVariable((yyvsp[0].string),TYPE_FLOAT,1,FALSE);
				}
#line 3039 "sl.cpp"
    break;

  case 97:
#line 1665 "sdr.y"
                                {
					newVariable((yyvsp[-3].string),TYPE_FLOAT,(int) (yyvsp[-1].real),FALSE);
				}
#line 3047 "sl.cpp"
    break;

  case 98:
#line 1673 "sdr.y"
                                {
					newVariable((yyvsp[0].string),TYPE_STRING,1,FALSE);
				}
#line 3055 "sl.cpp"
    break;

  case 99:
#line 1682 "sdr.y"
                                {
					newVariable((yyvsp[-3].string),TYPE_STRING,(int) (yyvsp[-1].real),FALSE);
				}
#line 3063 "sl.cpp"
    break;

  case 100:
#line 1690 "sdr.y"
                                {
					newVariable((yyvsp[0].string),TYPE_VECTOR,1,FALSE);
				}
#line 3071 "sl.cpp"
    break;

  case 101:
#line 1699 "sdr.y"
                                {
					newVariable((yyvsp[-3].string),TYPE_VECTOR,(int) (yyvsp[-1].real),FALSE);
				}
#line 3079 "sl.cpp"
    break;

  case 102:
#line 1707 "sdr.y"
                                {
					newVariable((yyvsp[0].string),TYPE_COLOR,1,FALSE);
				}
#line 3087 "sl.cpp"
    break;

  case 103:
#line 1716 "sdr.y"
                                {
					newVariable((yyvsp[-3].string),TYPE_COLOR,(int) (yyvsp[-1].real),FALSE);
				}
#line 3095 "sl.cpp"
    break;

  case 104:
#line 1724 "sdr.y"
                                {
					newVariable((yyvsp[0].string),TYPE_NORMAL,1,FALSE);
				}
#line 3103 "sl.cpp"
    break;

  case 105:
#line 1733 "sdr.y"
                                {
					newVariable((yyvsp[-3].string),TYPE_NORMAL,(int) (yyvsp[-1].real),FALSE);
				}
#line 3111 "sl.cpp"
    break;

  case 106:
#line 1741 "sdr.y"
                                {
					newVariable((yyvsp[0].string),TYPE_POINT,1,FALSE);
				}
#line 3119 "sl.cpp"
    break;

  case 107:
#line 1750 "sdr.y"
                                {
					newVariable((yyvsp[-3].string),TYPE_POINT,(int) (yyvsp[-1].real),FALSE);
				}
#line 3127 "sl.cpp"
    break;

  case 108:
#line 1758 "sdr.y"
                                {
					newVariable((yyvsp[0].string),TYPE_MATRIX,1,FALSE);
				}
#line 3135 "sl.cpp"
    break;

  case 109:
#line 1767 "sdr.y"
                                {
					newVariable((yyvsp[-3].string),TYPE_MATRIX,(int) (yyvsp[-1].real),FALSE);
				}
#line 3143 "sl.cpp"
    break;

  case 110:
#line 1774 "sdr.y"
                                {
					currentData.parsingInit	=	TRUE;
					newLabel(initLabel,FALSE);
				}
#line 3152 "sl.cpp"
    break;

  case 112:
#line 1783 "sdr.y"
                                {
					currentData.parsingInit	=	FALSE;
					newLabel(codeLabel,FALSE);
				}
#line 3161 "sl.cpp"
    break;

  case 118:
#line 1808 "sdr.y"
                                {
					char	*dsoName	=	(yyvsp[0].string);
					
					switch(currentData.passNumber) {
					case 1:
						currentData.numCode++;					// opcode
						break;
					case 2:
						strcpy(currentData.currentOpcode,(yyvsp[0].string));
						currentData.currentArgument					=	0;
						currentData.currentOpcodePlace->arguments	=	currentData.currentArgumentPlace;
						currentData.currentPrototype[0]				=	'~';
						currentData.opcodeUniform					=	TRUE;
						break;
					default:
						break;
					}
				}
#line 3184 "sl.cpp"
    break;

  case 119:
#line 1830 "sdr.y"
                                {
					switch(currentData.passNumber) {
					case 1:
						break;
					case 2:
						// Set the opcode here
						CDSO	*dso;

						if ((dso = CRenderer::getDSO((yyvsp[-5].string),(yyvsp[-2].string))) != NULL) {
							// Save the DSO opcode
							if ((yyvsp[-2].string)[0] == 'o')	currentData.currentOpcodePlace->opcode		=	FUNCTION_DSO_VOID;
							else				currentData.currentOpcodePlace->opcode		=	FUNCTION_DSO;

							assert(currentData.opcodeUniform < 256);
							
							currentData.currentOpcodePlace->numArguments	=	(unsigned char) (currentData.currentArgument);
							currentData.currentOpcodePlace->uniform			=	(unsigned char) (currentData.opcodeUniform);															
							currentData.currentOpcodePlace->dso				=	dso;
							currentData.currentOpcodePlace++;
						} else {
							slerror("Failed to locate DSO function\n");
						}
						break;
					default:
						break;
					}
				}
#line 3216 "sl.cpp"
    break;

  case 120:
#line 1861 "sdr.y"
                                {
					switch(currentData.passNumber) {
					case 1:
						currentData.numCode++;		// opcode
						break;
					case 2:
						strcpy(currentData.currentOpcode,(yyvsp[0].string));
						currentData.currentArgument					=	0;
						currentData.currentOpcodePlace->arguments	=	currentData.currentArgumentPlace;
						currentData.currentPrototype[0]				=	'~';
						currentData.opcodeUniform					=	TRUE;
						break;
					default:
						break;
					}
				}
#line 3237 "sl.cpp"
    break;

  case 121:
#line 1879 "sdr.y"
                                {
					switch(currentData.passNumber) {
					case 1:
						currentData.numCode++;		// opcode
						break;
					case 2:
						strcpy(currentData.currentOpcode,"surface");
						currentData.currentArgument					=	0;
						currentData.currentOpcodePlace->arguments	=	currentData.currentArgumentPlace;
						currentData.currentPrototype[0]				=	'~';
						currentData.opcodeUniform					=	TRUE;
						break;
					default:
						break;
					}
				}
#line 3258 "sl.cpp"
    break;

  case 122:
#line 1897 "sdr.y"
                                {
					switch(currentData.passNumber) {
					case 1:
						currentData.numCode++;		// opcode
						break;
					case 2:
						strcpy(currentData.currentOpcode,"displacement");
						currentData.currentArgument					=	0;
						currentData.currentOpcodePlace->arguments	=	currentData.currentArgumentPlace;
						currentData.currentPrototype[0]				=	'~';
						currentData.opcodeUniform					=	TRUE;
						break;
					default:
						break;
					}
				}
#line 3279 "sl.cpp"
    break;

  case 123:
#line 1918 "sdr.y"
                                {
				}
#line 3286 "sl.cpp"
    break;

  case 124:
#line 1921 "sdr.y"
                                {
				}
#line 3293 "sl.cpp"
    break;

  case 125:
#line 1928 "sdr.y"
                                {
					setOpcode();
				}
#line 3301 "sl.cpp"
    break;

  case 126:
#line 1936 "sdr.y"
                                {
					newLabel((yyvsp[-1].string),FALSE);
				}
#line 3309 "sl.cpp"
    break;

  case 127:
#line 1943 "sdr.y"
                                {
					char	*str	=	(yyvsp[0].string);

					addStringReference(&str,1);
				}
#line 3319 "sl.cpp"
    break;

  case 128:
#line 1950 "sdr.y"
                                {
					newLabel((yyvsp[0].string),TRUE);
				}
#line 3327 "sl.cpp"
    break;

  case 129:
#line 1955 "sdr.y"
                                {
					addVariableReference((yyvsp[0].string));
				}
#line 3335 "sl.cpp"
    break;

  case 130:
#line 1960 "sdr.y"
                                {
					addFloatReference(&(yyvsp[0].real),1);
				}
#line 3343 "sl.cpp"
    break;

  case 131:
#line 1971 "sdr.y"
                                {
					vector	tmp;

					tmp[0]	=	(yyvsp[-5].real);
					tmp[1]	=	(yyvsp[-3].real);
					tmp[2]	=	(yyvsp[-1].real);

					addFloatReference(tmp,3);
				}
#line 3357 "sl.cpp"
    break;

  case 132:
#line 2014 "sdr.y"
                                {
					matrix	tmp;

					tmp[element(0,0)]	=	(yyvsp[-31].real);
					tmp[element(0,1)]	=	(yyvsp[-29].real);
					tmp[element(0,2)]	=	(yyvsp[-27].real);
					tmp[element(0,3)]	=	(yyvsp[-25].real);
					tmp[element(1,0)]	=	(yyvsp[-23].real);
					tmp[element(1,1)]	=	(yyvsp[-21].real);
					tmp[element(1,2)]	=	(yyvsp[-19].real);
					tmp[element(1,3)]	=	(yyvsp[-17].real);
					tmp[element(2,0)]	=	(yyvsp[-15].real);
					tmp[element(2,1)]	=	(yyvsp[-13].real);
					tmp[element(2,2)]	=	(yyvsp[-11].real);
					tmp[element(2,3)]	=	(yyvsp[-9].real);
					tmp[element(3,0)]	=	(yyvsp[-7].real);
					tmp[element(3,1)]	=	(yyvsp[-5].real);
					tmp[element(3,2)]	=	(yyvsp[-3].real);
					tmp[element(3,3)]	=	(yyvsp[-1].real);

					addFloatReference(tmp,16);
				}
#line 3384 "sl.cpp"
    break;

  case 133:
#line 2040 "sdr.y"
                                {
					strcpy(currentData.currentPrototype,(yyvsp[-1].string));
				}
#line 3392 "sl.cpp"
    break;


#line 3396 "sl.cpp"

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
#line 2045 "sdr.y"

#include "lex.sl.cpp"

int	slLineno	=	0;

///////////////////////////////////////////////////////////////////////
// Function				:	slerror
// Description			:	Parser error function
// Return Value			:
// Comments				:
void	slerror(const char *s) {
	warning(CODE_BADFILE,"Error in shader \"%s\" (%d) (\"%s\") (v%d.%d.%d)\n",currentData.name,slLineno,s,VERSION_RELEASE,VERSION_BETA,VERSION_ALPHA);
	currentData.numErrors++;
}


///////////////////////////////////////////////////////////////////////
// Function				:	parseShader
// Description			:	Parse a shader
// Return Value			:	Parsed shader if successful
// Comments				:
CShader	*parseShader(const char *shaderName,const char *name) {
	YY_BUFFER_STATE	oldState;

	FILE	*fin;

	fin						=	fopen(name,"r");
	
	if (fin == NULL) return NULL;

	oldState				=	YY_CURRENT_BUFFER;
	sl_switch_to_buffer(sl_create_buffer( fin, YY_BUF_SIZE ) );

	slLineno				=	0;

	slin					=	fin;

	reset();
	currentData.name		=	name;
	currentData.passNumber	=	1;
	
	// The first pass
	memBegin(CRenderer::globalMemory);
	slparse();
	memEnd(CRenderer::globalMemory);

	if (currentData.numErrors != 0) {
		sl_delete_buffer( YY_CURRENT_BUFFER );
		fclose(fin);
		sl_switch_to_buffer( oldState );
		return NULL;
	}

	slLineno				=	0;

	fseek(fin,0,SEEK_SET);
	alloc();
	currentData.passNumber				=	2;
	
	// The second pass
	memBegin(CRenderer::globalMemory);
	slparse();
	memEnd(CRenderer::globalMemory);
	
	if (currentData.numErrors != 0) {
		reset();
		sl_delete_buffer( YY_CURRENT_BUFFER );
		fclose(fin);
		sl_switch_to_buffer( oldState );
		return NULL;
	} else {
		CShader	*cShader	=	shaderCreate(shaderName);
		reset();
		sl_delete_buffer( YY_CURRENT_BUFFER );
		fclose(fin);
		sl_switch_to_buffer( oldState );
		return cShader;
	}
}

///////////////////////////////////////////////////////////////////////
// Function				:	reset
// Description			:	Deallocate any previously allocated memory for the shader
// Return Value			:	-
// Comments				:
void	reset() {
	if (currentData.strings != NULL) {
		int	i;

		for (i=0;i<currentData.numStrings;i++)
			if (currentData.strings[i] != NULL)
				free(currentData.strings[i]);
	}


	if (currentData.definedVariables != NULL) {
		TSlVariable	*cVar,*nVar;

		for (cVar=currentData.definedVariables;cVar != NULL;) {
			nVar	=	cVar->next;
			delete cVar;
			cVar	=	nVar;
			
			// FIXME: Clear the parameter if not NULL
		}
	}


	if (currentData.labelDefinitions != NULL) {
		TSlLabel	*cLabel,*nLabel;

		for (cLabel=currentData.labelDefinitions;cLabel != NULL;) {
			nLabel	=	cLabel->next;
			delete cLabel;
			cLabel	=	nLabel;
		}
	}

	if (currentData.labelReferences != NULL) {
		TSlLabel	*cLabel,*nLabel;

		for (cLabel=currentData.labelReferences;cLabel != NULL;) {
			nLabel	=	cLabel->next;
			delete cLabel;
			cLabel	=	nLabel;
		}
	}

	if (currentData.memory != NULL)		delete [] currentData.memory;

	// Clear currentData
	memset(&currentData,0,sizeof(TShaderData));
}

///////////////////////////////////////////////////////////////////////
// Function				:	alloc
// Description			:	Allocate required space for the shader
// Return Value			:
// Comments				:
void	alloc() {
	char	*mem;
	
	currentData.memory	=	(char *) allocate_untyped(	currentData.numCode*sizeof(TCode)	+
														currentData.numArgument*sizeof(TArgument)	+
														currentData.constantSize +
														currentData.numConstants*sizeof(void *) + 
														currentData.numVariables*sizeof(int) + 
														currentData.numStrings*sizeof(char *));

	mem		=	currentData.memory;

	if (currentData.numCode != 0) {
		currentData.code						=	(TCode *) mem;
		currentData.currentOpcodePlace			=	currentData.code;
		mem										+=	currentData.numCode*sizeof(TCode);
	}
	
	if (currentData.numArgument != 0) {
		currentData.arguments					=	(TArgument *) mem;
		currentData.currentArgumentPlace		=	currentData.arguments;
		mem										+=	currentData.numArgument*sizeof(TArgument);
	}

	if (currentData.constantSize != 0) {
		currentData.constants					=	mem;
		mem										+=	currentData.constantSize;
	}

	if (currentData.numConstants != 0) {
		currentData.constantEntries				=	(void **) mem;
		mem										+=	currentData.numConstants*sizeof(void *);
	}

	if (currentData.numVariables != 0) {
		currentData.varyingSizes				=	(int *) mem;
		mem										+=	currentData.numVariables*sizeof(int);
	}

	if (currentData.numStrings != 0) {
		int	i;

		currentData.strings						=	(char **) mem;
		mem										+=	currentData.numStrings*sizeof(char *);

		for (i=0;i<currentData.numStrings;i++) {
			currentData.strings[i]				=	NULL;
		}
	}
}

///////////////////////////////////////////////////////////////////////
// Function				:	shaderCreate
// Description			:	Parse successful, allocate the shader
// Return Value			:
// Comments				:
CShader	*shaderCreate(const char *shaderName) {
	CShader	*cShader;

	// Sanity check for the shaders
	assert(currentData.numConstants		==	currentData.currentConstant);
	assert(currentData.numVariables		==	currentData.currentVariable);
	assert(currentData.numStrings		==	currentData.currentString);
	assert(currentData.constantSize		==	currentData.currentConstantSize);
	assert(currentData.varyingSize		==	currentData.currentVaryingSize);
	assert((currentData.currentOpcodePlace - currentData.code)			== currentData.numCode);
	assert((currentData.currentArgumentPlace - currentData.arguments)	== currentData.numArgument);

	// Fix the labels
	{
		TSlLabel	*cLabel,*nLabel;

		for (cLabel = currentData.labelReferences;cLabel != NULL;cLabel = cLabel->next) {
			for (nLabel = currentData.labelDefinitions;nLabel != NULL;nLabel = nLabel->next) {
				if (strcmp(cLabel->name,nLabel->name) == 0) {
					cLabel->argument->index	=	nLabel->index;
					break;
				}
			}

			if (nLabel == NULL) {
				slerror("Label not found");
				return NULL;
			}
		}

		for (cLabel = currentData.labelDefinitions;cLabel != NULL;cLabel = cLabel->next) {
			if (strcmp(cLabel->name,codeLabel) == 0) {
				currentData.codeEntryPoint	=	cLabel->index;
			}

			if (strcmp(cLabel->name,initLabel) == 0) {
				currentData.initEntryPoint	=	cLabel->index;
			}
		}
	}

	cShader								=	new CShader(shaderName);

	cShader->memory						=	currentData.memory;

	cShader->codeArea					=	currentData.code;

	cShader->constantEntries			=	currentData.constantEntries;
	cShader->varyingSizes				=	currentData.varyingSizes;

	cShader->strings					=	currentData.strings;

	cShader->numStrings					=	currentData.numStrings;
	cShader->numVariables				=	currentData.numVariables;

	cShader->codeEntryPoint				=	currentData.codeEntryPoint;
	cShader->initEntryPoint				=	currentData.initEntryPoint;

	cShader->usedParameters				=	currentData.usedParameters;

	cShader->type						=	currentData.shaderType;

	{
		TSlVariable	*cVar;
		int			i,numGlobals=0;

		cShader->parameters				=	NULL;
		i								=	0;
		while(currentData.definedVariables != NULL) {
			cVar							=	currentData.definedVariables;
			currentData.definedVariables	=	cVar->next;
		
			// Is this a parameter ? 
			if (cVar->variable != NULL) {
				cVar->variable->next	=	cShader->parameters;
				cShader->parameters		=	cVar->variable;
				if (cVar->variable->storage == STORAGE_GLOBAL ||
					cVar->variable->storage == STORAGE_MUTABLEPARAMETER)
						numGlobals++;
			} 
			
			// Delete the variable
			delete cVar;
			i++;
		}
		
		cShader->numGlobals	=	numGlobals;
	}
	
	cShader->analyse();
	

	currentData.memory					=	NULL;
	currentData.code					=	NULL;
	currentData.constants				=	NULL;
	currentData.varyingSizes			=	NULL;
	currentData.strings					=	NULL;
	currentData.constantEntries			=	NULL;
	

	return cShader;
}


extern	void		convertColorFrom(float *out,const float *in,ECoordinateSystem s);

