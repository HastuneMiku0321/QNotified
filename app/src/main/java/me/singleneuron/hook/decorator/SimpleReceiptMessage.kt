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
package me.singleneuron.hook.decorator

import de.robv.android.xposed.XC_MethodHook
import de.robv.android.xposed.XposedHelpers
import me.singleneuron.base.decorator.BaseItemBuilderFactoryHookDecorator
import nil.nadph.qnotified.util.Utils

object SimpleReceiptMessage: BaseItemBuilderFactoryHookDecorator("simpleReceiptMessage") {

    override fun doDecorate(result: Int, chatMessage: Any, param: XC_MethodHook.MethodHookParam): Boolean {
        if (result==5) {
            val id = Utils.iget_object_or_null(Utils.iget_object_or_null(param.args[param.args.size - 1], "structingMsg"), "mMsgServiceID") as Int
            if (id == 107) {
                XposedHelpers.setObjectField(chatMessage,"msg","[回执消息]")
                param.result = -1
                return true
            }
        }
        return false
    }

}
