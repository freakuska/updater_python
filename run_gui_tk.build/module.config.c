/* Generated code for Python module 'config'
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

/* The "module_config" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_config;
PyDictObject *moduledict_config;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[157];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[157];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("config"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 157; i++) {
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
void checkModuleConstants_config(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 157; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_config$BkrPollingConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_config->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_config->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[29]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_config->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[29]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[29], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[29]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[29], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[29]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[29]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[29]);
    }

    return result;
}

static PyObject *module_var_accessor_config$FlashConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_config->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_config->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[37]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_config->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[37]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[37], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[37]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[37], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[37]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[37]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[37]);
    }

    return result;
}

static PyObject *module_var_accessor_config$FrequencyPlan(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_config->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_config->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[125]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_config->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[125]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[125], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[125]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[125], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[125]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[125]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[125]);
    }

    return result;
}

static PyObject *module_var_accessor_config$LoggerConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_config->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_config->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[22]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_config->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[22]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[22], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[22]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[22], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[22]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[22]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[22]);
    }

    return result;
}

static PyObject *module_var_accessor_config$TftpConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_config->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_config->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[42]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_config->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[42]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[42], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[42]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[42], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[42]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[42]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[42]);
    }

    return result;
}

static PyObject *module_var_accessor_config$TimeoutConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_config->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_config->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[34]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_config->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[34]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[34], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[34]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[34], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[34]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[34]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[34]);
    }

    return result;
}

static PyObject *module_var_accessor_config$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_config->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_config->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[156]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_config->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[156]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[156], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[156]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[156], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[156]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)mod_consts[156]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[156]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cc0f2b236d8a6ff7332593928d5c46c9;
static PyCodeObject *code_objects_7b78cdbdcd2046dbb438355e4fddee53;
static PyCodeObject *code_objects_3e3ccb4839cc57fbc65e21bd93078fcd;
static PyCodeObject *code_objects_e657cbca3ba80bb5baa1e7f2aa660436;
static PyCodeObject *code_objects_9300c3ddda36ed79e9011b63639ff88d;
static PyCodeObject *code_objects_e5e6e7579a6d4a6f1642fe36a9f3dd08;
static PyCodeObject *code_objects_ad4c2bbe51b8e59cd5de4a67b93c4f1d;
static PyCodeObject *code_objects_dbc6c7401da4b0fcbb8fbe267bfb2f18;
static PyCodeObject *code_objects_cea49fb5361778d785db62a9b2c9eb45;
static PyCodeObject *code_objects_5843373a9b0af8ea977a887e5f1d251c;
static PyCodeObject *code_objects_c56a5ded32175e59f66cec58b5607569;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[148]); CHECK_OBJECT(module_filename_obj);
    code_objects_cc0f2b236d8a6ff7332593928d5c46c9 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[149], mod_consts[149], NULL, NULL, 0, 0, 0);
    code_objects_7b78cdbdcd2046dbb438355e4fddee53 = MAKE_CODE_OBJECT(module_filename_obj, 116, 0, mod_consts[131], mod_consts[131], mod_consts[150], NULL, 0, 0, 0);
    code_objects_3e3ccb4839cc57fbc65e21bd93078fcd = MAKE_CODE_OBJECT(module_filename_obj, 42, 0, mod_consts[42], mod_consts[42], mod_consts[150], NULL, 0, 0, 0);
    code_objects_e657cbca3ba80bb5baa1e7f2aa660436 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[127], mod_consts[128], mod_consts[151], NULL, 6, 0, 0);
    code_objects_9300c3ddda36ed79e9011b63639ff88d = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[129], mod_consts[130], mod_consts[152], NULL, 1, 0, 0);
    code_objects_e5e6e7579a6d4a6f1642fe36a9f3dd08 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], NULL, NULL, 0, 0, 0);
    code_objects_ad4c2bbe51b8e59cd5de4a67b93c4f1d = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[142], mod_consts[143], mod_consts[153], NULL, 1, 0, 0);
    code_objects_dbc6c7401da4b0fcbb8fbe267bfb2f18 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[139], mod_consts[140], mod_consts[154], NULL, 2, 0, 0);
    code_objects_cea49fb5361778d785db62a9b2c9eb45 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[80], mod_consts[81], mod_consts[153], NULL, 1, 0, 0);
    code_objects_5843373a9b0af8ea977a887e5f1d251c = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[145], mod_consts[153], NULL, 1, 0, 0);
    code_objects_c56a5ded32175e59f66cec58b5607569 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[147], mod_consts[155], NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__1_max_firmware_size_kb(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__3___str__(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__4_get_plan(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__5_get_all_plans(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__6_plan_names(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__7_ensure_directories_exist(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__8_validate_config(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_config$$36$$$36$$$36$function__1_max_firmware_size_kb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb = MAKE_FUNCTION_FRAME(tstate, code_objects_cea49fb5361778d785db62a9b2c9eb45, module_config, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb = cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb) == 2);

    // Framed code:
    {
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_1 = mod_consts[2];
        tmp_return_value = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb == cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb);
        cache_frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__1_max_firmware_size_kb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_config$$36$$$36$$$36$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_plan_id = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_downlink_hz = python_pars[3];
    PyObject *par_uplink_hz = python_pars[4];
    PyObject *par_min_fw_version = python_pars[5];
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__2___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__2___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__2___init__)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__2___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__2___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e657cbca3ba80bb5baa1e7f2aa660436, module_config, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__2___init__->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__2___init__ = cache_frame_frame_config$$36$$$36$$$36$function__2___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__2___init__);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__2___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_plan_id);
        tmp_assattr_value_1 = par_plan_id;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 106;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_2 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_downlink_hz);
        tmp_assattr_value_3 = par_downlink_hz;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_uplink_hz);
        tmp_assattr_value_4 = par_uplink_hz;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_min_fw_version);
        tmp_assattr_value_5 = par_min_fw_version;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 110;
            type_description_1 = "oooooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__2___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__2___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__2___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__2___init__,
        type_description_1,
        par_self,
        par_plan_id,
        par_name,
        par_downlink_hz,
        par_uplink_hz,
        par_min_fw_version
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__2___init__ == cache_frame_frame_config$$36$$$36$$$36$function__2___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__2___init__);
        cache_frame_frame_config$$36$$$36$$$36$function__2___init__ = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__2___init__);

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
    CHECK_OBJECT(par_plan_id);
    Py_DECREF(par_plan_id);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_downlink_hz);
    Py_DECREF(par_downlink_hz);
    CHECK_OBJECT(par_uplink_hz);
    Py_DECREF(par_uplink_hz);
    CHECK_OBJECT(par_min_fw_version);
    Py_DECREF(par_min_fw_version);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_plan_id);
    Py_DECREF(par_plan_id);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_downlink_hz);
    Py_DECREF(par_downlink_hz);
    CHECK_OBJECT(par_uplink_hz);
    Py_DECREF(par_uplink_hz);
    CHECK_OBJECT(par_min_fw_version);
    Py_DECREF(par_min_fw_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_config$$36$$$36$$$36$function__3___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__3___str__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__3___str__ = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__3___str__)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__3___str__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__3___str__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__3___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9300c3ddda36ed79e9011b63639ff88d, module_config, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__3___str__->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__3___str__ = cache_frame_frame_config$$36$$$36$$$36$function__3___str__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__3___str__);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__3___str__) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[8];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 9);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[9];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[9];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[11];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[5]);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_1 = mod_consts[12];
            tmp_format_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[13];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_truediv_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[6]);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[12];
            tmp_format_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[13];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 113;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__3___str__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__3___str__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__3___str__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__3___str__,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__3___str__ == cache_frame_frame_config$$36$$$36$$$36$function__3___str__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__3___str__);
        cache_frame_frame_config$$36$$$36$$$36$function__3___str__ = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__3___str__);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_config$$36$$$36$$$36$function__4_get_plan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_plan_id = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__4_get_plan;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan = MAKE_FUNCTION_FRAME(tstate, code_objects_dbc6c7401da4b0fcbb8fbe267bfb2f18, module_config, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__4_get_plan = cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__4_get_plan);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__4_get_plan) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_plan_id);
        tmp_cmp_expr_left_1 = par_plan_id;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 148;
            type_description_1 = "oo";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_3 = par_cls;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[16]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_4 = par_cls;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_subscript_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_6 = par_cls;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[16]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 150;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_plan_id);
        tmp_subscript_value_2 = par_plan_id;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 150;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__4_get_plan, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__4_get_plan->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__4_get_plan, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__4_get_plan,
        type_description_1,
        par_cls,
        par_plan_id
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__4_get_plan == cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan);
        cache_frame_frame_config$$36$$$36$$$36$function__4_get_plan = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__4_get_plan);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_plan_id);
    Py_DECREF(par_plan_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_plan_id);
    Py_DECREF(par_plan_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_config$$36$$$36$$$36$function__5_get_all_plans(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__5_get_all_plans;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans = MAKE_FUNCTION_FRAME(tstate, code_objects_ad4c2bbe51b8e59cd5de4a67b93c4f1d, module_config, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__5_get_all_plans = cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__5_get_all_plans);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__5_get_all_plans) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__5_get_all_plans, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__5_get_all_plans->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__5_get_all_plans, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__5_get_all_plans,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__5_get_all_plans == cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans);
        cache_frame_frame_config$$36$$$36$$$36$function__5_get_all_plans = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__5_get_all_plans);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_config$$36$$$36$$$36$function__6_plan_names(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *outline_0_var_plan_id = NULL;
    PyObject *outline_0_var_plan = NULL;
    PyObject *tmp_dictcontraction$$36$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$$36$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$$36$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__6_plan_names;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names = MAKE_FUNCTION_FRAME(tstate, code_objects_5843373a9b0af8ea977a887e5f1d251c, module_config, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__6_plan_names = cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__6_plan_names);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__6_plan_names) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_frame_config$$36$$$36$$$36$function__6_plan_names->m_frame.f_lineno = 160;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_dictcontraction_1__$0 == NULL);
        tmp_dictcontraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_dictcontraction_1__contraction == NULL);
        tmp_dictcontraction_1__contraction = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        tmp_next_source_1 = tmp_dictcontraction_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "o";
                exception_lineno = 160;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_1__iter_value_0;
            tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
        tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_dictcontraction$$36$tuple_unpack_1__source_iter;
            tmp_dictcontraction$$36$tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_dictcontraction$$36$tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_dictcontraction$$36$tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_dictcontraction$$36$tuple_unpack_1__element_1;
            tmp_dictcontraction$$36$tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_dictcontraction$$36$tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_dictcontraction$$36$tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_dictcontraction$$36$tuple_unpack_1__element_2;
            tmp_dictcontraction$$36$tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_dictcontraction$$36$tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_dictcontraction$$36$tuple_unpack_1__source_iter;
        tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
        if (tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 160;
            type_description_1 = "o";
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

    CHECK_OBJECT(tmp_dictcontraction$$36$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_dictcontraction$$36$tuple_unpack_1__source_iter);
    tmp_dictcontraction$$36$tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_dictcontraction$$36$tuple_unpack_1__element_1);
    tmp_dictcontraction$$36$tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_dictcontraction$$36$tuple_unpack_1__element_2);
    tmp_dictcontraction$$36$tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_dictcontraction$$36$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_dictcontraction$$36$tuple_unpack_1__source_iter);
    tmp_dictcontraction$$36$tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dictcontraction$$36$tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_dictcontraction$$36$tuple_unpack_1__element_1;
        {
            PyObject *old = outline_0_var_plan_id;
            outline_0_var_plan_id = tmp_assign_source_7;
            Py_INCREF(outline_0_var_plan_id);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_dictcontraction$$36$tuple_unpack_1__element_1);
    tmp_dictcontraction$$36$tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_dictcontraction$$36$tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_dictcontraction$$36$tuple_unpack_1__element_2;
        {
            PyObject *old = outline_0_var_plan;
            outline_0_var_plan = tmp_assign_source_8;
            Py_INCREF(outline_0_var_plan);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_dictcontraction$$36$tuple_unpack_1__element_2);
    tmp_dictcontraction$$36$tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_dictset38_key_1;
        PyObject *tmp_dictset38_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dictset38_dict_1;
        CHECK_OBJECT(outline_0_var_plan_id);
        tmp_dictset38_key_1 = outline_0_var_plan_id;
        CHECK_OBJECT(outline_0_var_plan);
        tmp_expression_value_3 = outline_0_var_plan;
        tmp_dictset38_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
        if (tmp_dictset38_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
        assert(PyDict_CheckExact(tmp_dictset38_dict_1));
        tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

        Py_DECREF(tmp_dictset38_value_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 160;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    tmp_return_value = tmp_dictcontraction_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
    goto try_return_handler_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_plan_id);
    outline_0_var_plan_id = NULL;
    Py_XDECREF(outline_0_var_plan);
    outline_0_var_plan = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(outline_0_var_plan_id);
    outline_0_var_plan_id = NULL;
    Py_XDECREF(outline_0_var_plan);
    outline_0_var_plan = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 160;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__6_plan_names, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__6_plan_names->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__6_plan_names, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__6_plan_names,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__6_plan_names == cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names);
        cache_frame_frame_config$$36$$$36$$$36$function__6_plan_names = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__6_plan_names);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_config$$36$$$36$$$36$function__7_ensure_directories_exist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist = MAKE_FUNCTION_FRAME(tstate, code_objects_e5e6e7579a6d4a6f1642fe36a9f3dd08, module_config, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist = cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_exists_arg_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_config$LoggerConfig(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_exists_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[23]);
        if (tmp_exists_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
        Py_DECREF(tmp_exists_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 166;

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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = IMPORT_HARD_OS();
        assert(!(tmp_expression_value_2 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = module_var_accessor_config$LoggerConfig(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));

            Py_DECREF(tmp_called_value_1);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[23]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist->m_frame.f_lineno = 167;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[25]);
        assert(tmp_called_value_2 != NULL);
        tmp_tuple_element_1 = mod_consts[26];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = module_var_accessor_config$LoggerConfig(tstate);
            if (unlikely(tmp_expression_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[22]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 168;

                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[23]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 168;

                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[9];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 168;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[27];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist->m_frame.f_lineno = 168;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 168;

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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist == cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist);
        cache_frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__7_ensure_directories_exist);

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

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_config$$36$$$36$$$36$function__8_validate_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_errors = NULL;
    PyObject *var_error = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$function__8_validate_config;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
        assert(var_errors == NULL);
        var_errors = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config)) {
        Py_XDECREF(cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config = MAKE_FUNCTION_FRAME(tstate, code_objects_c56a5ded32175e59f66cec58b5607569, module_config, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config->m_type_description == NULL);
    frame_frame_config$$36$$$36$$$36$function__8_validate_config = cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$function__8_validate_config);
    assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$function__8_validate_config) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_config$BkrPollingConfig(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[29]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = const_int_0;
        tmp_condition_result_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_errors);
        tmp_list_arg_value_1 = var_errors;
        tmp_item_value_1 = mod_consts[31];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = module_var_accessor_config$BkrPollingConfig(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[29]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = const_int_0;
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        CHECK_OBJECT(var_errors);
        tmp_list_arg_value_2 = var_errors;
        tmp_item_value_2 = mod_consts[33];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = module_var_accessor_config$TimeoutConfig(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[34]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = const_int_0;
        tmp_condition_result_3 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        CHECK_OBJECT(var_errors);
        tmp_list_arg_value_3 = var_errors;
        tmp_item_value_3 = mod_consts[36];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = module_var_accessor_config$FlashConfig(tstate);
        if (unlikely(tmp_expression_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[37]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[1]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[38];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_expression_value_5 = module_var_accessor_config$FlashConfig(tstate);
        if (unlikely(tmp_expression_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[37]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[1]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[39];
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_list_arg_value_4;
        PyObject *tmp_item_value_4;
        CHECK_OBJECT(var_errors);
        tmp_list_arg_value_4 = var_errors;
        tmp_item_value_4 = mod_consts[40];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
        assert(!(tmp_result == false));
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = module_var_accessor_config$FlashConfig(tstate);
        if (unlikely(tmp_expression_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[37]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[0]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = const_int_0;
        tmp_condition_result_5 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_list_arg_value_5;
        PyObject *tmp_item_value_5;
        CHECK_OBJECT(var_errors);
        tmp_list_arg_value_5 = var_errors;
        tmp_item_value_5 = mod_consts[41];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_5, tmp_item_value_5);
        assert(!(tmp_result == false));
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_exists_arg_1;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = module_var_accessor_config$TftpConfig(tstate);
        if (unlikely(tmp_expression_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[42]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_exists_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[43]);
        if (tmp_exists_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
        Py_DECREF(tmp_exists_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 193;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_list_arg_value_6;
        PyObject *tmp_item_value_6;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_errors);
        tmp_list_arg_value_6 = var_errors;
        tmp_tuple_element_1 = mod_consts[44];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_expression_value_8 = module_var_accessor_config$TftpConfig(tstate);
            if (unlikely(tmp_expression_value_8 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[42]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 194;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[43]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 194;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[9];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 194;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[45];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_item_value_6 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_item_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_6, tmp_item_value_6);
        assert(!(tmp_result == false));
    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        CHECK_OBJECT(var_errors);
        tmp_condition_result_7 = CHECK_IF_TRUE(var_errors) == 1;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[25]);
        assert(tmp_called_value_1 != NULL);
        frame_frame_config$$36$$$36$$$36$function__8_validate_config->m_frame.f_lineno = 198;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[46]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_errors);
        tmp_iter_arg_1 = var_errors;
        tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oo";
                exception_lineno = 199;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_error;
            var_error = tmp_assign_source_4;
            Py_INCREF(var_error);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_format_value_2;
        PyObject *tmp_format_spec_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[25]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(var_error);
        tmp_format_value_2 = var_error;
        tmp_format_spec_2 = mod_consts[9];
        tmp_args_element_value_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_frame_config$$36$$$36$$$36$function__8_validate_config->m_frame.f_lineno = 200;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 199;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[25]);
        assert(tmp_called_value_3 != NULL);
        frame_frame_config$$36$$$36$$$36$function__8_validate_config->m_frame.f_lineno = 203;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts[47]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_7:;


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
            exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$function__8_validate_config, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$function__8_validate_config->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$function__8_validate_config, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_config$$36$$$36$$$36$function__8_validate_config,
        type_description_1,
        var_errors,
        var_error
    );


    // Release cached frame if used for exception.
    if (frame_frame_config$$36$$$36$$$36$function__8_validate_config == cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config);
        cache_frame_frame_config$$36$$$36$$$36$function__8_validate_config = NULL;
    }

    assertFrameObject(frame_frame_config$$36$$$36$$$36$function__8_validate_config);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_errors);
    Py_DECREF(var_errors);
    var_errors = NULL;
    Py_XDECREF(var_error);
    var_error = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_errors);
    Py_DECREF(var_errors);
    var_errors = NULL;
    Py_XDECREF(var_error);
    var_error = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__1_max_firmware_size_kb(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__1_max_firmware_size_kb,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        code_objects_cea49fb5361778d785db62a9b2c9eb45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_config,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__2___init__,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        code_objects_e657cbca3ba80bb5baa1e7f2aa660436,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_config,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__3___str__(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__3___str__,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        code_objects_9300c3ddda36ed79e9011b63639ff88d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_config,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__4_get_plan(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__4_get_plan,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        code_objects_dbc6c7401da4b0fcbb8fbe267bfb2f18,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_config,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__5_get_all_plans(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__5_get_all_plans,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        code_objects_ad4c2bbe51b8e59cd5de4a67b93c4f1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_config,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__6_plan_names(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__6_plan_names,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        code_objects_5843373a9b0af8ea977a887e5f1d251c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_config,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__7_ensure_directories_exist(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__7_ensure_directories_exist,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e5e6e7579a6d4a6f1642fe36a9f3dd08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_config,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_config$$36$$$36$$$36$function__8_validate_config(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_config$$36$$$36$$$36$function__8_validate_config,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c56a5ded32175e59f66cec58b5607569,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_config,
        mod_consts[48],
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

static function_impl_code const function_table_config[] = {
    impl_config$$36$$$36$$$36$function__1_max_firmware_size_kb,
    impl_config$$36$$$36$$$36$function__2___init__,
    impl_config$$36$$$36$$$36$function__3___str__,
    impl_config$$36$$$36$$$36$function__4_get_plan,
    impl_config$$36$$$36$$$36$function__5_get_all_plans,
    impl_config$$36$$$36$$$36$function__6_plan_names,
    impl_config$$36$$$36$$$36$function__7_ensure_directories_exist,
    impl_config$$36$$$36$$$36$function__8_validate_config,
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

    return Nuitka_Function_GetFunctionState(function, function_table_config);
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
        module_config,
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
        function_table_config,
        sizeof(function_table_config) / sizeof(function_impl_code)
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
static char const *module_full_name = "config";
#endif

// Internal entry point for module code.
PyObject *modulecode_config(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("config");

    // Store the module for future use.
    module_config = module;

    moduledict_config = MODULE_DICT(module_config);

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
        PRINT_STRING("config: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("config: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("config: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "config" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initconfig\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_config,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_config,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[9]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_config,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_config,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_config,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_config);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_config, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_config, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_config, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_config);
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

        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_config;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_config$$36$$$36$$$36$class__3_FlashConfig_31 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_config$$36$$$36$$$36$class__4_TftpConfig_42 = NULL;
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_config$$36$$$36$$$36$class__6_LoggerConfig_60 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_config$$36$$$36$$$36$class__7_NetworkConfig_69 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_config$$36$$$36$$$36$class__9_StatusMarkers_85 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116 = NULL;
    struct Nuitka_FrameObject *frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_config, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_config, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_2);
    }
    frame_frame_config = MAKE_MODULE_FRAME(code_objects_cc0f2b236d8a6ff7332593928d5c46c9, module_config);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_config);
    assert(Py_REFCNT(frame_frame_config) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_config$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_config$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_config, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_config, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[57];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[29];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[59];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[32], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[60];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[30], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[61];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[62], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[63];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[64], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[65];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[66], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[67];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3, mod_consts[68], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[29];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 3;
            tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 3;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_8;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_7 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3);
        locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3);
        locals_config$$36$$$36$$$36$class__1_BkrPollingConfig_3 = NULL;
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
        exception_lineno = 3;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_7);
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
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[69];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[34];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[70];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[35], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[67];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[71], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[38];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[72], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[73];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[74], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[67];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[34];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 17;
            tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 17;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_11 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17);
        locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_lineno_4 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_4 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17);
        locals_config$$36$$$36$$$36$class__2_TimeoutConfig_17 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_5 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_5 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 17;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_11);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_config$$36$$$36$$$36$class__3_FlashConfig_31 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__3_FlashConfig_31, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[76];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__3_FlashConfig_31, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[37];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__3_FlashConfig_31, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[77];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__3_FlashConfig_31, mod_consts[0], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[78];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__3_FlashConfig_31, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(tstate, mod_consts[79]);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_config$$36$$$36$$$36$function__1_max_firmware_size_kb(tstate, tmp_annotations_1);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__3_FlashConfig_31, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[37];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_config$$36$$$36$$$36$class__3_FlashConfig_31;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 31;
            tmp_assign_source_16 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 31;

                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_15 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__3_FlashConfig_31);
        locals_config$$36$$$36$$$36$class__3_FlashConfig_31 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__3_FlashConfig_31);
        locals_config$$36$$$36$$$36$class__3_FlashConfig_31 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_8 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_8 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 31;
        goto try_except_handler_7;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_15);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_lineno_9 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_9 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_config$$36$$$36$$$36$class__4_TftpConfig_42 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[82];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[42];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[83];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[84], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[85];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[86], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2 = MAKE_CLASS_FRAME(tstate, code_objects_3e3ccb4839cc57fbc65e21bd93078fcd, module_config, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2);
        assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            tmp_expression_value_1 = IMPORT_HARD_NTPATH();
            assert(!(tmp_expression_value_1 == NULL));
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[87]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_1 = DICT_GET_ITEM0(tstate, locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[84]);

            if (unlikely(tmp_args_element_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_4);
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[84]);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_2 = DICT_GET_ITEM0(tstate, locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[86]);

            if (unlikely(tmp_args_element_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_called_value_4);
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[86]);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 49;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_frame_config$$36$$$36$$$36$class__4_TftpConfig_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_12;
        skip_nested_handling_1:;
        tmp_dictset_value = mod_consts[70];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__4_TftpConfig_42, mod_consts[88], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[42];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_config$$36$$$36$$$36$class__4_TftpConfig_42;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 42;
            tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 42;

                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_19 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__4_TftpConfig_42);
        locals_config$$36$$$36$$$36$class__4_TftpConfig_42 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_lineno_10 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_10 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__4_TftpConfig_42);
        locals_config$$36$$$36$$$36$class__4_TftpConfig_42 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_lineno_11 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_11 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 42;
        goto try_except_handler_10;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_19);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_lineno_12 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_12 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[89];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[90];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[91];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53, mod_consts[92], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[93];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53, mod_consts[94], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_6 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[90];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_5__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 53;
            tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 53;

                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_23 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53);
        locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_lineno_13 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_13 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53);
        locals_config$$36$$$36$$$36$class__5_FirmwareVersionConfig_53 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_lineno_14 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_14 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 53;
        goto try_except_handler_13;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_23);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_lineno_15 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_15 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_config$$36$$$36$$$36$class__6_LoggerConfig_60 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[95];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[22];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[96];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60, mod_consts[23], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[97];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60, mod_consts[98], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[99];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60, mod_consts[100], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[22];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_config$$36$$$36$$$36$class__6_LoggerConfig_60;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_6__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 60;
            tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 60;

                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_28;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_27 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60);
        locals_config$$36$$$36$$$36$class__6_LoggerConfig_60 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_lineno_16 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_16 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__6_LoggerConfig_60);
        locals_config$$36$$$36$$$36$class__6_LoggerConfig_60 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_lineno_17 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_17 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 60;
        goto try_except_handler_16;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_27);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_lineno_18 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_18 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_config$$36$$$36$$$36$class__7_NetworkConfig_69 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[101];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[102];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[103];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69, mod_consts[104], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[105];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69, mod_consts[106], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[107];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69, mod_consts[108], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_8 = (PyObject *)&PyType_Type;
            tmp_tuple_element_7 = mod_consts[102];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_config$$36$$$36$$$36$class__7_NetworkConfig_69;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_7__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 69;
            tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 69;

                goto try_except_handler_21;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_31 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69);
        locals_config$$36$$$36$$$36$class__7_NetworkConfig_69 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_lineno_19 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_19 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__7_NetworkConfig_69);
        locals_config$$36$$$36$$$36$class__7_NetworkConfig_69 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_lineno_20 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_20 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 69;
        goto try_except_handler_19;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_31);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_lineno_21 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_21 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[109];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[110];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[2];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78, mod_consts[111], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[112];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78, mod_consts[113], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_8;
            tmp_called_value_9 = (PyObject *)&PyType_Type;
            tmp_tuple_element_8 = mod_consts[110];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_8__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 78;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 78;

                goto try_except_handler_24;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_35 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78);
        locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_lineno_22 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_22 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78);
        locals_config$$36$$$36$$$36$class__8_FileSizeConfig_78 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_lineno_23 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_23 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 78;
        goto try_except_handler_22;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_35);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_lineno_24 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_24 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_config$$36$$$36$$$36$class__9_StatusMarkers_85 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[114];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[49], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[115];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[63];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[116], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[117];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[118], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[65];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[119], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[120];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[121], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[88];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[122], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[123];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85, mod_consts[124], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_9 = mod_consts[115];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_config$$36$$$36$$$36$class__9_StatusMarkers_85;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_9__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 85;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 85;

                goto try_except_handler_27;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_assign_source_39 = outline_8_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85);
        locals_config$$36$$$36$$$36$class__9_StatusMarkers_85 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_lineno_25 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_25 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__9_StatusMarkers_85);
        locals_config$$36$$$36$$$36$class__9_StatusMarkers_85 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_lineno_26 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_26 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 85;
        goto try_except_handler_25;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_39);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_lineno_27 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_27 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_42;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[125];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(tstate, mod_consts[126]);


            tmp_dictset_value = MAKE_FUNCTION_config$$36$$$36$$$36$function__2___init__(tstate, tmp_annotations_2);

            tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103, mod_consts[127], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }


        tmp_dictset_value = MAKE_FUNCTION_config$$36$$$36$$$36$function__3___str__(tstate);

        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103, mod_consts[129], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_10;
            tmp_called_value_11 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[125];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_10__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 103;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 103;

                goto try_except_handler_30;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_43 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_43);
        goto try_return_handler_30;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103);
        locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103 = NULL;
        goto try_return_handler_29;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_lineno_28 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_28 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103);
        locals_config$$36$$$36$$$36$class__10_FrequencyPlan_103 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_28;
        exception_lineno = exception_keeper_lineno_28;

        goto try_except_handler_29;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_lineno_29 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_29 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_29;
        exception_lineno = exception_keeper_lineno_29;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 103;
        goto try_except_handler_28;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_43);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_lineno_30 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_30 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        tmp_dictset_value = mod_consts[55];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[131];
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3 = MAKE_CLASS_FRAME(tstate, code_objects_7b78cdbdcd2046dbb438355e4fddee53, module_config, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3);
        assert(Py_REFCNT(frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_value_12;
            tmp_dict_key_1 = const_int_pos_1;
            tmp_called_value_12 = module_var_accessor_config$FrequencyPlan(tstate);
            assert(!(tmp_called_value_12 == NULL));
            frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3->m_frame.f_lineno = 119;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[132], 0), mod_consts[133]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_called_value_13;
                PyObject *tmp_called_value_14;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[134];
                tmp_called_value_13 = module_var_accessor_config$FrequencyPlan(tstate);
                if (unlikely(tmp_called_value_13 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[125]);
                }

                if (tmp_called_value_13 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 126;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3->m_frame.f_lineno = 126;
                tmp_dict_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[135], 0), mod_consts[133]);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 126;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[136];
                tmp_called_value_14 = module_var_accessor_config$FrequencyPlan(tstate);
                if (unlikely(tmp_called_value_14 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[125]);
                }

                if (tmp_called_value_14 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3->m_frame.f_lineno = 133;
                tmp_dict_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[137], 0), mod_consts[133]);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = const_int_pos_1;
        tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116, mod_consts[17], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_classmethod_arg_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[3];
            tmp_dict_value_2 = (PyObject *)&PyLong_Type;
            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[138];
            tmp_dict_value_2 = module_var_accessor_config$FrequencyPlan(tstate);
            if (unlikely(tmp_dict_value_2 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[125]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 146;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_config$$36$$$36$$$36$function__4_get_plan(tstate, tmp_annotations_3);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116, mod_consts[139], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_frame_config$$36$$$36$$$36$class__11_FrequencyConfig_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_33;
        skip_nested_handling_2:;
        {
            PyObject *tmp_classmethod_arg_3;
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(tstate, mod_consts[141]);


            tmp_classmethod_arg_3 = MAKE_FUNCTION_config$$36$$$36$$$36$function__5_get_all_plans(tstate, tmp_annotations_4);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_classmethod_arg_4;
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(tstate, mod_consts[141]);


            tmp_classmethod_arg_4 = MAKE_FUNCTION_config$$36$$$36$$$36$function__6_plan_names(tstate, tmp_annotations_5);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_11;
            tmp_called_value_15 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[131];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_11__class_decl_dict;
            frame_frame_config->m_frame.f_lineno = 116;
            tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 116;

                goto try_except_handler_33;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_assign_source_47 = outline_10_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116);
        locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_lineno_31 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_31 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116);
        locals_config$$36$$$36$$$36$class__11_FrequencyConfig_116 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_31;
        exception_lineno = exception_keeper_lineno_31;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_lineno_32 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_32 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_32;
        exception_lineno = exception_keeper_lineno_32;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 116;
        goto try_except_handler_31;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_47);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_lineno_33 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_33 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_config, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_config->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_config, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_config);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_config$$36$$$36$$$36$function__7_ensure_directories_exist(tstate);

        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_config$$36$$$36$$$36$function__8_validate_config(tstate);

        UPDATE_STRING_DICT1(moduledict_config, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_50);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("config", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "config" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_config);
    return module_config;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_config, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("config", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
