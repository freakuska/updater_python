/* Generated code for Python module 'services$firmware_updater'
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

/* The "module_services$firmware_updater" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_services$firmware_updater;
PyDictObject *moduledict_services$firmware_updater;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[317];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[317];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("services.firmware_updater"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 317; i++) {
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
void checkModuleConstants_services$firmware_updater(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 317; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_services$$36$firmware_updater$BkrConnector(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[0]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[0]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[0]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[0], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[0]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[0]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[0]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$Callable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[208]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[208]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[208], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[208]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[208], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[208]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[208]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[208]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$FirmwareVersionConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[183]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[183]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[183], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[183]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[183], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[183]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[183]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[183]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$FlashConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[88]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[88]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[88], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[88]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[88], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[88]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[88]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[88]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$LsrCommands(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[17]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[17]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[17]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[17], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[17]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[17]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[17]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$LsrInfo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[214]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[214]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[214], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[214]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[214], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[214]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[214]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[214]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$Optional(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[209]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[209]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[209], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[209]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[209], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[209]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[209]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[209]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$Path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[160]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[160]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[160], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[160]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[160], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[160]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[160]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[160]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$TftpConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[78]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[78]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[78], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[78]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[78], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[78]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[78]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[78]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$TimeoutConfig(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[30]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[30]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[30], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[30]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[30], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[30]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[30]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[30]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$UpdService(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[267]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[267]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[267], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[267]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[267], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[267]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[267]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[267]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[316]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[316]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[316], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[316]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[316], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[316]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[316]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[316]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[23]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[23]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[23], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[23]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[23], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[23]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[23]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$datetime(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[64]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[64]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[64], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[64]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[64], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[64]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[64]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[64]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[4]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[4]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[4], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[4]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[4], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[4]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[4]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[4]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[264]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[264]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[264], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[264]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[264], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[264]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[264]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[264]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[68]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[68]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[68], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[68]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[68], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[68]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[68]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[68]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$setup_logger(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[222]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[222]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[222], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[222]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[222], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[222]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[222]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[222]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$subprocess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[101]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[101]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[101]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[101]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[101]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[101]);
    }

    return result;
}

static PyObject *module_var_accessor_services$$36$firmware_updater$zlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_services$firmware_updater->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_services$firmware_updater->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[123]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_services$firmware_updater->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[123]);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts[123]);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[123], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[123]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[123]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[123]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6a3c282d6791892e5cf1a921e3d2d30e;
static PyCodeObject *code_objects_4db4c07f0dcb55e4e756ac649d95172a;
static PyCodeObject *code_objects_d354f2ed354daa3086079726111fbfee;
static PyCodeObject *code_objects_023bae7b1afa34cc585cd6590798e628;
static PyCodeObject *code_objects_bdff56914055d54ad98e1e98d14ad9d9;
static PyCodeObject *code_objects_e00ed090aac4a1b65df1dd5e5dfb36c7;
static PyCodeObject *code_objects_8982af06a0d3bb7d41935c3945d14013;
static PyCodeObject *code_objects_c67626a1a735a1c3bda038f0227aa7ae;
static PyCodeObject *code_objects_7c5856d5b6d0d7f856174b34b48991b6;
static PyCodeObject *code_objects_28faf1bbcaebba543fb6482d8e2b8b6c;
static PyCodeObject *code_objects_81cfe06285c438ae10568c59ff4ad7df;
static PyCodeObject *code_objects_53e6fa8d2c75d6ff24d294cd49fb65b1;
static PyCodeObject *code_objects_e15128d07dc607dbf37dfca5ed1caad4;
static PyCodeObject *code_objects_32d2cd250126eec1e87c22671ec68b81;
static PyCodeObject *code_objects_2abd3951f4db12dc49ab82b9d990eab2;
static PyCodeObject *code_objects_30d271ef5a374e499a249c0d0317d86e;
static PyCodeObject *code_objects_3ce616f9405257aa8cae1db2cc420cbc;
static PyCodeObject *code_objects_76ac2422ec3b5fff2132878f70c40e11;
static PyCodeObject *code_objects_0728f4e40b205e7b5899c61a59b298ee;
static PyCodeObject *code_objects_9dc800b4839d0b912c2bbf59847f3501;
static PyCodeObject *code_objects_b43815c029ad20b944cc842f244c0a15;
static PyCodeObject *code_objects_abe9f698d55fc4b1d3f0294fbad08232;
static PyCodeObject *code_objects_978c202a1ca71212c64ad04c072efd7a;
static PyCodeObject *code_objects_5746d9335bc053e118885794a1c4c74f;
static PyCodeObject *code_objects_cd9e8fda394339d354dd4cf441b2c429;
static PyCodeObject *code_objects_2773fc7055112967754cc29909f140c0;
static PyCodeObject *code_objects_fcfa207c65040909a6cd70886475b843;
static PyCodeObject *code_objects_51374f9b6f339d594a42d4f15a7cd0e4;
static PyCodeObject *code_objects_b4d3822b050998141631490ebae474b8;
static PyCodeObject *code_objects_94a4a2b5dcd4094d691cbb8873d077b6;
static PyCodeObject *code_objects_f16e06ecaff5554198d5f72e3107a01a;
static PyCodeObject *code_objects_3b98e85a8964d1a4e1e81ccea6338394;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[292]); CHECK_OBJECT(module_filename_obj);
    code_objects_6a3c282d6791892e5cf1a921e3d2d30e = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[55], mod_consts[293], NULL, 1, 0, 0);
    code_objects_4db4c07f0dcb55e4e756ac649d95172a = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[120], mod_consts[121], mod_consts[294], mod_consts[294], 0, 0, 0);
    code_objects_d354f2ed354daa3086079726111fbfee = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[295], mod_consts[295], NULL, NULL, 0, 0, 0);
    code_objects_023bae7b1afa34cc585cd6590798e628 = MAKE_CODE_OBJECT(module_filename_obj, 26, 0, mod_consts[231], mod_consts[231], mod_consts[296], NULL, 0, 0, 0);
    code_objects_bdff56914055d54ad98e1e98d14ad9d9 = MAKE_CODE_OBJECT(module_filename_obj, 454, 0, mod_consts[270], mod_consts[270], mod_consts[296], NULL, 0, 0, 0);
    code_objects_e00ed090aac4a1b65df1dd5e5dfb36c7 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[235], mod_consts[236], mod_consts[297], NULL, 3, 0, 0);
    code_objects_8982af06a0d3bb7d41935c3945d14013 = MAKE_CODE_OBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[235], mod_consts[272], mod_consts[298], NULL, 2, 0, 0);
    code_objects_c67626a1a735a1c3bda038f0227aa7ae = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[261], mod_consts[299], NULL, 2, 0, 0);
    code_objects_7c5856d5b6d0d7f856174b34b48991b6 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[75], mod_consts[255], mod_consts[300], NULL, 2, 0, 0);
    code_objects_28faf1bbcaebba543fb6482d8e2b8b6c = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[248], mod_consts[301], NULL, 2, 0, 0);
    code_objects_81cfe06285c438ae10568c59ff4ad7df = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[241], mod_consts[302], NULL, 2, 0, 0);
    code_objects_53e6fa8d2c75d6ff24d294cd49fb65b1 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[246], mod_consts[303], NULL, 2, 0, 0);
    code_objects_e15128d07dc607dbf37dfca5ed1caad4 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[250], mod_consts[304], NULL, 2, 0, 0);
    code_objects_32d2cd250126eec1e87c22671ec68b81 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[257], mod_consts[258], mod_consts[305], NULL, 3, 0, 0);
    code_objects_2abd3951f4db12dc49ab82b9d990eab2 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[164], mod_consts[253], mod_consts[306], NULL, 3, 0, 0);
    code_objects_30d271ef5a374e499a249c0d0317d86e = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[187], mod_consts[188], mod_consts[307], NULL, 2, 0, 0);
    code_objects_3ce616f9405257aa8cae1db2cc420cbc = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[276], mod_consts[277], mod_consts[308], NULL, 2, 0, 0);
    code_objects_76ac2422ec3b5fff2132878f70c40e11 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[9], mod_consts[309], NULL, 1, 0, 0);
    code_objects_0728f4e40b205e7b5899c61a59b298ee = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[282], mod_consts[283], mod_consts[308], NULL, 2, 0, 0);
    code_objects_9dc800b4839d0b912c2bbf59847f3501 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[145], mod_consts[310], NULL, 2, 0, 0);
    code_objects_b43815c029ad20b944cc842f244c0a15 = MAKE_CODE_OBJECT(module_filename_obj, 462, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[274], mod_consts[275], mod_consts[308], NULL, 2, 0, 0);
    code_objects_abe9f698d55fc4b1d3f0294fbad08232 = MAKE_CODE_OBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[284], mod_consts[285], mod_consts[308], NULL, 2, 0, 0);
    code_objects_978c202a1ca71212c64ad04c072efd7a = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[47], mod_consts[311], NULL, 2, 0, 0);
    code_objects_5746d9335bc053e118885794a1c4c74f = MAKE_CODE_OBJECT(module_filename_obj, 486, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[280], mod_consts[281], mod_consts[308], NULL, 2, 0, 0);
    code_objects_cd9e8fda394339d354dd4cf441b2c429 = MAKE_CODE_OBJECT(module_filename_obj, 517, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[288], mod_consts[289], mod_consts[308], NULL, 2, 0, 0);
    code_objects_2773fc7055112967754cc29909f140c0 = MAKE_CODE_OBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[290], mod_consts[291], mod_consts[308], NULL, 2, 0, 0);
    code_objects_fcfa207c65040909a6cd70886475b843 = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[286], mod_consts[287], mod_consts[308], NULL, 2, 0, 0);
    code_objects_51374f9b6f339d594a42d4f15a7cd0e4 = MAKE_CODE_OBJECT(module_filename_obj, 479, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[278], mod_consts[279], mod_consts[308], NULL, 2, 0, 0);
    code_objects_b4d3822b050998141631490ebae474b8 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[3], mod_consts[239], mod_consts[312], NULL, 2, 0, 0);
    code_objects_94a4a2b5dcd4094d691cbb8873d077b6 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[178], mod_consts[179], mod_consts[313], NULL, 3, 0, 0);
    code_objects_f16e06ecaff5554198d5f72e3107a01a = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[116], mod_consts[314], NULL, 3, 0, 0);
    code_objects_3b98e85a8964d1a4e1e81ccea6338394 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[134], mod_consts[135], mod_consts[315], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__18___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__19_get_ip(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__22_reset(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__3__log(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bkr_ip = python_pars[1];
    PyObject *par_bkr_port = python_pars[2];
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e00ed090aac4a1b65df1dd5e5dfb36c7, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__ = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = module_var_accessor_services$$36$firmware_updater$BkrConnector(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bkr_ip);
        tmp_args_element_value_1 = par_bkr_ip;
        CHECK_OBJECT(par_bkr_port);
        tmp_args_element_value_2 = par_bkr_port;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 33;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 34;
            type_description_1 = "ooo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__,
        type_description_1,
        par_self,
        par_bkr_ip,
        par_bkr_port
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__ == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__ = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__1___init__);

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
    CHECK_OBJECT(par_bkr_ip);
    Py_DECREF(par_bkr_ip);
    CHECK_OBJECT(par_bkr_port);
    Py_DECREF(par_bkr_port);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bkr_ip);
    Py_DECREF(par_bkr_ip);
    CHECK_OBJECT(par_bkr_port);
    Py_DECREF(par_bkr_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_callback = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_b4d3822b050998141631490ebae474b8, module_services$firmware_updater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_callback);
        tmp_assattr_value_1 = par_callback;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_callback);
        tmp_args_element_value_1 = par_callback;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback,
        type_description_1,
        par_self,
        par_callback
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback);

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
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__3__log(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log = MAKE_FUNCTION_FRAME(tstate, code_objects_81cfe06285c438ae10568c59ff4ad7df, module_services$firmware_updater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = module_var_accessor_services$$36$firmware_updater$logger(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_args_element_value_1 = par_message;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log->m_frame.f_lineno = 47;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[5], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 48;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_message);
        tmp_args_element_value_2 = par_message;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log->m_frame.f_lineno = 49;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[2], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 49;
            type_description_1 = "oo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log,
        type_description_1,
        par_self,
        par_message
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__3__log);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr_locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    char yield_tmps[1024];
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr_locals *coroutine_heap = (struct services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_76ac2422ec3b5fff2132878f70c40e11, module_services$firmware_updater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        coroutine->m_frame->m_frame.f_lineno = 55;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 55;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yield_from = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 55;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        goto frame_return_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);


    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr_context,
        module_services$firmware_updater,
        mod_consts[8],
        mod_consts[9],
        code_objects_76ac2422ec3b5fff2132878f70c40e11,
        closure,
        1,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr$$36$$$36$$$36$coroutine__1_connect_to_bkr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_lsr_id = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_lsr_id;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update_locals {
    PyObject *var_command;
    PyObject *var_success;
    PyObject *var_response;
    PyObject *var_lsr_ip;
    PyObject *var_wwdg_enabled;
    PyObject *var_e;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
    PyObject *tmp_tuple_unpack_3__element_1;
    PyObject *tmp_tuple_unpack_3__element_2;
    PyObject *tmp_tuple_unpack_3__source_iter;
    PyObject *tmp_tuple_unpack_4__element_1;
    PyObject *tmp_tuple_unpack_4__element_2;
    PyObject *tmp_tuple_unpack_4__source_iter;
    PyObject *tmp_tuple_unpack_5__element_1;
    PyObject *tmp_tuple_unpack_5__element_2;
    PyObject *tmp_tuple_unpack_5__source_iter;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    char yield_tmps[1024];
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_return_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    int exception_keeper_lineno_8;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
    int exception_keeper_lineno_9;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
    int exception_keeper_lineno_10;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
    int exception_keeper_lineno_11;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
    int exception_keeper_lineno_12;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
    int exception_keeper_lineno_13;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
    int exception_keeper_lineno_14;
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update_locals *coroutine_heap = (struct services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 8: goto yield_return_8;
    case 7: goto yield_return_7;
    case 6: goto yield_return_6;
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_command = NULL;
    coroutine_heap->var_success = NULL;
    coroutine_heap->var_response = NULL;
    coroutine_heap->var_lsr_ip = NULL;
    coroutine_heap->var_wwdg_enabled = NULL;
    coroutine_heap->var_e = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_4__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_4__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_4__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_5__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_5__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_5__source_iter = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_978c202a1ca71212c64ad04c072efd7a, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 61;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 61;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 61;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 62;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 62;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[12];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 62;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 62;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 62;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 62;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 62;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 63;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 63;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 63;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 68;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 68;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 68;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = module_var_accessor_services$$36$firmware_updater$LsrCommands(tstate);
        if (unlikely(tmp_expression_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[17]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 69;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 69;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 69;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[19]);
        coroutine->m_frame->m_frame.f_lineno = 69;
        tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 69;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_command == NULL);
        coroutine_heap->var_command = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        coroutine->m_frame->m_frame.f_lineno = 70;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[1]);
        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(coroutine_heap->var_command);
        tmp_args_element_value_2 = coroutine_heap->var_command;
        coroutine->m_frame->m_frame.f_lineno = 70;
        tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[20], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yield_from = tmp_expression_value_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_3;
        }
        tmp_iter_arg_1 = yield_return_value;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 70;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = coroutine_heap->tmp_tuple_unpack_1__element_1;
        assert(coroutine_heap->var_success == NULL);
        Py_INCREF(tmp_assign_source_5);
        coroutine_heap->var_success = tmp_assign_source_5;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        assert(coroutine_heap->var_response == NULL);
        Py_INCREF(tmp_assign_source_6);
        coroutine_heap->var_response = tmp_assign_source_6;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(coroutine_heap->var_success);
        tmp_operand_value_1 = coroutine_heap->var_success;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 71;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 72;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 72;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 72;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    coroutine_heap->tmp_return_value = mod_consts[22];
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 76;
        tmp_called_instance_6 = module_var_accessor_services$$36$firmware_updater$asyncio(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[23]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 76;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 76;
        tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 76;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 76;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yield_from = tmp_expression_value_6;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 76;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 80;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 80;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_3 = mod_consts[26];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 80;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_2;
            }

            tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_spec_2 = mod_consts[14];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 80;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[27];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 80;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 80;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 80;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_9 = module_var_accessor_services$$36$firmware_updater$LsrCommands(tstate);
        if (unlikely(tmp_expression_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[17]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[28]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 81;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_command;
            assert(old != NULL);
            coroutine_heap->var_command = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_5;
        coroutine->m_frame->m_frame.f_lineno = 82;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[1]);
        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(coroutine_heap->var_command);
        tmp_args_element_value_5 = coroutine_heap->var_command;
        coroutine->m_frame->m_frame.f_lineno = 82;
        tmp_expression_value_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[20], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_10 = ASYNC_AWAIT(tstate, tmp_expression_value_11, await_normal);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_5;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_8, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yield_from = tmp_expression_value_10;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_8, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_5;
        }
        tmp_iter_arg_2 = yield_return_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_5;
        }
        assert(coroutine_heap->tmp_tuple_unpack_2__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_6;
        }
        assert(coroutine_heap->tmp_tuple_unpack_2__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_6;
        }
        assert(coroutine_heap->tmp_tuple_unpack_2__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_2, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 82;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_11 = coroutine_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = coroutine_heap->var_success;
            assert(old != NULL);
            coroutine_heap->var_success = tmp_assign_source_11;
            Py_INCREF(coroutine_heap->var_success);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_12 = coroutine_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = coroutine_heap->var_response;
            assert(old != NULL);
            coroutine_heap->var_response = tmp_assign_source_12;
            Py_INCREF(coroutine_heap->var_response);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(coroutine_heap->var_success);
        tmp_operand_value_2 = coroutine_heap->var_success;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 83;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 84;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 84;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 84;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    coroutine_heap->tmp_return_value = mod_consts[22];
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 88;
        tmp_expression_value_15 = module_var_accessor_services$$36$firmware_updater$asyncio(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[23]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[24]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_16 = module_var_accessor_services$$36$firmware_updater$TimeoutConfig(tstate);
        if (unlikely(tmp_expression_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[30]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

            Py_DECREF(tmp_called_value_5);

            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[31]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_5);

            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 88;
        tmp_expression_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_13 = ASYNC_AWAIT(tstate, tmp_expression_value_14, await_normal);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yield_from = tmp_expression_value_13;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_await_result_2 = yield_return_value;
        Py_DECREF(tmp_await_result_2);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[10]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_4 = mod_consts[32];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 92;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_3;
            }

            tmp_format_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_spec_3 = mod_consts[14];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 92;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[27];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_7 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_6);

            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 92;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 92;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_18 = module_var_accessor_services$$36$firmware_updater$LsrCommands(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[17]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 93;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[33]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 93;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 93;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 93;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 93;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_command;
            assert(old != NULL);
            coroutine_heap->var_command = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_9;
        coroutine->m_frame->m_frame.f_lineno = 94;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[1]);
        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(coroutine_heap->var_command);
        tmp_args_element_value_9 = coroutine_heap->var_command;
        coroutine->m_frame->m_frame.f_lineno = 94;
        tmp_expression_value_20 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[20], tmp_args_element_value_9);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_19 = ASYNC_AWAIT(tstate, tmp_expression_value_20, await_normal);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_7;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_14, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_instance_9, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 5;
        coroutine->m_yield_from = tmp_expression_value_19;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_5:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_14, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_instance_9, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_7;
        }
        tmp_iter_arg_3 = yield_return_value;
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_7;
        }
        assert(coroutine_heap->tmp_tuple_unpack_3__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_tuple_unpack_3__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_8;
        }
        assert(coroutine_heap->tmp_tuple_unpack_3__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = coroutine_heap->tmp_tuple_unpack_3__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_3, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_3__source_iter);
    coroutine_heap->tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_1);
        tmp_assign_source_17 = coroutine_heap->tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = coroutine_heap->var_success;
            assert(old != NULL);
            coroutine_heap->var_success = tmp_assign_source_17;
            Py_INCREF(coroutine_heap->var_success);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_1);
    coroutine_heap->tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_3__element_2);
        tmp_assign_source_18 = coroutine_heap->tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = coroutine_heap->var_response;
            assert(old != NULL);
            coroutine_heap->var_response = tmp_assign_source_18;
            Py_INCREF(coroutine_heap->var_response);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_3__element_2);
    coroutine_heap->tmp_tuple_unpack_3__element_2 = NULL;

    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        CHECK_OBJECT(coroutine_heap->var_success);
        tmp_operand_value_3 = coroutine_heap->var_success;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 95;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_9;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 96;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_10 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 96;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 96;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    coroutine_heap->tmp_return_value = mod_consts[22];
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_10;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_11 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_args_element_value_10 = coroutine_heap->var_response;
        coroutine->m_frame->m_frame.f_lineno = 100;
        tmp_assign_source_19 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts[35], tmp_args_element_value_10);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_lsr_ip == NULL);
        coroutine_heap->var_lsr_ip = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(coroutine_heap->var_lsr_ip);
        tmp_operand_value_4 = coroutine_heap->var_lsr_ip;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 101;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_10;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_12 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 102;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_12,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
    }
    coroutine_heap->tmp_return_value = mod_consts[22];
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_22 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[10]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_5 = mod_consts[37];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(coroutine_heap->var_lsr_ip);
            tmp_format_value_4 = coroutine_heap->var_lsr_ip;
            tmp_format_spec_4 = mod_consts[14];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 106;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_11 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_8);

            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 106;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_12;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 110;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_13 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 110;
        tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_13,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 110;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_23 = module_var_accessor_services$$36$firmware_updater$LsrCommands(tstate);
        if (unlikely(tmp_expression_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[17]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 111;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[39]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 111;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 111;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 111;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 111;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_command;
            assert(old != NULL);
            coroutine_heap->var_command = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_13;
        coroutine->m_frame->m_frame.f_lineno = 112;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_26 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[1]);
        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(coroutine_heap->var_command);
        tmp_args_element_value_13 = coroutine_heap->var_command;
        coroutine->m_frame->m_frame.f_lineno = 112;
        tmp_expression_value_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts[20], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_14);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_9;
        }
        tmp_expression_value_24 = ASYNC_AWAIT(tstate, tmp_expression_value_25, await_normal);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_9;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_21, sizeof(PyObject *), &tmp_expression_value_25, sizeof(PyObject *), &tmp_called_instance_14, sizeof(PyObject *), &tmp_expression_value_26, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 6;
        coroutine->m_yield_from = tmp_expression_value_24;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_6:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_21, sizeof(PyObject *), &tmp_expression_value_25, sizeof(PyObject *), &tmp_called_instance_14, sizeof(PyObject *), &tmp_expression_value_26, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_9;
        }
        tmp_iter_arg_4 = yield_return_value;
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_9;
        }
        assert(coroutine_heap->tmp_tuple_unpack_4__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_4__source_iter = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = coroutine_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_10;
        }
        assert(coroutine_heap->tmp_tuple_unpack_4__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_4__element_1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = coroutine_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_10;
        }
        assert(coroutine_heap->tmp_tuple_unpack_4__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_4__element_2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = coroutine_heap->tmp_tuple_unpack_4__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_4, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    coroutine_heap->tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_1);
    coroutine_heap->tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_2);
    coroutine_heap->tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_4__source_iter);
    coroutine_heap->tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__element_1);
        tmp_assign_source_24 = coroutine_heap->tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = coroutine_heap->var_success;
            assert(old != NULL);
            coroutine_heap->var_success = tmp_assign_source_24;
            Py_INCREF(coroutine_heap->var_success);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_1);
    coroutine_heap->tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_4__element_2);
        tmp_assign_source_25 = coroutine_heap->tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = coroutine_heap->var_response;
            assert(old != NULL);
            coroutine_heap->var_response = tmp_assign_source_25;
            Py_INCREF(coroutine_heap->var_response);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_4__element_2);
    coroutine_heap->tmp_tuple_unpack_4__element_2 = NULL;

    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_5;
        CHECK_OBJECT(coroutine_heap->var_success);
        tmp_operand_value_5 = coroutine_heap->var_success;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 113;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_13;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_15 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 114;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_15,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_13);
    }
    coroutine_heap->tmp_return_value = mod_consts[22];
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_14;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_16 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        CHECK_OBJECT(coroutine_heap->var_response);
        tmp_args_element_value_14 = coroutine_heap->var_response;
        coroutine->m_frame->m_frame.f_lineno = 118;
        tmp_assign_source_26 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts[41], tmp_args_element_value_14);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 118;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_wwdg_enabled == NULL);
        coroutine_heap->var_wwdg_enabled = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(coroutine_heap->var_wwdg_enabled);
        tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_wwdg_enabled);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 121;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_14;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_17 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 122;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_17,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_27 = module_var_accessor_services$$36$firmware_updater$LsrCommands(tstate);
        if (unlikely(tmp_expression_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[17]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[43]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 123;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_command;
            assert(old != NULL);
            coroutine_heap->var_command = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_16;
        coroutine->m_frame->m_frame.f_lineno = 124;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_30 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[1]);
        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(coroutine_heap->var_command);
        tmp_args_element_value_16 = coroutine_heap->var_command;
        coroutine->m_frame->m_frame.f_lineno = 124;
        tmp_expression_value_29 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_18, mod_consts[20], tmp_args_element_value_16);
        Py_DECREF(tmp_called_instance_18);
        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_11;
        }
        tmp_expression_value_28 = ASYNC_AWAIT(tstate, tmp_expression_value_29, await_normal);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_11;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_28, sizeof(PyObject *), &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_instance_18, sizeof(PyObject *), &tmp_expression_value_30, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 7;
        coroutine->m_yield_from = tmp_expression_value_28;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_7:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_28, sizeof(PyObject *), &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_instance_18, sizeof(PyObject *), &tmp_expression_value_30, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_11;
        }
        tmp_iter_arg_5 = yield_return_value;
        tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_11;
        }
        assert(coroutine_heap->tmp_tuple_unpack_5__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_5__source_iter = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = coroutine_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_12;
        }
        assert(coroutine_heap->tmp_tuple_unpack_5__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_5__element_1 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = coroutine_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_12;
        }
        assert(coroutine_heap->tmp_tuple_unpack_5__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_5__element_2 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = coroutine_heap->tmp_tuple_unpack_5__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_5, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_12;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_5__source_iter);
    coroutine_heap->tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_9;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

    goto try_except_handler_11;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_10 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_5__element_1);
    coroutine_heap->tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_5__element_2);
    coroutine_heap->tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_10;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

    goto try_except_handler_2;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_5__source_iter);
    coroutine_heap->tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_5__element_1);
        tmp_assign_source_31 = coroutine_heap->tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = coroutine_heap->var_success;
            assert(old != NULL);
            coroutine_heap->var_success = tmp_assign_source_31;
            Py_INCREF(coroutine_heap->var_success);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_5__element_1);
    coroutine_heap->tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_5__element_2);
        tmp_assign_source_32 = coroutine_heap->tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = coroutine_heap->var_response;
            assert(old != NULL);
            coroutine_heap->var_response = tmp_assign_source_32;
            Py_INCREF(coroutine_heap->var_response);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_5__element_2);
    coroutine_heap->tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_await_result_3;
        coroutine->m_frame->m_frame.f_lineno = 125;
        tmp_called_instance_19 = module_var_accessor_services$$36$firmware_updater$asyncio(tstate);
        if (unlikely(tmp_called_instance_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[23]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 125;
        tmp_expression_value_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_19,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_31 = ASYNC_AWAIT(tstate, tmp_expression_value_32, await_normal);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_instance_19, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 8;
        coroutine->m_yield_from = tmp_expression_value_31;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_8:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_instance_19, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 125;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        tmp_await_result_3 = yield_return_value;
        Py_DECREF(tmp_await_result_3);
    }
    branch_no_6:;
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_15;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 128;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_20 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 128;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_20,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 128;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_15);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_11 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_11);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_11);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_11, exception_tb);
        } else if (coroutine_heap->exception_keeper_lineno_11 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_11);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_11, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_11);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_7 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_33); 
        assert(coroutine_heap->var_e == NULL);
        Py_INCREF(tmp_assign_source_33);
        coroutine_heap->var_e = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 133;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_14;
        }

        tmp_expression_value_33 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[10]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 133;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_14;
        }
        tmp_tuple_element_6 = mod_consts[45];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_6);
            CHECK_OBJECT(coroutine_heap->var_e);
            tmp_unicode_arg_1 = coroutine_heap->var_e;
            tmp_format_value_5 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 133;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_5 = mod_consts[14];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 133;
                coroutine_heap->type_description_1 = "ccoooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_17 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_11);

            coroutine_heap->exception_lineno = 133;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_14;
        }
        coroutine->m_frame->m_frame.f_lineno = 133;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 133;
            coroutine_heap->type_description_1 = "ccoooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_16);
    }
    coroutine_heap->tmp_return_value = mod_consts[22];
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_14;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_14:;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    goto try_return_handler_13;
    // Exception handler code:
    try_except_handler_14:;
    coroutine_heap->exception_keeper_lineno_12 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_12 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_12;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    goto branch_end_7;
    branch_no_7:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 66;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
            coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    coroutine_heap->type_description_1 = "ccoooooo";
    goto try_except_handler_13;
    branch_end_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_13:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_13:;
    coroutine_heap->exception_keeper_lineno_13 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_13 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_13;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_11:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine_heap->var_command,
            coroutine_heap->var_success,
            coroutine_heap->var_response,
            coroutine_heap->var_lsr_ip,
            coroutine_heap->var_wwdg_enabled,
            coroutine_heap->var_e
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = Py_True;
        coroutine_heap->tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 0, tmp_tuple_element_7);
        CHECK_OBJECT(coroutine_heap->var_lsr_ip);
        tmp_tuple_element_7 = coroutine_heap->var_lsr_ip;
        PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 1, tmp_tuple_element_7);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_command);
    coroutine_heap->var_command = NULL;
    Py_XDECREF(coroutine_heap->var_success);
    coroutine_heap->var_success = NULL;
    Py_XDECREF(coroutine_heap->var_response);
    coroutine_heap->var_response = NULL;
    Py_XDECREF(coroutine_heap->var_lsr_ip);
    coroutine_heap->var_lsr_ip = NULL;
    Py_XDECREF(coroutine_heap->var_wwdg_enabled);
    coroutine_heap->var_wwdg_enabled = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_lineno_14 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_14 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_command);
    coroutine_heap->var_command = NULL;
    Py_XDECREF(coroutine_heap->var_success);
    coroutine_heap->var_success = NULL;
    Py_XDECREF(coroutine_heap->var_response);
    coroutine_heap->var_response = NULL;
    Py_XDECREF(coroutine_heap->var_lsr_ip);
    coroutine_heap->var_lsr_ip = NULL;
    Py_XDECREF(coroutine_heap->var_wwdg_enabled);
    coroutine_heap->var_wwdg_enabled = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_14;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update_context,
        module_services$firmware_updater,
        mod_consts[46],
        mod_consts[47],
        code_objects_978c202a1ca71212c64ad04c072efd7a,
        closure,
        2,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update$$36$$$36$$$36$coroutine__1_prepare_lsr_for_update_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    PyObject *var_line = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_part = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip = MAKE_FUNCTION_FRAME(tstate, code_objects_53e6fa8d2c75d6ff24d294cd49fb65b1, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_response);
        tmp_expression_value_1 = par_response;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip->m_frame.f_lineno = 140;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[49]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooo";
                exception_lineno = 140;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_3;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_line);
        tmp_expression_value_2 = var_line;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[50]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip->m_frame.f_lineno = 141;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_line;
            assert(old != NULL);
            var_line = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_line);
        tmp_operand_value_1 = var_line;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_line);
        tmp_expression_value_3 = var_line;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[48]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip->m_frame.f_lineno = 146;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_parts;
            var_parts = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_parts);
        tmp_iter_arg_2 = var_parts;
        tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "ooooo";
                exception_lineno = 147;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_8 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_part;
            var_part = tmp_assign_source_8;
            Py_INCREF(var_part);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(var_part);
        tmp_args_element_value_1 = var_part;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip->m_frame.f_lineno = 150;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[51], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(var_part);
    tmp_return_value = var_part;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 147;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT(tmp_for_loop_2__iter_value);
    Py_DECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 140;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip,
        type_description_1,
        par_self,
        par_response,
        var_line,
        var_parts,
        var_part
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_part);
    var_part = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_parts);
    var_parts = NULL;
    Py_XDECREF(var_part);
    var_part = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ip = python_pars[1];
    PyObject *var_parts = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip = MAKE_FUNCTION_FRAME(tstate, code_objects_28faf1bbcaebba543fb6482d8e2b8b6c, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_ip);
        tmp_expression_value_1 = par_ip;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[48]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip->m_frame.f_lineno = 160;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[52]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_parts);
        tmp_len_arg_1 = var_parts;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 4;
        tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_all_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_parts);
            tmp_iter_arg_1 = var_parts;
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 164;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr(tstate, tmp_closure_1);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_ALL(tstate, tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 164;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // End of try:
    // End of try:


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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip,
        type_description_1,
        par_self,
        par_ip,
        var_parts
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parts);
    Py_DECREF(var_parts);
    var_parts = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_parts);
    var_parts = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ip);
    Py_DECREF(par_ip);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ip);
    Py_DECREF(par_ip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr_locals {
    PyObject *var_part;
    PyObject *tmp_comparison_chain_1__comparison_result;
    PyObject *tmp_comparison_chain_1__operand_2;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    int exception_keeper_lineno_3;
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr_locals *generator_heap = (struct services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_part = NULL;
    generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
    generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6a3c282d6791892e5cf1a921e3d2d30e, module_services$firmware_updater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 164;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_part;
            generator_heap->var_part = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_part);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT(generator_heap->var_part);
            tmp_int_arg_1 = generator_heap->var_part;
            tmp_assign_source_3 = PyNumber_Int(tmp_int_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


                generator_heap->exception_lineno = 164;
                generator_heap->type_description_1 = "No";
                goto try_except_handler_3;
            }
            {
                PyObject *old = generator_heap->tmp_comparison_chain_1__operand_2;
                generator_heap->tmp_comparison_chain_1__operand_2 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            tmp_cmp_expr_left_1 = const_int_0;
            CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_1 = generator_heap->tmp_comparison_chain_1__operand_2;
            tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_assign_source_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


                generator_heap->exception_lineno = 164;
                generator_heap->type_description_1 = "No";
                goto try_except_handler_3;
            }
            {
                PyObject *old = generator_heap->tmp_comparison_chain_1__comparison_result;
                generator_heap->tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_1;
            PyObject *tmp_operand_value_1;
            CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
            generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (generator_heap->tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


                generator_heap->exception_lineno = 164;
                generator_heap->type_description_1 = "No";
                goto try_except_handler_3;
            }
            tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
        tmp_expression_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_expression_value_1);
        goto try_return_handler_3;
        branch_no_1:;
        {
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_2 = generator_heap->tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_2 = mod_consts[53];
            tmp_expression_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


                generator_heap->exception_lineno = 164;
                generator_heap->type_description_1 = "No";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
        Py_DECREF(generator_heap->tmp_comparison_chain_1__operand_2);
        generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
        Py_DECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
        generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_lineno = 0;
        generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
        INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

        Py_XDECREF(generator_heap->tmp_comparison_chain_1__operand_2);
        generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
        generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        generator_heap->exception_state = generator_heap->exception_keeper_name_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


        generator_heap->exception_lineno = 164;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_part
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_lineno = 0;
    generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

    Py_XDECREF(generator_heap->var_part);
    generator_heap->var_part = NULL;
    // Re-raise.
    generator_heap->exception_state = generator_heap->exception_keeper_name_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_part);
    generator_heap->var_part = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr_context,
        module_services$firmware_updater,
        mod_consts[54],
#if PYTHON_VERSION >= 0x350
        mod_consts[55],
#endif
        code_objects_6a3c282d6791892e5cf1a921e3d2d30e,
        closure,
        1,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip$$36$$$36$$$36$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status = MAKE_FUNCTION_FRAME(tstate, code_objects_e15128d07dc607dbf37dfca5ed1caad4, module_services$firmware_updater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[56];
        CHECK_OBJECT(par_response);
        tmp_cmp_expr_right_1 = par_response;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status,
        type_description_1,
        par_self,
        par_response
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status);

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
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_firmware_path = python_pars[1];
    PyObject *par_device_type = python_pars[2];
    PyObject *var_filename = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type = MAKE_FUNCTION_FRAME(tstate, code_objects_2abd3951f4db12dc49ab82b9d990eab2, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_path_arg_1;
        CHECK_OBJECT(par_firmware_path);
        tmp_path_arg_1 = par_firmware_path;
        tmp_assign_source_1 = OS_PATH_BASENAME(tstate, tmp_path_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 176;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_filename == NULL);
        var_filename = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_device_type);
        tmp_cmp_expr_left_1 = par_device_type;
        CHECK_OBJECT(var_filename);
        tmp_expression_value_1 = var_filename;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type->m_frame.f_lineno = 179;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 179;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[58];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_filename);
            tmp_format_value_1 = var_filename;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 180;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[59];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_device_type);
            tmp_format_value_2 = par_device_type;
            tmp_format_spec_2 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 180;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type->m_frame.f_lineno = 180;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[60];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_device_type);
            tmp_format_value_3 = par_device_type;
            tmp_format_spec_3 = mod_consts[14];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 181;
                type_description_1 = "oooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[61];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type->m_frame.f_lineno = 181;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[10]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[62];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_filename);
            tmp_format_value_4 = var_filename;
            tmp_format_spec_4 = mod_consts[14];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 185;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[63];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_device_type);
            tmp_format_value_5 = par_device_type;
            tmp_format_spec_5 = mod_consts[14];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 185;
                type_description_1 = "oooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type->m_frame.f_lineno = 185;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type,
        type_description_1,
        par_self,
        par_firmware_path,
        par_device_type,
        var_filename
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_filename);
    Py_DECREF(var_filename);
    var_filename = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_filename);
    var_filename = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_firmware_path);
    Py_DECREF(par_firmware_path);
    CHECK_OBJECT(par_device_type);
    Py_DECREF(par_device_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_firmware_path);
    Py_DECREF(par_firmware_path);
    CHECK_OBJECT(par_device_type);
    Py_DECREF(par_device_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_firmware_version_str = python_pars[1];
    PyObject *var_date_obj = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date = MAKE_FUNCTION_FRAME(tstate, code_objects_7c5856d5b6d0d7f856174b34b48991b6, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = module_var_accessor_services$$36$firmware_updater$datetime(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[64]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 191;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_firmware_version_str);
        tmp_args_element_value_1 = par_firmware_version_str;
        tmp_args_element_value_2 = mod_consts[66];
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_date_obj == NULL);
        var_date_obj = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date, exception_keeper_lineno_1);
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_2); 
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_e = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = mod_consts[67];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_firmware_version_str);
            tmp_format_value_1 = par_firmware_version_str;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 194;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 194;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date->m_frame.f_lineno = 194;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 190;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date->m_frame)) {
            frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
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
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date,
        type_description_1,
        par_self,
        par_firmware_version_str,
        var_date_obj,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_date_obj);
    tmp_return_value = var_date_obj;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_date_obj);
    var_date_obj = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_firmware_version_str);
    Py_DECREF(par_firmware_version_str);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_firmware_version_str);
    Py_DECREF(par_firmware_version_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_firmware_path = python_pars[1];
    PyObject *par_current_lsr_version = python_pars[2];
    PyObject *var_file_name = NULL;
    PyObject *var_match = NULL;
    PyObject *var_firmware_date_str = NULL;
    PyObject *var_firmware_date = NULL;
    PyObject *var_current_date = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date = MAKE_FUNCTION_FRAME(tstate, code_objects_32d2cd250126eec1e87c22671ec68b81, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_path_arg_1;
        CHECK_OBJECT(par_firmware_path);
        tmp_path_arg_1 = par_firmware_path;
        tmp_assign_source_1 = OS_PATH_BASENAME(tstate, tmp_path_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_file_name == NULL);
        var_file_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = module_var_accessor_services$$36$firmware_updater$re(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[68]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[70];
        CHECK_OBJECT(var_file_name);
        tmp_args_element_value_2 = var_file_name;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[69],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match == NULL);
        var_match = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_match);
        tmp_operand_value_1 = var_match;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 203;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[71];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_file_name);
            tmp_format_value_1 = var_file_name;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 204;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame.f_lineno = 204;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 204;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_match);
        tmp_called_instance_2 = var_match;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame.f_lineno = 208;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[72],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 208;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_firmware_date_str == NULL);
        var_firmware_date_str = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = module_var_accessor_services$$36$firmware_updater$datetime(tstate);
        if (unlikely(tmp_called_instance_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[64]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_firmware_date_str);
        tmp_args_element_value_4 = var_firmware_date_str;
        tmp_args_element_value_5 = mod_consts[73];
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_3,
                mod_consts[65],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 210;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_firmware_date == NULL);
        var_firmware_date = tmp_assign_source_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date, exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[74];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_firmware_date_str);
            tmp_format_value_2 = var_firmware_date_str;
            tmp_format_spec_2 = mod_consts[14];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 212;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_6 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame.f_lineno = 212;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 212;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_current_lsr_version);
        tmp_args_element_value_7 = par_current_lsr_version;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame.f_lineno = 216;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[75], tmp_args_element_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 216;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_current_date == NULL);
        var_current_date = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_current_date);
        tmp_operand_value_2 = var_current_date;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 217;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame.f_lineno = 218;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 218;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;


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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date,
        type_description_1,
        par_self,
        par_firmware_path,
        par_current_lsr_version,
        var_file_name,
        var_match,
        var_firmware_date_str,
        var_firmware_date,
        var_current_date
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_file_name);
    Py_DECREF(var_file_name);
    var_file_name = NULL;
    CHECK_OBJECT(var_match);
    Py_DECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_firmware_date_str);
    var_firmware_date_str = NULL;
    Py_XDECREF(var_firmware_date);
    var_firmware_date = NULL;
    Py_XDECREF(var_current_date);
    var_current_date = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_file_name);
    var_file_name = NULL;
    Py_XDECREF(var_match);
    var_match = NULL;
    Py_XDECREF(var_firmware_date_str);
    var_firmware_date_str = NULL;
    Py_XDECREF(var_firmware_date);
    var_firmware_date = NULL;
    Py_XDECREF(var_current_date);
    var_current_date = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_firmware_path);
    Py_DECREF(par_firmware_path);
    CHECK_OBJECT(par_current_lsr_version);
    Py_DECREF(par_current_lsr_version);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_firmware_path);
    Py_DECREF(par_firmware_path);
    CHECK_OBJECT(par_current_lsr_version);
    Py_DECREF(par_current_lsr_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_lsr_ip = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_firmware_path = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_firmware_path;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_lsr_ip;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_ip);
    Py_DECREF(par_lsr_ip);
    CHECK_OBJECT(par_firmware_path);
    Py_DECREF(par_firmware_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp_locals {
    PyObject *var_firmware_size;
    PyObject *var_max_size;
    PyObject *var_crc_hex;
    PyObject *var_tftp_name;
    PyObject *var_result;
    PyObject *var_stdout;
    PyObject *var_stderr;
    PyObject *var_e;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_return_value;
    char yield_tmps[1024];
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    int exception_keeper_lineno_6;
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp_locals *coroutine_heap = (struct services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_firmware_size = NULL;
    coroutine_heap->var_max_size = NULL;
    coroutine_heap->var_crc_hex = NULL;
    coroutine_heap->var_tftp_name = NULL;
    coroutine_heap->var_result = NULL;
    coroutine_heap->var_stdout = NULL;
    coroutine_heap->var_stderr = NULL;
    coroutine_heap->var_e = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f16e06ecaff5554198d5f72e3107a01a, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 227;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 228;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 228;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 228;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 229;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 229;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 229;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_exists_arg_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = module_var_accessor_services$$36$firmware_updater$TftpConfig(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[78]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_exists_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_exists_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_1);
        Py_DECREF(tmp_exists_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 233;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[80];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = module_var_accessor_services$$36$firmware_updater$TftpConfig(tstate);
            if (unlikely(tmp_expression_value_3 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[78]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



                coroutine_heap->exception_lineno = 234;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[79]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 234;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 234;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 234;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 234;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_exists_arg_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 238;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_exists_arg_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_operand_value_2 = OS_PATH_FILE_EXISTS(tstate, tmp_exists_arg_2);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 238;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 238;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 239;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 239;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[82];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 239;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_2;
            }

            tmp_format_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_spec_2 = mod_consts[14];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 239;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_2);

            coroutine_heap->exception_lineno = 239;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 239;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 239;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_5 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_5 == NULL));
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[83]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 243;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 243;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 243;
        tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 243;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_truediv_expr_right_1 = mod_consts[84];
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 243;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_firmware_size == NULL);
        coroutine_heap->var_firmware_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[10]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_3 = mod_consts[85];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(coroutine_heap->var_firmware_size);
            tmp_format_value_3 = coroutine_heap->var_firmware_size;
            tmp_format_spec_3 = mod_consts[86];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 244;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_4 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_4);

            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 244;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 244;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = module_var_accessor_services$$36$firmware_updater$FlashConfig(tstate);
        if (unlikely(tmp_called_instance_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[88]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 247;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 247;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[89]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 247;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_max_size == NULL);
        coroutine_heap->var_max_size = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(coroutine_heap->var_firmware_size);
        tmp_cmp_expr_left_1 = coroutine_heap->var_firmware_size;
        CHECK_OBJECT(coroutine_heap->var_max_size);
        tmp_cmp_expr_right_1 = coroutine_heap->var_max_size;
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 248;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 249;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 249;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_4 = mod_consts[90];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(coroutine_heap->var_max_size);
            tmp_format_value_4 = coroutine_heap->var_max_size;
            tmp_format_spec_4 = mod_consts[14];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 249;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_5);

            coroutine_heap->exception_lineno = 249;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 249;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 249;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[92]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 253;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 253;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_crc_hex == NULL);
        coroutine_heap->var_crc_hex = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_format_value_5;
        PyObject *tmp_format_spec_5;
        CHECK_OBJECT(coroutine_heap->var_crc_hex);
        tmp_format_value_5 = coroutine_heap->var_crc_hex;
        tmp_format_spec_5 = mod_consts[14];
        tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 254;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[93];
        PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
        tmp_assign_source_4 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 254;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_tftp_name == NULL);
        coroutine_heap->var_tftp_name = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 255;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[10]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 255;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_6 = mod_consts[94];
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(coroutine_heap->var_crc_hex);
            tmp_format_value_6 = coroutine_heap->var_crc_hex;
            tmp_format_spec_6 = mod_consts[14];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 255;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[95];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(coroutine_heap->var_tftp_name);
            tmp_tuple_element_6 = coroutine_heap->var_tftp_name;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 3, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_6);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_7 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_7);

            coroutine_heap->exception_lineno = 255;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 255;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 255;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_9;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 258;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 258;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_5,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 258;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 259;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 259;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[1]);
        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 259;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 259;
        tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[97]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 259;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_10 = ASYNC_AWAIT(tstate, tmp_expression_value_11, await_normal);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 259;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yield_from = tmp_expression_value_10;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 259;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    {
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 260;
        tmp_called_instance_7 = module_var_accessor_services$$36$firmware_updater$asyncio(tstate);
        if (unlikely(tmp_called_instance_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[23]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 260;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 260;
        tmp_expression_value_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 260;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_13 = ASYNC_AWAIT(tstate, tmp_expression_value_14, await_normal);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 260;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yield_from = tmp_expression_value_13;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 260;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_await_result_2 = yield_return_value;
        Py_DECREF(tmp_await_result_2);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[10]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_7 = mod_consts[98];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 6);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
            tmp_expression_value_16 = module_var_accessor_services$$36$firmware_updater$TftpConfig(tstate);
            if (unlikely(tmp_expression_value_16 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[78]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



                coroutine_heap->exception_lineno = 263;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_6;
            }
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[79]);
            if (tmp_format_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 263;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_7 = mod_consts[14];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 263;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[99];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[100]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 263;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_6;
            }

            tmp_format_value_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_format_spec_8 = mod_consts[14];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 263;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[99];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 4, tmp_tuple_element_7);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 263;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_6;
            }

            tmp_format_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_spec_9 = mod_consts[14];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 263;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 5, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_string_concat_values_7);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_args_element_value_8 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_8);

            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 263;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 263;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_17 = module_var_accessor_services$$36$firmware_updater$subprocess(tstate);
        if (unlikely(tmp_expression_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[101]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 267;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[102]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 267;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_18 = module_var_accessor_services$$36$firmware_updater$TftpConfig(tstate);
        if (unlikely(tmp_expression_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[78]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

            Py_DECREF(tmp_called_value_9);

            coroutine_heap->exception_lineno = 268;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[79]);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_9);

            coroutine_heap->exception_lineno = 268;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_arg_value_0_1 = MAKE_LIST_EMPTY(tstate, 4);
        PyList_SET_ITEM(tmp_kw_call_arg_value_0_1, 0, tmp_list_element_1);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[100]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 268;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto list_build_exception_1;
        }

        tmp_list_element_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_1, 1, tmp_list_element_1);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 268;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto list_build_exception_1;
        }

        tmp_list_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_1, 2, tmp_list_element_1);
        CHECK_OBJECT(coroutine_heap->var_tftp_name);
        tmp_list_element_1 = coroutine_heap->var_tftp_name;
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_1, 3, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        goto try_except_handler_3;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_dict_value_0_1 = Py_True;
        tmp_kw_call_dict_value_1_1 = Py_True;
        tmp_expression_value_19 = module_var_accessor_services$$36$firmware_updater$TimeoutConfig(tstate);
        if (unlikely(tmp_expression_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[30]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            coroutine_heap->exception_lineno = 271;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[103]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            coroutine_heap->exception_lineno = 271;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 267;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[104]);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 267;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->var_result == NULL);
        coroutine_heap->var_result = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_20;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(coroutine_heap->var_result);
        tmp_expression_value_21 = coroutine_heap->var_result;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[105]);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_or_left_value_1);

            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[14];
        Py_INCREF(tmp_or_right_value_1);
        tmp_expression_value_20 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_expression_value_20 = tmp_or_left_value_1;
        or_end_1:;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[50]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 275;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 275;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->var_stdout == NULL);
        coroutine_heap->var_stdout = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_22;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(coroutine_heap->var_result);
        tmp_expression_value_23 = coroutine_heap->var_result;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[106]);
        if (tmp_or_left_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 276;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_or_left_value_2);

            coroutine_heap->exception_lineno = 276;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = mod_consts[14];
        Py_INCREF(tmp_or_right_value_2);
        tmp_expression_value_22 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_expression_value_22 = tmp_or_left_value_2;
        or_end_2:;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[50]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 276;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 276;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 276;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->var_stderr == NULL);
        coroutine_heap->var_stderr = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_8;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[10]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_8 = mod_consts[107];
        tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_10;
            PyObject *tmp_format_spec_10;
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_8);
            CHECK_OBJECT(coroutine_heap->var_stdout);
            tmp_format_value_10 = coroutine_heap->var_stdout;
            tmp_format_spec_10 = mod_consts[14];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 279;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_string_concat_values_8);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_9 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_12);

            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 279;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 279;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(coroutine_heap->var_result);
        tmp_expression_value_25 = coroutine_heap->var_result;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[106]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_attribute_value_1);

            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_9;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_26 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[10]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_9 = mod_consts[108];
        tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_9);
            CHECK_OBJECT(coroutine_heap->var_stderr);
            tmp_format_value_11 = coroutine_heap->var_stderr;
            tmp_format_spec_11 = mod_consts[14];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 281;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_string_concat_values_9);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_args_element_value_10 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_13);

            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 281;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(coroutine_heap->var_result);
        tmp_expression_value_27 = coroutine_heap->var_result;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[109]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_2 = const_int_0;
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_13;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 285;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 285;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[110], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 285;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_13);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_14;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 289;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_9 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 289;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_9,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 289;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_14);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
        } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_28;
        tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
        tmp_expression_value_28 = module_var_accessor_services$$36$firmware_updater$subprocess(tstate);
        if (unlikely(tmp_expression_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[101]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 293;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[112]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 293;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_4;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 293;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_string_concat_values_10;
        PyObject *tmp_tuple_element_10;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_29 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[10]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_10 = mod_consts[113];
        tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_12;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_format_spec_12;
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_10);
            tmp_expression_value_30 = module_var_accessor_services$$36$firmware_updater$TimeoutConfig(tstate);
            if (unlikely(tmp_expression_value_30 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[30]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



                coroutine_heap->exception_lineno = 294;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_9;
            }
            tmp_format_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[103]);
            if (tmp_format_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 294;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_9;
            }
            tmp_format_spec_12 = mod_consts[14];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
            Py_DECREF(tmp_format_value_12);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 294;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_string_concat_values_10);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_args_element_value_11 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_10);
        Py_DECREF(tmp_string_concat_values_10);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_14);

            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 294;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_15);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_4;
    goto branch_end_6;
    branch_no_6:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 266;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
            coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    coroutine_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_4;
    branch_end_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Preserve existing published exception id 2.
    coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
        } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_3);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_4 = PyExc_Exception;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_7 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_8); 
        assert(coroutine_heap->var_e == NULL);
        Py_INCREF(tmp_assign_source_8);
        coroutine_heap->var_e = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_11;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_31 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[10]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_11 = mod_consts[45];
        tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_13;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_13;
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 0, tmp_tuple_element_11);
            CHECK_OBJECT(coroutine_heap->var_e);
            tmp_unicode_arg_1 = coroutine_heap->var_e;
            tmp_format_value_13 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 299;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_10;
            }
            tmp_format_spec_13 = mod_consts[14];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
            Py_DECREF(tmp_format_value_13);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 299;
                coroutine_heap->type_description_1 = "cccoooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_string_concat_values_11);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_args_element_value_12 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_15);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_6;
        }
        coroutine->m_frame->m_frame.f_lineno = 299;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cccoooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_16);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_7;
    branch_no_7:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 232;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
            coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    coroutine_heap->type_description_1 = "cccoooooooo";
    goto try_except_handler_5;
    branch_end_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[2],
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine_heap->var_firmware_size,
            coroutine_heap->var_max_size,
            coroutine_heap->var_crc_hex,
            coroutine_heap->var_tftp_name,
            coroutine_heap->var_result,
            coroutine_heap->var_stdout,
            coroutine_heap->var_stderr,
            coroutine_heap->var_e
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_True;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_firmware_size);
    coroutine_heap->var_firmware_size = NULL;
    Py_XDECREF(coroutine_heap->var_max_size);
    coroutine_heap->var_max_size = NULL;
    Py_XDECREF(coroutine_heap->var_crc_hex);
    coroutine_heap->var_crc_hex = NULL;
    Py_XDECREF(coroutine_heap->var_tftp_name);
    coroutine_heap->var_tftp_name = NULL;
    Py_XDECREF(coroutine_heap->var_result);
    coroutine_heap->var_result = NULL;
    Py_XDECREF(coroutine_heap->var_stdout);
    coroutine_heap->var_stdout = NULL;
    Py_XDECREF(coroutine_heap->var_stderr);
    coroutine_heap->var_stderr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_firmware_size);
    coroutine_heap->var_firmware_size = NULL;
    Py_XDECREF(coroutine_heap->var_max_size);
    coroutine_heap->var_max_size = NULL;
    Py_XDECREF(coroutine_heap->var_crc_hex);
    coroutine_heap->var_crc_hex = NULL;
    Py_XDECREF(coroutine_heap->var_tftp_name);
    coroutine_heap->var_tftp_name = NULL;
    Py_XDECREF(coroutine_heap->var_result);
    coroutine_heap->var_result = NULL;
    Py_XDECREF(coroutine_heap->var_stdout);
    coroutine_heap->var_stdout = NULL;
    Py_XDECREF(coroutine_heap->var_stderr);
    coroutine_heap->var_stderr = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp_context,
        module_services$firmware_updater,
        mod_consts[115],
        mod_consts[116],
        code_objects_f16e06ecaff5554198d5f72e3107a01a,
        closure,
        3,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp$$36$$$36$$$36$coroutine__1_upload_firmware_via_tftp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *var_crc = NULL;
    struct Nuitka_CellObject *var_f = Nuitka_Cell_NewEmpty();
    PyObject *var_chunk = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert(var_crc == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_crc = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex = MAKE_FUNCTION_FRAME(tstate, code_objects_c67626a1a735a1c3bda038f0227aa7ae, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path);
        tmp_open_filename_1 = par_path;
        tmp_open_mode_1 = mod_consts[117];
        tmp_assign_source_2 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[118]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_2;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame.f_lineno = 305;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[119]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_6 = tmp_with_1__enter;
        assert(Nuitka_Cell_GET(var_f) == NULL);
        Py_INCREF(tmp_assign_source_6);
        Nuitka_Cell_SET(var_f, tmp_assign_source_6);

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_callable_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        PyObject *tmp_iter_sentinel_1;

        tmp_closure_1[0] = var_f;
        Py_INCREF(tmp_closure_1[0]);

        tmp_iter_callable_1 = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda(tstate, tmp_closure_1);

        tmp_iter_sentinel_1 = mod_consts[122];
        tmp_assign_source_7 = BUILTIN_ITER2(tmp_iter_callable_1, tmp_iter_sentinel_1);
        Py_DECREF(tmp_iter_callable_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 306;
            type_description_1 = "oooco";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "oooco";
                exception_lineno = 306;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_9;
            Py_INCREF(var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = module_var_accessor_services$$36$firmware_updater$zlib(tstate);
        if (unlikely(tmp_expression_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[123]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 307;
            type_description_1 = "oooco";
            goto try_except_handler_5;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[124]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 307;
            type_description_1 = "oooco";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_chunk);
        tmp_args_element_value_1 = var_chunk;
        if (var_crc == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[125]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 307;
            type_description_1 = "oooco";
            goto try_except_handler_5;
        }

        tmp_args_element_value_2 = var_crc;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 307;
            type_description_1 = "oooco";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_crc;
            var_crc = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 306;
        type_description_1 = "oooco";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex, exception_keeper_lineno_2);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
        } else if (exception_keeper_lineno_2 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex, exception_keeper_lineno_2);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(tstate);
        tmp_args_element_value_4 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_args_element_value_4); 
        tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
        if (tmp_args_element_value_5 == NULL) {
            tmp_args_element_value_5 = Py_None;
        }
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 305;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame)) {
            frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooco";
    goto try_except_handler_6;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 305;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame)) {
            frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    type_description_1 = "oooco";
    goto try_except_handler_6;
    branch_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame.f_lineno = 305;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts[126]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

            RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame.f_lineno = 305;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts[126]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 305;
            type_description_1 = "oooco";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_format_value_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_format_spec_1;
        if (var_crc == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[125]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 308;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }

        tmp_bitand_expr_left_1 = var_crc;
        tmp_bitand_expr_right_1 = mod_consts[127];
        tmp_format_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 308;
            type_description_1 = "oooco";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[128];
        tmp_return_value = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 308;
            type_description_1 = "oooco";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex,
        type_description_1,
        par_self,
        par_path,
        var_crc,
        var_f,
        var_chunk
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_crc);
    var_crc = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_6 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_6 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_crc);
    var_crc = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_4db4c07f0dcb55e4e756ac649d95172a, module_services$firmware_updater, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[129]);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 306;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda->m_frame.f_lineno = 306;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[130],
            PyTuple_GET_ITEM(mod_consts[131], 0)
        );

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 306;
            type_description_1 = "c";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_lsr_ip = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_ip);
    Py_DECREF(par_lsr_ip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer_locals {
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    PyObject *tmp_return_value;
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer_locals *coroutine_heap = (struct services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3b98e85a8964d1a4e1e81ccea6338394, module_services$firmware_updater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 314;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 314;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 314;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 315;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 315;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[132], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 315;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 316;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 316;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 316;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 319;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 319;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[133], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 319;
            coroutine_heap->type_description_1 = "cN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0],
            NULL
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);


    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_True;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer_context,
        module_services$firmware_updater,
        mod_consts[134],
        mod_consts[135],
        code_objects_3b98e85a8964d1a4e1e81ccea6338394,
        closure,
        1,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer$$36$$$36$$$36$coroutine__1_verify_firmware_transfer_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_lsr_id = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_lsr_id;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update_locals {
    PyObject *var_command;
    PyObject *var_success;
    PyObject *var_response;
    PyObject *var_e;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    char yield_tmps[1024];
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    int exception_keeper_lineno_8;
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update_locals *coroutine_heap = (struct services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_command = NULL;
    coroutine_heap->var_success = NULL;
    coroutine_heap->var_response = NULL;
    coroutine_heap->var_e = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9dc800b4839d0b912c2bbf59847f3501, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 327;
            coroutine_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 327;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 327;
            coroutine_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 328;
            coroutine_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 328;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[136], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 328;
            coroutine_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 329;
            coroutine_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 329;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 329;
            coroutine_heap->type_description_1 = "ccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 334;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 334;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[137], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 334;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = module_var_accessor_services$$36$firmware_updater$LsrCommands(tstate);
        if (unlikely(tmp_expression_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[17]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 335;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[138]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 335;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 335;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 335;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 335;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_command == NULL);
        coroutine_heap->var_command = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        coroutine->m_frame->m_frame.f_lineno = 336;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[1]);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(coroutine_heap->var_command);
        tmp_args_element_value_2 = coroutine_heap->var_command;
        coroutine->m_frame->m_frame.f_lineno = 336;
        tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[20], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yield_from = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        tmp_iter_arg_1 = yield_return_value;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 336;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = coroutine_heap->tmp_tuple_unpack_1__element_1;
        assert(coroutine_heap->var_success == NULL);
        Py_INCREF(tmp_assign_source_5);
        coroutine_heap->var_success = tmp_assign_source_5;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        assert(coroutine_heap->var_response == NULL);
        Py_INCREF(tmp_assign_source_6);
        coroutine_heap->var_response = tmp_assign_source_6;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 339;
        tmp_called_instance_6 = module_var_accessor_services$$36$firmware_updater$asyncio(tstate);
        if (unlikely(tmp_called_instance_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[23]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 339;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 339;
        tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 339;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 339;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yield_from = tmp_expression_value_5;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 339;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[139];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 343;
                coroutine_heap->type_description_1 = "ccoooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 343;
                coroutine_heap->type_description_1 = "ccoooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[27];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_2);

            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 343;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 343;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_8 = module_var_accessor_services$$36$firmware_updater$LsrCommands(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[17]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[28]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[13]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 344;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 344;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_command;
            assert(old != NULL);
            coroutine_heap->var_command = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_5;
        coroutine->m_frame->m_frame.f_lineno = 345;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[1]);
        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(coroutine_heap->var_command);
        tmp_args_element_value_5 = coroutine_heap->var_command;
        coroutine->m_frame->m_frame.f_lineno = 345;
        tmp_expression_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[20], tmp_args_element_value_5);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_normal);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_8, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yield_from = tmp_expression_value_9;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_8, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        tmp_iter_arg_2 = yield_return_value;
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_5;
        }
        assert(coroutine_heap->tmp_tuple_unpack_2__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_6;
        }
        assert(coroutine_heap->tmp_tuple_unpack_2__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_6;
        }
        assert(coroutine_heap->tmp_tuple_unpack_2__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = coroutine_heap->tmp_tuple_unpack_2__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_2, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 345;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_2__source_iter);
    coroutine_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_11 = coroutine_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = coroutine_heap->var_success;
            assert(old != NULL);
            coroutine_heap->var_success = tmp_assign_source_11;
            Py_INCREF(coroutine_heap->var_success);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_1);
    coroutine_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_12 = coroutine_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = coroutine_heap->var_response;
            assert(old != NULL);
            coroutine_heap->var_response = tmp_assign_source_12;
            Py_INCREF(coroutine_heap->var_response);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_2__element_2);
    coroutine_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 348;
        tmp_expression_value_14 = module_var_accessor_services$$36$firmware_updater$asyncio(tstate);
        if (unlikely(tmp_expression_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[23]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[24]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_15 = module_var_accessor_services$$36$firmware_updater$TimeoutConfig(tstate);
        if (unlikely(tmp_expression_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[30]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

            Py_DECREF(tmp_called_value_4);

            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[31]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_4);

            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 348;
        tmp_expression_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_12 = ASYNC_AWAIT(tstate, tmp_expression_value_13, await_normal);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yield_from = tmp_expression_value_12;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 348;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_await_result_2 = yield_return_value;
        Py_DECREF(tmp_await_result_2);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 353;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[140], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 353;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_await_result_3;
        coroutine->m_frame->m_frame.f_lineno = 354;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 354;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[1]);
        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 354;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 354;
        tmp_expression_value_17 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[141]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 354;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_16 = ASYNC_AWAIT(tstate, tmp_expression_value_17, await_normal);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 354;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_instance_9, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 5;
        coroutine->m_yield_from = tmp_expression_value_16;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_5:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_instance_9, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 354;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        tmp_await_result_3 = yield_return_value;
        Py_DECREF(tmp_await_result_3);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 357;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_10 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 357;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[142], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 357;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
        } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_5);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_13); 
        assert(coroutine_heap->var_e == NULL);
        Py_INCREF(tmp_assign_source_13);
        coroutine_heap->var_e = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 362;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[10]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 362;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_8;
        }
        tmp_tuple_element_2 = mod_consts[143];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(coroutine_heap->var_e);
            tmp_unicode_arg_1 = coroutine_heap->var_e;
            tmp_format_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 362;
                coroutine_heap->type_description_1 = "ccoooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[14];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 362;
                coroutine_heap->type_description_1 = "ccoooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_7 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_5);

            coroutine_heap->exception_lineno = 362;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 362;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 362;
            coroutine_heap->type_description_1 = "ccoooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_8;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_8:;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    goto try_return_handler_7;
    // Exception handler code:
    try_except_handler_8:;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 332;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
            coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    coroutine_heap->type_description_1 = "ccoooo";
    goto try_except_handler_7;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine_heap->var_command,
            coroutine_heap->var_success,
            coroutine_heap->var_response,
            coroutine_heap->var_e
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_True;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_command);
    coroutine_heap->var_command = NULL;
    Py_XDECREF(coroutine_heap->var_success);
    coroutine_heap->var_success = NULL;
    Py_XDECREF(coroutine_heap->var_response);
    coroutine_heap->var_response = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_command);
    coroutine_heap->var_command = NULL;
    Py_XDECREF(coroutine_heap->var_success);
    coroutine_heap->var_success = NULL;
    Py_XDECREF(coroutine_heap->var_response);
    coroutine_heap->var_response = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update_context,
        module_services$firmware_updater,
        mod_consts[144],
        mod_consts[145],
        code_objects_9dc800b4839d0b912c2bbf59847f3501,
        closure,
        2,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__15_finalize_update$$36$$$36$$$36$coroutine__1_finalize_update_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_lsr = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_firmware_path = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_firmware_path;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_lsr;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr);
    Py_DECREF(par_lsr);
    CHECK_OBJECT(par_firmware_path);
    Py_DECREF(par_firmware_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async_locals {
    PyObject *var_success;
    PyObject *var_lsr_ip;
    PyObject *var_e;
    PyObject *var_traceback;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_return_value;
    char yield_tmps[1024];
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    int exception_keeper_lineno_8;
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async_locals *coroutine_heap = (struct services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_success = NULL;
    coroutine_heap->var_lsr_ip = NULL;
    coroutine_heap->var_e = NULL;
    coroutine_heap->var_traceback = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_94a4a2b5dcd4094d691cbb8873d077b6, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 369;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 369;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[146], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 369;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 370;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 370;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[147], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 370;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 371;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 371;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[148];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 371;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[150]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 371;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[151];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 371;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 371;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 371;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 371;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 372;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 372;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[153];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 372;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_2;
            }

            tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[154]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 372;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[155];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 372;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_2);

            coroutine_heap->exception_lineno = 372;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 372;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 372;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 373;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 373;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[156];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 373;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[157]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 373;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[158];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 373;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 373;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 373;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 373;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[159];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            tmp_called_value_5 = module_var_accessor_services$$36$firmware_updater$Path(tstate);
            if (unlikely(tmp_called_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[160]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



                coroutine_heap->exception_lineno = 374;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_4;
            }
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 374;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_4;
            }

            tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            coroutine->m_frame->m_frame.f_lineno = 374;
            tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 374;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_4;
            }
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[161]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 374;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_4 = mod_consts[162];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 374;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_4 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_4);

            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 374;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 374;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 375;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 375;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[163], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 375;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 381;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[164]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 381;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 381;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_args_element_value_7 = mod_consts[165];
        coroutine->m_frame->m_frame.f_lineno = 381;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 381;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 381;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_8;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 382;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 382;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_4,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[166], 0)
        );

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 382;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_8);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_instance_5;
        coroutine->m_frame->m_frame.f_lineno = 386;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 386;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 386;
        tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[8]);
        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 386;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_10 = ASYNC_AWAIT(tstate, tmp_expression_value_11, await_normal);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 386;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_2, sizeof(bool), &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yield_from = tmp_expression_value_10;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_2, sizeof(bool), &tmp_expression_value_11, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 386;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_operand_value_2 = yield_return_value;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 386;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_9;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 387;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 387;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[167], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 387;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_9);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_2;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_15;
        coroutine->m_frame->m_frame.f_lineno = 391;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[46]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[150]);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_7);

            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 391;
        tmp_expression_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_12 = ASYNC_AWAIT(tstate, tmp_expression_value_13, await_normal);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yield_from = tmp_expression_value_12;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_assign_source_1, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_1 = yield_return_value;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, &coroutine_heap->exception_state, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        coroutine_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &coroutine_heap->exception_state, tmp_iterator_name_1, 2);
        if (coroutine_heap->tmp_result == false) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



            coroutine_heap->exception_lineno = 391;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = coroutine_heap->tmp_tuple_unpack_1__element_1;
        assert(coroutine_heap->var_success == NULL);
        Py_INCREF(tmp_assign_source_4);
        coroutine_heap->var_success = tmp_assign_source_4;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        assert(coroutine_heap->var_lsr_ip == NULL);
        Py_INCREF(tmp_assign_source_5);
        coroutine_heap->var_lsr_ip = tmp_assign_source_5;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_operand_value_4;
        CHECK_OBJECT(coroutine_heap->var_success);
        tmp_operand_value_3 = coroutine_heap->var_success;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 392;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_or_left_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(coroutine_heap->var_lsr_ip);
        tmp_operand_value_4 = coroutine_heap->var_lsr_ip;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 392;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_or_right_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_10;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 393;
        tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[168], 0)
        );

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 393;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_10);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_2;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        coroutine->m_frame->m_frame.f_lineno = 397;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[115]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(coroutine_heap->var_lsr_ip);
        tmp_args_element_value_9 = coroutine_heap->var_lsr_ip;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[81]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_expression_value_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_16 = ASYNC_AWAIT(tstate, tmp_expression_value_17, await_normal);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_4, sizeof(bool), &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yield_from = tmp_expression_value_16;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_4, sizeof(bool), &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), &tmp_args_element_value_9, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_operand_value_5 = yield_return_value;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 397;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_11;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 398;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 398;
        tmp_call_result_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_8,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[169], 0)
        );

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 398;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_11);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_2;
    branch_no_4:;
    {
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 402;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_9 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        CHECK_OBJECT(coroutine_heap->var_lsr_ip);
        tmp_args_element_value_11 = coroutine_heap->var_lsr_ip;
        coroutine->m_frame->m_frame.f_lineno = 402;
        tmp_expression_value_20 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[134], tmp_args_element_value_11);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_19 = ASYNC_AWAIT(tstate, tmp_expression_value_20, await_normal);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_instance_9, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yield_from = tmp_expression_value_19;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_20, sizeof(PyObject *), &tmp_called_instance_9, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_24;
        coroutine->m_frame->m_frame.f_lineno = 405;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_23 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[144]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[150]);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_9);

            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 405;
        tmp_expression_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_21 = ASYNC_AWAIT(tstate, tmp_expression_value_22, await_normal);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_22, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 5;
        coroutine->m_yield_from = tmp_expression_value_21;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_5:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_22, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_expression_value_23, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_operand_value_6 = yield_return_value;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 405;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_5 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_12;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 406;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_10 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 406;
        tmp_call_result_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_10,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[170], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 406;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_12);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_2;
    branch_no_5:;
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_13;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 410;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_11 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 410;
        tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_11,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[146], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 410;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_14;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 411;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_12 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 411;
        tmp_call_result_14 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_12,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[147], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 411;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_25 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[10]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        tmp_tuple_element_5 = mod_consts[171];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 412;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_5;
            }

            tmp_expression_value_26 = Nuitka_Cell_GET(coroutine->m_closure[1]);
            tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[150]);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 412;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_5 = mod_consts[14];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 412;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[172];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_13 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_10);

            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 412;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_16;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 413;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_13 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 413;
        tmp_call_result_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_13,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[163], 0)
        );

        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 413;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
        } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_3);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
        tmp_cmp_expr_right_1 = PyExc_Exception;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = EXC_VALUE(tstate);
        CHECK_OBJECT(tmp_assign_source_6); 
        assert(coroutine_heap->var_e == NULL);
        Py_INCREF(tmp_assign_source_6);
        coroutine_heap->var_e = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 420;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_27 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[10]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 420;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[173];
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(coroutine_heap->var_e);
            tmp_unicode_arg_1 = coroutine_heap->var_e;
            tmp_format_value_6 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 420;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_6 = mod_consts[14];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 420;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_string_concat_values_6);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_args_element_value_14 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_11);

            coroutine_heap->exception_lineno = 420;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        coroutine->m_frame->m_frame.f_lineno = 420;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 420;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[174];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        coroutine->m_frame->m_frame.f_lineno = 421;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 421;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        assert(coroutine_heap->var_traceback == NULL);
        coroutine_heap->var_traceback = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 422;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_28 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[10]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 422;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        tmp_tuple_element_7 = mod_consts[175];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_format_spec_7;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
            CHECK_OBJECT(coroutine_heap->var_traceback);
            tmp_called_instance_14 = coroutine_heap->var_traceback;
            coroutine->m_frame->m_frame.f_lineno = 422;
            tmp_format_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[176]);
            if (tmp_format_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 422;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_7 = mod_consts[14];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 422;
                coroutine_heap->type_description_1 = "cccoooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_string_concat_values_7);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_15 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_12);

            coroutine_heap->exception_lineno = 422;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        coroutine->m_frame->m_frame.f_lineno = 422;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 422;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_18);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_7;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    goto try_return_handler_6;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_e);
    coroutine_heap->var_e = NULL;

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    goto branch_end_6;
    branch_no_6:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 378;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
            coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    coroutine_heap->type_description_1 = "cccoooo";
    goto try_except_handler_6;
    branch_end_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_3:;
    coroutine_heap->tmp_return_value = Py_True;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_19;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 427;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[1]);
        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 427;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 427;
        tmp_call_result_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[177]);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 427;
            coroutine_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Preserve existing published exception id 2.
    coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_6);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_6);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_6, exception_tb);
        } else if (coroutine_heap->exception_keeper_lineno_6 != 0) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_6);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_6, exception_tb);
        }
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_6);
    // Tried code:
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_20;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 427;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_30 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[1]);
        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 427;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 427;
        tmp_call_result_20 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[177]);
        Py_DECREF(tmp_called_instance_16);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 427;
            coroutine_heap->type_description_1 = "cccoooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_20);
    }
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 378;
    }

    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

        if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
            coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
        }
    }
    coroutine_heap->type_description_1 = "cccoooo";
    goto try_except_handler_8;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[2],
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine_heap->var_success,
            coroutine_heap->var_lsr_ip,
            coroutine_heap->var_e,
            coroutine_heap->var_traceback
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);


    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_success);
    coroutine_heap->var_success = NULL;
    Py_XDECREF(coroutine_heap->var_lsr_ip);
    coroutine_heap->var_lsr_ip = NULL;
    Py_XDECREF(coroutine_heap->var_traceback);
    coroutine_heap->var_traceback = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
    INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

    Py_XDECREF(coroutine_heap->var_success);
    coroutine_heap->var_success = NULL;
    Py_XDECREF(coroutine_heap->var_lsr_ip);
    coroutine_heap->var_lsr_ip = NULL;
    Py_XDECREF(coroutine_heap->var_traceback);
    coroutine_heap->var_traceback = NULL;
    // Re-raise.
    coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async_context,
        module_services$firmware_updater,
        mod_consts[178],
        mod_consts[179],
        code_objects_94a4a2b5dcd4094d691cbb8873d077b6,
        closure,
        3,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async$$36$$$36$$$36$coroutine__1_update_lsr_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_lsr = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_lsr;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr);
    Py_DECREF(par_lsr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version_locals {
    char const *type_description_1;
    struct Nuitka_ExceptionPreservationItem exception_state;
    int exception_lineno;
    PyObject *tmp_return_value;
};
#endif

static PyObject *services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version_locals *coroutine_heap = (struct services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_30d271ef5a374e499a249c0d0317d86e, module_services$firmware_updater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 434;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 434;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[180];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 434;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[150]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 434;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 434;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[27];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 434;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 434;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 434;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[181];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
                CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

                coroutine_heap->exception_lineno = 435;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_2;
            }

            tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[154]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 435;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[14];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 435;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_2);

            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 435;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 435;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 436;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 436;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[182];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            tmp_expression_value_6 = module_var_accessor_services$$36$firmware_updater$FirmwareVersionConfig(tstate);
            if (unlikely(tmp_expression_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[183]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



                coroutine_heap->exception_lineno = 436;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_3;
            }
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[184]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 436;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[14];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


                coroutine_heap->exception_lineno = 436;
                coroutine_heap->type_description_1 = "cc";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 436;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 436;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 436;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[149]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 439;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[154]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 439;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = module_var_accessor_services$$36$firmware_updater$FirmwareVersionConfig(tstate);
        if (unlikely(tmp_expression_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[183]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

            Py_DECREF(tmp_cmp_expr_left_1);

            coroutine_heap->exception_lineno = 439;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[184]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
            Py_DECREF(tmp_cmp_expr_left_1);

            coroutine_heap->exception_lineno = 439;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 439;
            coroutine_heap->type_description_1 = "cc";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 440;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 440;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[185], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 440;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    coroutine_heap->tmp_return_value = Py_True;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts[6]);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

            coroutine_heap->exception_lineno = 444;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 444;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[10],
            PyTuple_GET_ITEM(mod_consts[186], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


            coroutine_heap->exception_lineno = 444;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    coroutine_heap->tmp_return_value = Py_False;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_end_1:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto function_return_exit;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
            exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[1],
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);


    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version_context,
        module_services$firmware_updater,
        mod_consts[187],
        mod_consts[188],
        code_objects_30d271ef5a374e499a249c0d0317d86e,
        closure,
        2,
#if 1
        sizeof(struct services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version$$36$$$36$$$36$coroutine__1_check_firmware_version_locals)
#else
        0
#endif
    );
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__18___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_udp_service = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__ = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__ == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8982af06a0d3bb7d41935c3945d14013, module_services$firmware_updater, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__ = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_udp_service);
        tmp_assattr_value_1 = par_udp_service;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[189], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 459;
            type_description_1 = "oo";
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
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__,
        type_description_1,
        par_self,
        par_udp_service
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__ == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__ = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__18___init__);

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
    CHECK_OBJECT(par_udp_service);
    Py_DECREF(par_udp_service);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_udp_service);
    Py_DECREF(par_udp_service);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__19_get_ip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip = MAKE_FUNCTION_FRAME(tstate, code_objects_b43815c029ad20b944cc842f244c0a15, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 464;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[191];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 464;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip->m_frame.f_lineno = 467;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 467;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__19_get_ip);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg = MAKE_FUNCTION_FRAME(tstate, code_objects_3ce616f9405257aa8cae1db2cc420cbc, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 473;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[193];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 473;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 476;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg->m_frame.f_lineno = 476;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 476;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg = MAKE_FUNCTION_FRAME(tstate, code_objects_51374f9b6f339d594a42d4f15a7cd0e4, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 480;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[194];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 480;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 483;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg->m_frame.f_lineno = 483;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 483;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__22_reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset = MAKE_FUNCTION_FRAME(tstate, code_objects_5746d9335bc053e118885794a1c4c74f, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 487;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[195];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 487;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 490;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset->m_frame.f_lineno = 490;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 490;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__22_reset);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash = MAKE_FUNCTION_FRAME(tstate, code_objects_0728f4e40b205e7b5899c61a59b298ee, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 494;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[196];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 494;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash->m_frame.f_lineno = 497;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info = MAKE_FUNCTION_FRAME(tstate, code_objects_abe9f698d55fc4b1d3f0294fbad08232, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 501;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[197];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 501;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 504;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info->m_frame.f_lineno = 504;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 504;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg = MAKE_FUNCTION_FRAME(tstate, code_objects_fcfa207c65040909a6cd70886475b843, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 510;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[198];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 510;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 514;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg->m_frame.f_lineno = 514;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 514;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom = MAKE_FUNCTION_FRAME(tstate, code_objects_cd9e8fda394339d354dd4cf441b2c429, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 518;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[199];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 518;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 519;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom->m_frame.f_lineno = 519;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 519;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_lsr_id = python_pars[1];
    PyObject *var_command = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg)) {
        Py_XDECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg = MAKE_FUNCTION_FRAME(tstate, code_objects_2773fc7055112967754cc29909f140c0, module_services$firmware_updater, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg->m_type_description == NULL);
    frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg = cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg);
    assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[190];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_lsr_id);
            tmp_format_value_1 = par_lsr_id;
            tmp_format_spec_1 = mod_consts[14];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 523;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[200];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[14], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 523;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[189]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_command);
        tmp_args_element_value_1 = var_command;
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg->m_frame.f_lineno = 524;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 524;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg,
        type_description_1,
        par_self,
        par_lsr_id,
        var_command
    );


    // Release cached frame if used for exception.
    if (frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg == cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg);
        cache_frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg = NULL;
    }

    assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_command);
    var_command = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_lsr_id);
    Py_DECREF(par_lsr_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        code_objects_7c5856d5b6d0d7f856174b34b48991b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        code_objects_32d2cd250126eec1e87c22671ec68b81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        code_objects_f16e06ecaff5554198d5f72e3107a01a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        code_objects_c67626a1a735a1c3bda038f0227aa7ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        code_objects_4db4c07f0dcb55e4e756ac649d95172a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_services$firmware_updater,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        code_objects_3b98e85a8964d1a4e1e81ccea6338394,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        code_objects_9dc800b4839d0b912c2bbf59847f3501,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        code_objects_94a4a2b5dcd4094d691cbb8873d077b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version,
        mod_consts[187],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        code_objects_30d271ef5a374e499a249c0d0317d86e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__18___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__18___init__,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[272],
#endif
        code_objects_8982af06a0d3bb7d41935c3945d14013,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__19_get_ip(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__19_get_ip,
        mod_consts[274],
#if PYTHON_VERSION >= 0x300
        mod_consts[275],
#endif
        code_objects_b43815c029ad20b944cc842f244c0a15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        mod_consts[192],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__1___init__,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        code_objects_e00ed090aac4a1b65df1dd5e5dfb36c7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg,
        mod_consts[276],
#if PYTHON_VERSION >= 0x300
        mod_consts[277],
#endif
        code_objects_3ce616f9405257aa8cae1db2cc420cbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg,
        mod_consts[278],
#if PYTHON_VERSION >= 0x300
        mod_consts[279],
#endif
        code_objects_51374f9b6f339d594a42d4f15a7cd0e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__22_reset(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__22_reset,
        mod_consts[280],
#if PYTHON_VERSION >= 0x300
        mod_consts[281],
#endif
        code_objects_5746d9335bc053e118885794a1c4c74f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash,
        mod_consts[282],
#if PYTHON_VERSION >= 0x300
        mod_consts[283],
#endif
        code_objects_0728f4e40b205e7b5899c61a59b298ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info,
        mod_consts[284],
#if PYTHON_VERSION >= 0x300
        mod_consts[285],
#endif
        code_objects_abe9f698d55fc4b1d3f0294fbad08232,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg,
        mod_consts[286],
#if PYTHON_VERSION >= 0x300
        mod_consts[287],
#endif
        code_objects_fcfa207c65040909a6cd70886475b843,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom,
        mod_consts[288],
#if PYTHON_VERSION >= 0x300
        mod_consts[289],
#endif
        code_objects_cd9e8fda394339d354dd4cf441b2c429,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg,
        mod_consts[290],
#if PYTHON_VERSION >= 0x300
        mod_consts[291],
#endif
        code_objects_2773fc7055112967754cc29909f140c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        code_objects_b4d3822b050998141631490ebae474b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__3__log(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__3__log,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        code_objects_81cfe06285c438ae10568c59ff4ad7df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        code_objects_76ac2422ec3b5fff2132878f70c40e11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        code_objects_978c202a1ca71212c64ad04c072efd7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        code_objects_53e6fa8d2c75d6ff24d294cd49fb65b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        code_objects_28faf1bbcaebba543fb6482d8e2b8b6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        code_objects_e15128d07dc607dbf37dfca5ed1caad4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        code_objects_2abd3951f4db12dc49ab82b9d990eab2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_services$firmware_updater,
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

static function_impl_code const function_table_services$firmware_updater[] = {
    impl_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex$$36$$$36$$$36$function__1_lambda,
    impl_services$firmware_updater$$36$$$36$$$36$function__1___init__,
    impl_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback,
    impl_services$firmware_updater$$36$$$36$$$36$function__3__log,
    impl_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr,
    impl_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update,
    impl_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip,
    impl_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip,
    impl_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status,
    impl_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type,
    impl_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date,
    impl_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date,
    impl_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp,
    impl_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex,
    impl_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer,
    impl_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update,
    impl_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async,
    impl_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version,
    impl_services$firmware_updater$$36$$$36$$$36$function__18___init__,
    impl_services$firmware_updater$$36$$$36$$$36$function__19_get_ip,
    impl_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg,
    impl_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg,
    impl_services$firmware_updater$$36$$$36$$$36$function__22_reset,
    impl_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash,
    impl_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info,
    impl_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg,
    impl_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom,
    impl_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg,
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

    return Nuitka_Function_GetFunctionState(function, function_table_services$firmware_updater);
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
        module_services$firmware_updater,
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
        function_table_services$firmware_updater,
        sizeof(function_table_services$firmware_updater) / sizeof(function_impl_code)
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
static char const *module_full_name = "services.firmware_updater";
#endif

// Internal entry point for module code.
PyObject *modulecode_services$firmware_updater(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("services$firmware_updater");

    // Store the module for future use.
    module_services$firmware_updater = module;

    moduledict_services$firmware_updater = MODULE_DICT(module_services$firmware_updater);

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
        PRINT_STRING("services$firmware_updater: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("services$firmware_updater: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("services$firmware_updater: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "services.firmware_updater" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initservices$firmware_updater\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_services$firmware_updater,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_services$firmware_updater,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[14]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_services$firmware_updater,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_services$firmware_updater,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_services$firmware_updater,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_services$firmware_updater);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_services$firmware_updater);
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

        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454 = NULL;
    struct Nuitka_FrameObject *frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_2);
    }
    frame_frame_services$firmware_updater = MAKE_MODULE_FRAME(code_objects_d354f2ed354daa3086079726111fbfee, module_services$firmware_updater);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater);
    assert(Py_REFCNT(frame_frame_services$firmware_updater) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_services$$36$firmware_updater$__spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[203], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = module_var_accessor_services$$36$firmware_updater$__spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[204], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[23];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[101];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[68];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[123];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[64];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[207];
        tmp_level_value_5 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[64],
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_10);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[208],
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[208]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[209],
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[209]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[210];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[211];
        tmp_level_value_6 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[160],
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[160]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[212];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[213];
        tmp_level_value_7 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 9;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[214],
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[214]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[215];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[216];
        tmp_level_value_8 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 10;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[17],
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[217];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[218];
        tmp_level_value_9 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 11;
        tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[30],
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[30]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[78],
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[78]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[219],
                const_int_0
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[219]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[183],
                const_int_0
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[183]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[88],
                const_int_0
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[88]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_21);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_lineno_2 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_2 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[220];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[221];
        tmp_level_value_10 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 18;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[222],
                const_int_0
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[222]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[223];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[224];
        tmp_level_value_11 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 19;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[0],
                const_int_0
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[225];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[226];
        tmp_level_value_12 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 20;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[227],
                const_int_0
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[227]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = module_var_accessor_services$$36$firmware_updater$setup_logger(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[222]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater->m_frame.f_lineno = 23;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts[228]);

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[229];
        tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[230], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[231];
        tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[232], tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            tmp_defaults_1 = mod_consts[233];
            tmp_annotations_1 = DICT_COPY(tstate, mod_consts[234]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[235], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        // Tried code:
        // Tried code:
        frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2 = MAKE_CLASS_FRAME(tstate, code_objects_023bae7b1afa34cc585cd6590798e628, module_services$firmware_updater, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2);
        assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            tmp_dict_key_1 = mod_consts[237];
            tmp_expression_value_1 = module_var_accessor_services$$36$firmware_updater$Callable(tstate);
            if (unlikely(tmp_expression_value_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[208]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[238], "li");
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__2_set_log_callback(tstate, tmp_annotations_2);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            tmp_annotations_3 = DICT_COPY(tstate, mod_consts[240]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__3__log(tstate, tmp_annotations_3);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_4;
            tmp_annotations_4 = DICT_COPY(tstate, mod_consts[242]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__4_connect_to_bkr(tstate, tmp_annotations_4);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(tstate, mod_consts[243]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__5_prepare_lsr_for_update(tstate, tmp_annotations_5);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[244];
            tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_2;
                PyObject *tmp_subscript_value_2;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[245];
                tmp_expression_value_2 = module_var_accessor_services$$36$firmware_updater$Optional(tstate);
                if (unlikely(tmp_expression_value_2 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 137;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 137;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__6__parse_lsr_ip(tstate, tmp_annotations_6);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_7;
            tmp_annotations_7 = DICT_COPY(tstate, mod_consts[247]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__7__is_valid_ip(tstate, tmp_annotations_7);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(tstate, mod_consts[249]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__8__parse_wwdg_status(tstate, tmp_annotations_8);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_9;
            tmp_defaults_2 = mod_consts[251];
            tmp_annotations_9 = DICT_COPY(tstate, mod_consts[252]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__9__validate_firmware_type(tstate, tmp_defaults_2, tmp_annotations_9);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[164], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[254];
            tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_10 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_3;
                PyObject *tmp_subscript_value_3;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[245];
                tmp_expression_value_3 = module_var_accessor_services$$36$firmware_updater$Optional(tstate);
                if (unlikely(tmp_expression_value_3 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_3 = module_var_accessor_services$$36$firmware_updater$datetime(tstate);
                if (unlikely(tmp_subscript_value_3 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[64]);
                }

                if (tmp_subscript_value_3 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
                if (tmp_dict_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 189;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__10__extract_firmware_date(tstate, tmp_annotations_10);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(tstate, mod_consts[256]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__11__validate_firmware_date(tstate, tmp_annotations_11);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[257], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(tstate, mod_consts[259]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__12_upload_firmware_via_tftp(tstate, tmp_annotations_12);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_13;
            tmp_annotations_13 = DICT_COPY(tstate, mod_consts[260]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__13__calc_crc32_hex(tstate, tmp_annotations_13);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(tstate, mod_consts[262]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__14_verify_firmware_transfer(tstate, tmp_annotations_14);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(tstate, mod_consts[263]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__15_finalize_update(tstate, tmp_annotations_15);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[149];
            tmp_dict_value_4 = module_var_accessor_services$$36$firmware_updater$LsrInfo(tstate);
            if (unlikely(tmp_dict_value_4 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[214]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 366;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[81];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[245];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__16_update_lsr_async(tstate, tmp_annotations_16);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 366;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[149];
            tmp_dict_value_5 = module_var_accessor_services$$36$firmware_updater$LsrInfo(tstate);
            if (unlikely(tmp_dict_value_5 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[214]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 431;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[245];
            tmp_dict_value_5 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__17_check_firmware_version(tstate, tmp_annotations_17);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26, mod_consts[187], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 431;
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
                exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[231];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_services$firmware_updater->m_frame.f_lineno = 26;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 26;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_28 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26);
        locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_lineno_3 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_3 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26);
        locals_services$firmware_updater$$36$$$36$$$36$class__1_FirmwareUpdaterService_26 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_lineno_4 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_4 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 26;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_28);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_lineno_5 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_5 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[264];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = Py_None;
        tmp_level_value_13 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 447;
        tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[265];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_services$firmware_updater;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[266];
        tmp_level_value_14 = const_int_0;
        frame_frame_services$firmware_updater->m_frame.f_lineno = 448;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_services$firmware_updater,
                mod_consts[267],
                const_int_0
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[267]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = module_var_accessor_services$$36$firmware_updater$logging(tstate);
        if (unlikely(tmp_called_instance_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[264]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        frame_frame_services$firmware_updater->m_frame.f_lineno = 451;
        tmp_assign_source_32 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[268],
            PyTuple_GET_ITEM(mod_consts[228], 0)
        );

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[229];
        tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[230], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[269];
        tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[201], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[270];
        tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[232], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3 = MAKE_CLASS_FRAME(tstate, code_objects_bdff56914055d54ad98e1e98d14ad9d9, module_services$firmware_updater, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3);
        assert(Py_REFCNT(frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[271];
            tmp_dict_value_6 = module_var_accessor_services$$36$firmware_updater$UpdService(tstate);
            if (unlikely(tmp_dict_value_6 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[267]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__18___init__(tstate, tmp_annotations_18);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[235], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 458;
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
                exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_frame_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__19_get_ip(tstate, tmp_annotations_19);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[274], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_20;
            tmp_annotations_20 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__20_check_wwdg(tstate, tmp_annotations_20);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[276], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_21;
            tmp_annotations_21 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__21_restore_wwdg(tstate, tmp_annotations_21);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[278], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_22;
            tmp_annotations_22 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__22_reset(tstate, tmp_annotations_22);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[280], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_23;
            tmp_annotations_23 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__23_erase_flash(tstate, tmp_annotations_23);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[282], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_24;
            tmp_annotations_24 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__24_get_system_info(tstate, tmp_annotations_24);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[284], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_25;
            tmp_annotations_25 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__25_restore_iwdg(tstate, tmp_annotations_25);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[286], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_26;
            tmp_annotations_26 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__26_reset_eeprom(tstate, tmp_annotations_26);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[288], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_annotations_27;
            tmp_annotations_27 = DICT_COPY(tstate, mod_consts[273]);


            tmp_dictset_value = MAKE_FUNCTION_services$firmware_updater$$36$$$36$$$36$function__27_reset_iwdg(tstate, tmp_annotations_27);

            tmp_result = DICT_SET_ITEM(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454, mod_consts[290], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[270];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_frame_services$firmware_updater->m_frame.f_lineno = 454;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 454;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_35 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454);
        locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_lineno_6 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_6 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454);
        locals_services$firmware_updater$$36$$$36$$$36$class__2_LsrExecutor_454 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_lineno_7 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_7 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 454;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_services$firmware_updater, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_35);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_lineno_8 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_8 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_services$firmware_updater, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_services$firmware_updater->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_services$firmware_updater, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_services$firmware_updater);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("services$firmware_updater", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "services.firmware_updater" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_services$firmware_updater);
    return module_services$firmware_updater;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_services$firmware_updater, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("services$firmware_updater", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
