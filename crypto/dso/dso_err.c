/* crypto/dso/dso_err.c */
/* ====================================================================
 * Copyright (c) 1999 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/dso.h>

/* BEGIN ERROR CODES */
#ifndef NO_ERR
static ERR_STRING_DATA DSO_str_functs[]=
	{
{ERR_PACK(0,DSO_F_DLFCN_BIND_FUNC,0),	"DLFCN_BIND_FUNC"},
{ERR_PACK(0,DSO_F_DLFCN_BIND_VAR,0),	"DLFCN_BIND_VAR"},
{ERR_PACK(0,DSO_F_DLFCN_LOAD,0),	"DLFCN_LOAD"},
{ERR_PACK(0,DSO_F_DLFCN_NAME_CONVERTER,0),	"DLFCN_NAME_CONVERTER"},
{ERR_PACK(0,DSO_F_DLFCN_UNLOAD,0),	"DLFCN_UNLOAD"},
{ERR_PACK(0,DSO_F_DL_BIND_FUNC,0),	"DL_BIND_FUNC"},
{ERR_PACK(0,DSO_F_DL_BIND_VAR,0),	"DL_BIND_VAR"},
{ERR_PACK(0,DSO_F_DL_LOAD,0),	"DL_LOAD"},
{ERR_PACK(0,DSO_F_DL_NAME_CONVERTER,0),	"DL_NAME_CONVERTER"},
{ERR_PACK(0,DSO_F_DL_UNLOAD,0),	"DL_UNLOAD"},
{ERR_PACK(0,DSO_F_DSO_BIND_FUNC,0),	"DSO_bind_func"},
{ERR_PACK(0,DSO_F_DSO_BIND_VAR,0),	"DSO_bind_var"},
{ERR_PACK(0,DSO_F_DSO_CONVERT_FILENAME,0),	"DSO_convert_filename"},
{ERR_PACK(0,DSO_F_DSO_CTRL,0),	"DSO_ctrl"},
{ERR_PACK(0,DSO_F_DSO_FREE,0),	"DSO_free"},
{ERR_PACK(0,DSO_F_DSO_GET_FILENAME,0),	"DSO_get_filename"},
{ERR_PACK(0,DSO_F_DSO_GET_LOADED_FILENAME,0),	"DSO_get_loaded_filename"},
{ERR_PACK(0,DSO_F_DSO_LOAD,0),	"DSO_load"},
{ERR_PACK(0,DSO_F_DSO_NEW_METHOD,0),	"DSO_new_method"},
{ERR_PACK(0,DSO_F_DSO_SET_FILENAME,0),	"DSO_set_filename"},
{ERR_PACK(0,DSO_F_DSO_SET_NAME_CONVERTER,0),	"DSO_set_name_converter"},
{ERR_PACK(0,DSO_F_DSO_UP,0),	"DSO_up"},
{ERR_PACK(0,DSO_F_VMS_BIND_VAR,0),	"VMS_BIND_VAR"},
{ERR_PACK(0,DSO_F_VMS_LOAD,0),	"VMS_LOAD"},
{ERR_PACK(0,DSO_F_VMS_UNLOAD,0),	"VMS_UNLOAD"},
{ERR_PACK(0,DSO_F_WIN32_BIND_FUNC,0),	"WIN32_BIND_FUNC"},
{ERR_PACK(0,DSO_F_WIN32_BIND_VAR,0),	"WIN32_BIND_VAR"},
{ERR_PACK(0,DSO_F_WIN32_LOAD,0),	"WIN32_LOAD"},
{ERR_PACK(0,DSO_F_WIN32_NAME_CONVERTER,0),	"WIN32_NAME_CONVERTER"},
{ERR_PACK(0,DSO_F_WIN32_UNLOAD,0),	"WIN32_UNLOAD"},
{0,NULL}
	};

static ERR_STRING_DATA DSO_str_reasons[]=
	{
{DSO_R_CTRL_FAILED                       ,"control command failed"},
{DSO_R_DSO_ALREADY_LOADED                ,"dso already loaded"},
{DSO_R_FILENAME_TOO_BIG                  ,"filename too big"},
{DSO_R_FINISH_FAILED                     ,"cleanup method function failed"},
{DSO_R_LOAD_FAILED                       ,"could not load the shared library"},
{DSO_R_NAME_TRANSLATION_FAILED           ,"name translation failed"},
{DSO_R_NO_FILENAME                       ,"no filename"},
{DSO_R_NULL_HANDLE                       ,"a null shared library handle was used"},
{DSO_R_SET_FILENAME_FAILED               ,"set filename failed"},
{DSO_R_STACK_ERROR                       ,"the meth_data stack is corrupt"},
{DSO_R_SYM_FAILURE                       ,"could not bind to the requested symbol name"},
{DSO_R_UNLOAD_FAILED                     ,"could not unload the shared library"},
{DSO_R_UNSUPPORTED                       ,"functionality not supported"},
{0,NULL}
	};

#endif

void ERR_load_DSO_strings(void)
	{
	static int init=1;

	if (init)
		{
		init=0;
#ifndef NO_ERR
		ERR_load_strings(ERR_LIB_DSO,DSO_str_functs);
		ERR_load_strings(ERR_LIB_DSO,DSO_str_reasons);
#endif

		}
	}
