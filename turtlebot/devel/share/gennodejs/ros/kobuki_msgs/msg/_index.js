
"use strict";

let SensorState = require('./SensorState.js');
let WheelDropEvent = require('./WheelDropEvent.js');
let ControllerInfo = require('./ControllerInfo.js');
let KeyboardInput = require('./KeyboardInput.js');
let DockInfraRed = require('./DockInfraRed.js');
let CliffEvent = require('./CliffEvent.js');
let RobotStateEvent = require('./RobotStateEvent.js');
let DigitalOutput = require('./DigitalOutput.js');
let MotorPower = require('./MotorPower.js');
let PowerSystemEvent = require('./PowerSystemEvent.js');
let Led = require('./Led.js');
let DigitalInputEvent = require('./DigitalInputEvent.js');
let Sound = require('./Sound.js');
let ButtonEvent = require('./ButtonEvent.js');
let BumperEvent = require('./BumperEvent.js');
let ExternalPower = require('./ExternalPower.js');
let VersionInfo = require('./VersionInfo.js');
let ScanAngle = require('./ScanAngle.js');
let AutoDockingFeedback = require('./AutoDockingFeedback.js');
let AutoDockingAction = require('./AutoDockingAction.js');
let AutoDockingActionResult = require('./AutoDockingActionResult.js');
let AutoDockingActionFeedback = require('./AutoDockingActionFeedback.js');
let AutoDockingResult = require('./AutoDockingResult.js');
let AutoDockingActionGoal = require('./AutoDockingActionGoal.js');
let AutoDockingGoal = require('./AutoDockingGoal.js');

module.exports = {
  SensorState: SensorState,
  WheelDropEvent: WheelDropEvent,
  ControllerInfo: ControllerInfo,
  KeyboardInput: KeyboardInput,
  DockInfraRed: DockInfraRed,
  CliffEvent: CliffEvent,
  RobotStateEvent: RobotStateEvent,
  DigitalOutput: DigitalOutput,
  MotorPower: MotorPower,
  PowerSystemEvent: PowerSystemEvent,
  Led: Led,
  DigitalInputEvent: DigitalInputEvent,
  Sound: Sound,
  ButtonEvent: ButtonEvent,
  BumperEvent: BumperEvent,
  ExternalPower: ExternalPower,
  VersionInfo: VersionInfo,
  ScanAngle: ScanAngle,
  AutoDockingFeedback: AutoDockingFeedback,
  AutoDockingAction: AutoDockingAction,
  AutoDockingActionResult: AutoDockingActionResult,
  AutoDockingActionFeedback: AutoDockingActionFeedback,
  AutoDockingResult: AutoDockingResult,
  AutoDockingActionGoal: AutoDockingActionGoal,
  AutoDockingGoal: AutoDockingGoal,
};
