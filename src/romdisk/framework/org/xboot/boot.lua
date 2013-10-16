---
-- Setting package path
--
package.path = "./?/init.lua;./?.lua"
package.cpath = "./?.so"

---
-- Builtin module
--
print = require("builtin.logger").print
pump = require("builtin.event").pump

Stopwatch = require "builtin.stopwatch"
Base64 = require "builtin.base64"
Rectangle = require "builtin.rectangle"
Matrix = require "builtin.matrix"
Easing = require "builtin.easing"
Object = require "builtin.object"
Parttern = require "builtin.parttern"
Texture = require "builtin.texture"
Shape = require "builtin.shape"
Font = require "builtin.font"
Display = require "builtin.display"

---
-- Builtin hardware module
--
Hardware = {
	Led = require "builtin.hardware.led",
	Ledtrig = require "builtin.hardware.ledtrig",
}

---
-- External lang module
--
Class = require "org.xboot.lang.Class"

---
-- External core module
--
Asset = require "org.xboot.core.Asset"
TexturePacker = require "org.xboot.core.TexturePacker"
Application = require "org.xboot.core.Application"

---
-- External timer module
--
Timer = require "org.xboot.timer.Timer"
TimerManager = require "org.xboot.timer.TimerManager"

---
-- External event module
--
Event = require "org.xboot.event.Event"
EventDispatcher = require "org.xboot.event.EventDispatcher"

---
-- External display module
--
DisplayObject = require "org.xboot.display.DisplayObject"
DisplayImage = require "org.xboot.display.DisplayImage"
DisplayShape = require "org.xboot.display.DisplayShape"
DisplayText = require "org.xboot.display.DisplayText"
DisplayBmtext = require "org.xboot.display.DisplayBmtext"

---
-- External widget module
--
Widget = {
	CheckBox = require "org.xboot.widget.CheckBox",
}
 
---
-- Global variable
--
application = nil
stage = nil
asset = nil
timermanager = nil

---
-- Loader function
--
local function loader()
	local app = Application.new()
	app:exec()
end

---
-- Message handler
--
local function handler(msg, layer)
	print((debug.traceback("ERROR: " .. tostring(msg), 1 + (layer or 1)):gsub("\n[^\n]+$", "")))
end

return function()
	local res, ret = xpcall(loader, handler)
	if not res then return -1 end
	return tonumber(ret) or -1
end