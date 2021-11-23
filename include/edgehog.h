/*
 * This file is part of Edgehog.
 *
 * Copyright 2021 SECO Mind Srl
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef EDGEHOG_H
#define EDGEHOG_H

#define ASTARTE_UUID_LEN 39

// clang-format off

/**
 * @brief Edgehog return codes.
 *
 * @detail Edgehog Device SDK return codes. EDGEHOG_OK is always returned when no errors occurred.
 */
typedef enum
{
    EDGEHOG_OK = 0, /**< No errors. */
    EDGEHOG_ERR = 1, /**< A generic error occurred. This is usually an internal error in the SDK */
    EDGEHOG_ERR_NETWORK = 2, /**< A generic network error occurred. */
    EDGEHOG_ERR_NVS = 3, /**< A generic error occurred when dealing with NVS */
    EDGEHOG_ERR_OTA_ALREADY_IN_PROGRESS = 4, /**< Attempted to perform OTA operation while there is another one already active*/
    EDGEHOG_ERR_OTA_FAILED = 5, /**< An error occurred during OTA procedure */
    EDGEHOG_ERR_OTA_DEPLOY = 6, /**< An error occurred during OTA Deploy procedure */
    EDGEHOG_ERR_OTA_WRONG_PARTITION = 7, /**< The OTA procedure boot on the wrong partition */
}edgehog_err_t;

// clang-format on

#endif // EDGEHOG_H
