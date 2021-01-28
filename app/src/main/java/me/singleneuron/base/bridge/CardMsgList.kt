/* QNotified - An Xposed module for QQ/TIM
 * Copyright (C) 2019-2020 xenonhydride@gmail.com
 * https://github.com/ferredoxin/QNotified
 *
 * This software is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.  If not, see
 * <https://www.gnu.org/licenses/>.
 */
package me.singleneuron.base.bridge

import com.google.gson.Gson
import nil.nadph.qnotified.util.NonNull
import java.net.URL

abstract class CardMsgList {

    companion object {

        @JvmStatic
        @NonNull
        fun getInstance(): ()->String {
            //Todo
            return ::getBlackList
        }

    }
}

fun getBlackListExample(): String {
    val map = mapOf(
            "禁止引流" to """(jq\.qq\.com)|(mqqapi.*?forward)""",
            "禁止发送回执消息" to "viewReceiptMessage",
            "禁止干扰性卡片" to """com\.tencent\.mobileqq\.reading""",
            "禁止干扰性消息" to """serviceID[\s]*?=[\s]*?('|")(13|60|76|83)('|")""",
            "禁止音视频通话" to """ti\.qq\.com""",
            "禁止自动回复类卡片" to """com\.tencent\.autoreply"""
    )
    return Gson().toJson(map)
}

fun getBlackList(): String {
    return URL("https://ioctl.cc/QN/BlackList").readText()
}
