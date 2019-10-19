/*
 * Copyright (c) 2018-2019 Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <switch.h>
#include "../defines.hpp"

/* Define firmware version in global namespace, for convenience. */
namespace sts {

    namespace hos {

        enum Version : u16 {
            Version_Min = 0,
            Version_100 = Version_Min,
            Version_200 = 1,
            Version_300 = 2,
            Version_400 = 3,
            Version_500 = 4,
            Version_600 = 5,
            Version_700 = 6,
            Version_800 = 7,
            Version_810 = 8,
            Version_900 = 9,
            Version_Current = Version_900,
            Version_Max = 32,
        };

    }

}

namespace sts::ams {

    enum TargetFirmware : u32 {
        TargetFirmware_100 = 1,
        TargetFirmware_200 = 2,
        TargetFirmware_300 = 3,
        TargetFirmware_400 = 4,
        TargetFirmware_500 = 5,
        TargetFirmware_600 = 6,
        TargetFirmware_620 = 7,
        TargetFirmware_700 = 8,
        TargetFirmware_800 = 9,
        TargetFirmware_810 = 10,
        TargetFirmware_900 = 11,
    };

}