/* Generated code for Python module 'services$udp_service'
 * created by Nuitka version 2.8.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_services$udp_service" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_services$udp_service;
PyDictObject *moduledict_services$udp_service;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[68];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[68];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("services.udp_service"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 68; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_services$udp_service(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 68; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_services$$36$udp_service$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$udp_service->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$udp_service->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[67]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$udp_service->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[67]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[67], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[67]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[67], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[67]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[67]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[67]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$udp_service$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$udp_service->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$udp_service->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[7]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$udp_service->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[7]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[7]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[7], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[7]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[7]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[7]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$udp_service$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$udp_service->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$udp_service->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[41]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$udp_service->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[41]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[41], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[41]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[41], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[41]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[41]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[41]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$udp_service$socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$udp_service->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$udp_service->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[3]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$udp_service->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[3]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[3], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[3]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[3], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[3]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[3]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[3]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b6a5cddd452c3363efe9698748b2e58f;
static PyCodeObject *code_objects_9b3c8567670f7e1bcdace5d5e800c38d;
static PyCodeObject *code_objects_750db01704c8d42b44f3a63de05291ae;
static PyCodeObject *code_objects_191fff771dc74138f96b283bcd3800d9;
static PyCodeObject *code_objects_340768e7dd04f233350950338826c124;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[61]); CHECK_OBJECT(module_filename_obj);
    code_objects_b6a5cddd452c3363efe9698748b2e58f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[62], mod_consts[62], NULL, NULL, 0, 0, 0);
    code_objects_9b3c8567670f7e1bcdace5d5e800c38d = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[52], mod_consts[53], mod_consts[63], NULL, 4, 0, 0);
    code_objects_750db01704c8d42b44f3a63de05291ae = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[55], mod_consts[64], NULL, 1, 0, 0);
    code_objects_191fff771dc74138f96b283bcd3800d9 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[60], mod_consts[65], NULL, 1, 0, 0);
    code_objects_340768e7dd04f233350950338826c124 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[58], mod_consts[66], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__2_connect(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__3_send_command(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__4_disconnect(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_services$udp_service$$36$$$36$$$36$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    struct Nuitka_FrameObject *frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__)) {
        Py_XDECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9b3c8567670f7e1bcdace5d5e800c38d, module_services$udp_service, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__->m_type_description == NULL);
    frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__ = cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__);
    assert(Py_REFCNT(frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_host);
        tmp_assattr_value_1 = par_host;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_port);
        tmp_assattr_value_2 = par_port;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_timeout);
        tmp_assattr_value_3 = par_timeout;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 14;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__ == cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__);
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__ = NULL;
    }

    assertFrameObject(frame_frame_services$udp_service$$36$$$36$$$36$function__1___init__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$udp_service$$36$$$36$$$36$function__2_connect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect)) {
        Py_XDECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect = MAKE_FUNCTION_FRAME(tstate, code_objects_750db01704c8d42b44f3a63de05291ae, module_services$udp_service, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_type_description == NULL);
    frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect = cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect);
    assert(Py_REFCNT(frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_1 = module_var_accessor_services$$36$udp_service$socket(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_expression_value_2 = module_var_accessor_services$$36$udp_service$socket(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_expression_value_3 = module_var_accessor_services$$36$udp_service$socket(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[5]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[3]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[6]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[2]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 24;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame.f_lineno = 24;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_7 = module_var_accessor_services$$36$udp_service$logger(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 26;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[8]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[9];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[0]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 26;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[10];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 26;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[11];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_9 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[1]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 26;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[10];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 26;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_4 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 26;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame.f_lineno = 26;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_1); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_10 = module_var_accessor_services$$36$udp_service$logger(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 29;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[13];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_e);
            tmp_format_value_3 = var_e;
            tmp_format_spec_3 = mod_consts[10];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 29;
                type_description_1 = "oo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 29;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame.f_lineno = 29;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 30;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame)) {
            frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oo";
    goto try_except_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 19;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame)) {
            frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oo";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect,
        type_description_1,
        par_self,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect == cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect);
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect = NULL;
    }

    assertFrameObject(frame_frame_services$udp_service$$36$$$36$$$36$function__2_connect);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$udp_service$$36$$$36$$$36$function__3_send_command(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_command = python_pars[1];
    PyObject *var_data = NULL;
    PyObject *var_response = NULL;
    PyObject *var__ = NULL;
    PyObject *var_result = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command)) {
        Py_XDECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command = MAKE_FUNCTION_FRAME(tstate, code_objects_340768e7dd04f233350950338826c124, module_services$udp_service, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_type_description == NULL);
    frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command = cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command);
    assert(Py_REFCNT(frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[15];
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 35;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_state.exception_value = tmp_raise_type_1;
        exception_lineno = 35;
        RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_command);
        tmp_add_expr_left_1 = par_command;
        tmp_add_expr_right_1 = mod_consts[16];
        tmp_expression_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 38;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[18]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[19]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[0]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_expression_value_6;
            PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[1]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 41;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_7 = module_var_accessor_services$$36$udp_service$logger(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[20]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[21];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_command);
            tmp_format_value_1 = par_command;
            tmp_format_spec_1 = mod_consts[10];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 43;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 43;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 46;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[22],
            PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 46;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_response == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_response = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_6);
        var__ = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_response);
        tmp_expression_value_9 = var_response;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[24]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 49;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[25], 0), mod_consts[26]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        tmp_expression_value_10 = module_var_accessor_services$$36$udp_service$logger(tstate);
        if (unlikely(tmp_expression_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[20]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_3 = mod_consts[27];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_result);
            tmp_expression_value_11 = var_result;
            tmp_subscript_value_1 = mod_consts[28];
            tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 51;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_2 = mod_consts[10];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 51;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_4 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 51;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        } else if (exception_keeper_lineno_3 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command, exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_12;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_expression_value_12 = module_var_accessor_services$$36$udp_service$socket(tstate);
        if (unlikely(tmp_expression_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[3]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[2]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_4;
        tmp_expression_value_13 = module_var_accessor_services$$36$udp_service$logger(tstate);
        if (unlikely(tmp_expression_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[12]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_4 = mod_consts[30];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_command);
            tmp_format_value_3 = par_command;
            tmp_format_spec_3 = mod_consts[10];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 56;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 56;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 56;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_return_value = mod_consts[31];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_8); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_e = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_5;
        tmp_expression_value_14 = module_var_accessor_services$$36$udp_service$logger(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[12]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_5 = mod_consts[30];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_e);
            tmp_format_value_4 = var_e;
            tmp_format_spec_4 = mod_consts[10];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 60;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_6 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = 60;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = mod_consts[32];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_e);
            tmp_format_value_5 = var_e;
            tmp_format_spec_5 = mod_consts[10];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 61;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_return_value = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 61;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        goto try_return_handler_6;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 37;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame)) {
            frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "ooooooo";
    goto try_except_handler_5;
    branch_end_3:;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command,
        type_description_1,
        par_self,
        par_command,
        var_data,
        var_response,
        var__,
        var_result,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command == cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command);
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command = NULL;
    }

    assertFrameObject(frame_frame_services$udp_service$$36$$$36$$$36$function__3_send_command);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_response);
    var_response = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_response);
    var_response = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$udp_service$$36$$$36$$$36$function__4_disconnect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect)) {
        Py_XDECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect = MAKE_FUNCTION_FRAME(tstate, code_objects_191fff771dc74138f96b283bcd3800d9, module_services$udp_service, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect->m_type_description == NULL);
    frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect = cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect);
    assert(Py_REFCNT(frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect->m_frame.f_lineno = 66;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[33]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 66;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = module_var_accessor_services$$36$udp_service$logger(tstate);
        if (unlikely(tmp_called_instance_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[7]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect->m_frame.f_lineno = 67;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect == cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect);
        cache_frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect = NULL;
    }

    assertFrameObject(frame_frame_services$udp_service$$36$$$36$$$36$function__4_disconnect);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$udp_service$$36$$$36$$$36$function__1___init__,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        code_objects_9b3c8567670f7e1bcdace5d5e800c38d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$udp_service,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__2_connect(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$udp_service$$36$$$36$$$36$function__2_connect,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        code_objects_750db01704c8d42b44f3a63de05291ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_services$udp_service,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__3_send_command(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$udp_service$$36$$$36$$$36$function__3_send_command,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        code_objects_340768e7dd04f233350950338826c124,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$udp_service,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__4_disconnect(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$udp_service$$36$$$36$$$36$function__4_disconnect,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        code_objects_191fff771dc74138f96b283bcd3800d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_services$udp_service,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_services$udp_service[] = {
    impl_services$udp_service$$36$$$36$$$36$function__1___init__,
    impl_services$udp_service$$36$$$36$$$36$function__2_connect,
    impl_services$udp_service$$36$$$36$$$36$function__3_send_command,
    impl_services$udp_service$$36$$$36$$$36$function__4_disconnect,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_services$udp_service);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_services$udp_service,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_services$udp_service,
        sizeof(function_table_services$udp_service) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "services.udp_service";
#endif

// Internal entry point for module code.
PyObject *modulecode_services$udp_service(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("services$udp_service");

    // Store the module for future use.
    module_services$udp_service = module;

    moduledict_services$udp_service = MODULE_DICT(module_services$udp_service);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule(tstate);

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("services$udp_service: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("services$udp_service: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("services$udp_service: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "services.udp_service" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initservices$udp_service\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_services$udp_service,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_services$udp_service,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[10]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_services$udp_service,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_services$udp_service,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_services$udp_service,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_services$udp_service);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_services$udp_service);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_services$udp_service;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_2);
    }
    frame_frame_services$udp_service = MAKE_MODULE_FRAME(code_objects_b6a5cddd452c3363efe9698748b2e58f, module_services$udp_service);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$udp_service);
    assert(Py_REFCNT(frame_frame_services$udp_service) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_services$$36$udp_service$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_services$$36$udp_service$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[3];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_services$udp_service;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_services$udp_service->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[41];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_services$udp_service;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_services$udp_service->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_services$udp_service,
                mod_consts[42],
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[42]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_services$$36$udp_service$logging(tstate);
        assert(!(tmp_called_instance_1 == NULL));
        frame_frame_services$udp_service->m_frame.f_lineno = 6;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[45];
        tmp_result = DICT_SET_ITEM(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8, mod_consts[46], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[47];
        tmp_result = DICT_SET_ITEM(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8, mod_consts[36], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[48];
        tmp_result = DICT_SET_ITEM(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            tmp_defaults_1 = mod_consts[50];
            tmp_annotations_1 = DICT_COPY(tstate, mod_consts[51]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

            tmp_result = DICT_SET_ITEM(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }


        tmp_dictset_value = MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__2_connect(tstate);

        tmp_result = DICT_SET_ITEM(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(tstate, mod_consts[56]);


            tmp_dictset_value = MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__3_send_command(tstate, tmp_annotations_2);

            tmp_result = DICT_SET_ITEM(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }


        tmp_dictset_value = MAKE_FUNCTION_services$udp_service$$36$$$36$$$36$function__4_disconnect(tstate);

        tmp_result = DICT_SET_ITEM(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[48];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_services$udp_service->m_frame.f_lineno = 8;
            tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 8;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8);
        locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8);
        locals_services$udp_service$$36$$$36$$$36$class__1_UpdService_8 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 8;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_services$udp_service, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_10);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$udp_service, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$udp_service->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$udp_service, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_services$udp_service);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("services$udp_service", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "services.udp_service" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_services$udp_service);
    return module_services$udp_service;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$udp_service, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("services$udp_service", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
