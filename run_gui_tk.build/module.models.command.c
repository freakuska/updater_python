/* Generated code for Python module 'models$command'
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

/* The "module_models$command" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_models$command;
PyDictObject *moduledict_models$command;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[80];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[80];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("models.command"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 80; i++) {
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
void checkModuleConstants_models$command(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 80; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 1
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
static PyObject *module_var_accessor_models$$36$command$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_models$command->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_models$command->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)mod_consts[79]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_models$command->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[79]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[79]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[79], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)mod_consts[79]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)mod_consts[79]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[79]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a7885ef8285406dd386d25b159594b03;
static PyCodeObject *code_objects_d7df0f04c57645662dbb3376c99ef3e0;
static PyCodeObject *code_objects_adbfb9b4bcc3f273dc9587825aad5d21;
static PyCodeObject *code_objects_3c5eef462be87c2645796d84882a8ae0;
static PyCodeObject *code_objects_01f89f36dc127d29394d467078229f24;
static PyCodeObject *code_objects_d33e5ba4aefa823ce32563c9783ee68e;
static PyCodeObject *code_objects_4df1baa260cc25682ea2e690e6bbb88f;
static PyCodeObject *code_objects_b3d9d21b03b2a8567d5cbacc76e27815;
static PyCodeObject *code_objects_6b47586246a46a12545406f269f006e9;
static PyCodeObject *code_objects_9fa4a3a224d6f44ecbb910ec0f7a2797;
static PyCodeObject *code_objects_caa0712b5e0452bacf8f214f1228befa;
static PyCodeObject *code_objects_ce429cee9b593c95cb1d491fceb72335;
static PyCodeObject *code_objects_12f1290478b238974cd6b1d034e510c8;
static PyCodeObject *code_objects_37a212bcbe6c640e2026beefada7426e;
static PyCodeObject *code_objects_7ae68a897c9d44c1e71df3459fbb2bec;
static PyCodeObject *code_objects_3b4259d1fe1aa96504121e38bee40f15;
static PyCodeObject *code_objects_aa7a2929c29de01046a918485a53cd25;
static PyCodeObject *code_objects_f040ba01ed50a323b0150008a0eedb22;
static PyCodeObject *code_objects_7a8c2c077bf204942435a0a9c1e97c52;
static PyCodeObject *code_objects_15154f7e86a94ea70e1e94594d929d22;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[74]); CHECK_OBJECT(module_filename_obj);
    code_objects_a7885ef8285406dd386d25b159594b03 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[75], mod_consts[75], NULL, NULL, 0, 0, 0);
    code_objects_d7df0f04c57645662dbb3376c99ef3e0 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[52], mod_consts[76], NULL, 1, 0, 0);
    code_objects_adbfb9b4bcc3f273dc9587825aad5d21 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[49], mod_consts[50], mod_consts[76], NULL, 1, 0, 0);
    code_objects_3c5eef462be87c2645796d84882a8ae0 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[55], mod_consts[56], mod_consts[76], NULL, 1, 0, 0);
    code_objects_01f89f36dc127d29394d467078229f24 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[36], mod_consts[37], NULL, NULL, 0, 0, 0);
    code_objects_d33e5ba4aefa823ce32563c9783ee68e = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[54], mod_consts[76], NULL, 1, 0, 0);
    code_objects_4df1baa260cc25682ea2e690e6bbb88f = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[73], NULL, NULL, 0, 0, 0);
    code_objects_b3d9d21b03b2a8567d5cbacc76e27815 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[46], mod_consts[76], NULL, 1, 0, 0);
    code_objects_6b47586246a46a12545406f269f006e9 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[34], NULL, NULL, 0, 0, 0);
    code_objects_9fa4a3a224d6f44ecbb910ec0f7a2797 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[48], mod_consts[76], NULL, 1, 0, 0);
    code_objects_caa0712b5e0452bacf8f214f1228befa = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[66], mod_consts[67], NULL, NULL, 0, 0, 0);
    code_objects_ce429cee9b593c95cb1d491fceb72335 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[28], NULL, NULL, 0, 0, 0);
    code_objects_12f1290478b238974cd6b1d034e510c8 = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[24], mod_consts[25], NULL, NULL, 0, 0, 0);
    code_objects_37a212bcbe6c640e2026beefada7426e = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[30], mod_consts[31], NULL, NULL, 0, 0, 0);
    code_objects_7ae68a897c9d44c1e71df3459fbb2bec = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[43], NULL, NULL, 0, 0, 0);
    code_objects_3b4259d1fe1aa96504121e38bee40f15 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[40], NULL, NULL, 0, 0, 0);
    code_objects_aa7a2929c29de01046a918485a53cd25 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[58], mod_consts[76], NULL, 1, 0, 0);
    code_objects_f040ba01ed50a323b0150008a0eedb22 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[63], mod_consts[64], mod_consts[76], NULL, 1, 0, 0);
    code_objects_7a8c2c077bf204942435a0a9c1e97c52 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[70], mod_consts[77], NULL, 1, 0, 0);
    code_objects_15154f7e86a94ea70e1e94594d929d22 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[61], mod_consts[62], mod_consts[78], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__10_disable_watchdog(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__11_check_watchdog_status(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__12_get_flash_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__13_erase_flash(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__14_reset_lsr(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__17_global_reset(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__18_set_frequency_plan(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__19_get_frequency_plan(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__1_phy_stop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__2_phy_start(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__3_poll_lsr_clear(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__4_get_lsr_list(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__5_get_bkr_status(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__6_promiscuous_enable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__7_promiscuous_disable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__8_get_lsr_ip(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__9_get_sys_info(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_models$command$$36$$$36$$$36$function__8_get_lsr_ip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip = MAKE_FUNCTION_FRAME(tstate, code_objects_b3d9d21b03b2a8567d5cbacc76e27815, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip = cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 35;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[2];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip == cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip);
        cache_frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__8_get_lsr_ip);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__9_get_sys_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info = MAKE_FUNCTION_FRAME(tstate, code_objects_9fa4a3a224d6f44ecbb910ec0f7a2797, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info = cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 39;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[3];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info == cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info);
        cache_frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__9_get_sys_info);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__10_disable_watchdog(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog = MAKE_FUNCTION_FRAME(tstate, code_objects_adbfb9b4bcc3f273dc9587825aad5d21, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog = cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 43;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog == cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog);
        cache_frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__10_disable_watchdog);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__11_check_watchdog_status(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status = MAKE_FUNCTION_FRAME(tstate, code_objects_d7df0f04c57645662dbb3376c99ef3e0, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status = cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 47;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[5];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status == cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status);
        cache_frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__11_check_watchdog_status);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__12_get_flash_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size = MAKE_FUNCTION_FRAME(tstate, code_objects_d33e5ba4aefa823ce32563c9783ee68e, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size = cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 51;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size == cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size);
        cache_frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__12_get_flash_size);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__13_erase_flash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash = MAKE_FUNCTION_FRAME(tstate, code_objects_3c5eef462be87c2645796d84882a8ae0, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash = cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 55;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[7];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 55;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash == cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash);
        cache_frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__13_erase_flash);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__14_reset_lsr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr = MAKE_FUNCTION_FRAME(tstate, code_objects_aa7a2929c29de01046a918485a53cd25, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr = cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 59;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr == cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr);
        cache_frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__14_reset_lsr);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout = MAKE_FUNCTION_FRAME(tstate, code_objects_15154f7e86a94ea70e1e94594d929d22, module_models$command, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout = cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 63;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_timeout);
            tmp_format_value_2 = par_timeout;
            tmp_format_spec_2 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 63;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout,
        type_description_1,
        par_lsr_id,
        par_timeout
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout == cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout);
        cache_frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lsr_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout = MAKE_FUNCTION_FRAME(tstate, code_objects_f040ba01ed50a323b0150008a0eedb22, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout = cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[0];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 67;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 67;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout,
        type_description_1,
        par_lsr_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout == cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout);
        cache_frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_models$command$$36$$$36$$$36$function__18_set_frequency_plan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_plan_id = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan)) {
        Py_XDECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan = MAKE_FUNCTION_FRAME(tstate, code_objects_7a8c2c077bf204942435a0a9c1e97c52, module_models$command, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan->m_type_description == NULL);
    frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan = cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan);
    assert(Py_REFCNT(frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[11];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_plan_id);
            tmp_format_value_1 = par_plan_id;
            tmp_format_spec_1 = mod_consts[1];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 77;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 77;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan,
        type_description_1,
        par_plan_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan == cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan);
        cache_frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan = NULL;
    }

    assertFrameObject(frame_frame_models$command$$36$$$36$$$36$function__18_set_frequency_plan);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_plan_id);
    Py_DECREF(par_plan_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_plan_id);
    Py_DECREF(par_plan_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__10_disable_watchdog(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__10_disable_watchdog,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        code_objects_adbfb9b4bcc3f273dc9587825aad5d21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__11_check_watchdog_status(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__11_check_watchdog_status,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        code_objects_d7df0f04c57645662dbb3376c99ef3e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__12_get_flash_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__12_get_flash_size,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        code_objects_d33e5ba4aefa823ce32563c9783ee68e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__13_erase_flash(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__13_erase_flash,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        code_objects_3c5eef462be87c2645796d84882a8ae0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__14_reset_lsr(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__14_reset_lsr,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        code_objects_aa7a2929c29de01046a918485a53cd25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        code_objects_15154f7e86a94ea70e1e94594d929d22,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        code_objects_f040ba01ed50a323b0150008a0eedb22,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__17_global_reset(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        code_objects_caa0712b5e0452bacf8f214f1228befa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[65]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__18_set_frequency_plan(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__18_set_frequency_plan,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        code_objects_7a8c2c077bf204942435a0a9c1e97c52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__19_get_frequency_plan(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        code_objects_4df1baa260cc25682ea2e690e6bbb88f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[71]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__1_phy_stop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[25],
#endif
        code_objects_12f1290478b238974cd6b1d034e510c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[23]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__2_phy_start(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        code_objects_ce429cee9b593c95cb1d491fceb72335,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[26]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__3_poll_lsr_clear(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[31],
#endif
        code_objects_37a212bcbe6c640e2026beefada7426e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[29]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__4_get_lsr_list(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        code_objects_6b47586246a46a12545406f269f006e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[32]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__5_get_bkr_status(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        code_objects_01f89f36dc127d29394d467078229f24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[35]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__6_promiscuous_enable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        code_objects_3b4259d1fe1aa96504121e38bee40f15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[38]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__7_promiscuous_disable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        code_objects_7ae68a897c9d44c1e71df3459fbb2bec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[41]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__8_get_lsr_ip(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__8_get_lsr_ip,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        code_objects_b3d9d21b03b2a8567d5cbacc76e27815,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_models$command$$36$$$36$$$36$function__9_get_sys_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_models$command$$36$$$36$$$36$function__9_get_sys_info,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        code_objects_9fa4a3a224d6f44ecbb910ec0f7a2797,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_models$command,
        NULL,
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

static function_impl_code const function_table_models$command[] = {
    impl_models$command$$36$$$36$$$36$function__8_get_lsr_ip,
    impl_models$command$$36$$$36$$$36$function__9_get_sys_info,
    impl_models$command$$36$$$36$$$36$function__10_disable_watchdog,
    impl_models$command$$36$$$36$$$36$function__11_check_watchdog_status,
    impl_models$command$$36$$$36$$$36$function__12_get_flash_size,
    impl_models$command$$36$$$36$$$36$function__13_erase_flash,
    impl_models$command$$36$$$36$$$36$function__14_reset_lsr,
    impl_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout,
    impl_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout,
    impl_models$command$$36$$$36$$$36$function__18_set_frequency_plan,
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

    return Nuitka_Function_GetFunctionState(function, function_table_models$command);
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
        module_models$command,
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
        function_table_models$command,
        sizeof(function_table_models$command) / sizeof(function_impl_code)
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
static char const *module_full_name = "models.command";
#endif

// Internal entry point for module code.
PyObject *modulecode_models$command(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("models$command");

    // Store the module for future use.
    module_models$command = module;

    moduledict_models$command = MODULE_DICT(module_models$command);

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
        PRINT_STRING("models$command: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("models$command: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("models$command: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "models.command" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmodels$command\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_models$command,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_models$command,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[1]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_models$command,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_models$command,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_models$command,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_models$command);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_models$command);
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

        UPDATE_STRING_DICT1(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_models$command;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_models$command, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_models$command, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_2);
    }
    frame_frame_models$command = MAKE_MODULE_FRAME(code_objects_a7885ef8285406dd386d25b159594b03, module_models$command);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_models$command);
    assert(Py_REFCNT(frame_frame_models$command) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_models$$36$command$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_models$$36$command$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_models$command, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[17];
        tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[18], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[19];
        tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[12], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[20];
        tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__1_phy_stop(tstate, tmp_annotations_1);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_2;
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_2 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__2_phy_start(tstate, tmp_annotations_2);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_2);
            Py_DECREF(tmp_staticmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_3;
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_3 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__3_poll_lsr_clear(tstate, tmp_annotations_3);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_3);
            Py_DECREF(tmp_staticmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_4;
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_4 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__4_get_lsr_list(tstate, tmp_annotations_4);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_4);
            Py_DECREF(tmp_staticmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_5;
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_5 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__5_get_bkr_status(tstate, tmp_annotations_5);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_5);
            Py_DECREF(tmp_staticmethod_arg_5);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_6;
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_6 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__6_promiscuous_enable(tstate, tmp_annotations_6);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_6);
            Py_DECREF(tmp_staticmethod_arg_6);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_7;
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_7 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__7_promiscuous_disable(tstate, tmp_annotations_7);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_7);
            Py_DECREF(tmp_staticmethod_arg_7);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_8;
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_8 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__8_get_lsr_ip(tstate, tmp_annotations_8);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_8);
            Py_DECREF(tmp_staticmethod_arg_8);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_9;
            PyObject *tmp_annotations_9;
            tmp_annotations_9 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_9 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__9_get_sys_info(tstate, tmp_annotations_9);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_9);
            Py_DECREF(tmp_staticmethod_arg_9);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_10;
            PyObject *tmp_annotations_10;
            tmp_annotations_10 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_10 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__10_disable_watchdog(tstate, tmp_annotations_10);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_10);
            Py_DECREF(tmp_staticmethod_arg_10);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_11;
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_11 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__11_check_watchdog_status(tstate, tmp_annotations_11);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_11);
            Py_DECREF(tmp_staticmethod_arg_11);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_12;
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_12 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__12_get_flash_size(tstate, tmp_annotations_12);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_12);
            Py_DECREF(tmp_staticmethod_arg_12);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_13;
            PyObject *tmp_annotations_13;
            tmp_annotations_13 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_13 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__13_erase_flash(tstate, tmp_annotations_13);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_13);
            Py_DECREF(tmp_staticmethod_arg_13);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_14;
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_14 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__14_reset_lsr(tstate, tmp_annotations_14);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_14);
            Py_DECREF(tmp_staticmethod_arg_14);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[57], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_15;
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_15;
            tmp_defaults_1 = mod_consts[59];
            tmp_annotations_15 = DICT_COPY(tstate, mod_consts[60]);
            Py_INCREF(tmp_defaults_1);


            tmp_staticmethod_arg_15 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__15_set_watchdog_timeout(tstate, tmp_defaults_1, tmp_annotations_15);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_15);
            Py_DECREF(tmp_staticmethod_arg_15);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_16;
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(tstate, mod_consts[44]);


            tmp_staticmethod_arg_16 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__16_reset_watchdog_timeout(tstate, tmp_annotations_16);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_16);
            Py_DECREF(tmp_staticmethod_arg_16);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_17;
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_17 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__17_global_reset(tstate, tmp_annotations_17);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_17);
            Py_DECREF(tmp_staticmethod_arg_17);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[66], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_18;
            PyObject *tmp_annotations_18;
            tmp_annotations_18 = DICT_COPY(tstate, mod_consts[68]);


            tmp_staticmethod_arg_18 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__18_set_frequency_plan(tstate, tmp_annotations_18);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_18);
            Py_DECREF(tmp_staticmethod_arg_18);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[69], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_staticmethod_arg_19;
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(tstate, mod_consts[22]);


            tmp_staticmethod_arg_19 = MAKE_FUNCTION_models$command$$36$$$36$$$36$function__19_get_frequency_plan(tstate, tmp_annotations_19);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_19);
            Py_DECREF(tmp_staticmethod_arg_19);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[20];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_models$command->m_frame.f_lineno = 1;
            tmp_assign_source_7 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 1;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_7;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_6 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_6);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1);
        locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1);
        locals_models$command$$36$$$36$$$36$class__1_LsrCommands_1 = NULL;
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
        exception_lineno = 1;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_models$command, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_6);
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
            exception_tb = MAKE_TRACEBACK(frame_frame_models$command, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_models$command->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_models$command, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_models$command);

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
    PGO_onModuleExit("models$command", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "models.command" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_models$command);
    return module_models$command;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_models$command, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("models$command", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
