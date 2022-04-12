
"use strict";

let SetCompliancePunch = require('./SetCompliancePunch.js')
let SetComplianceSlope = require('./SetComplianceSlope.js')
let SetComplianceMargin = require('./SetComplianceMargin.js')
let RestartController = require('./RestartController.js')
let SetSpeed = require('./SetSpeed.js')
let TorqueEnable = require('./TorqueEnable.js')
let SetTorqueLimit = require('./SetTorqueLimit.js')
let StopController = require('./StopController.js')
let StartController = require('./StartController.js')

module.exports = {
  SetCompliancePunch: SetCompliancePunch,
  SetComplianceSlope: SetComplianceSlope,
  SetComplianceMargin: SetComplianceMargin,
  RestartController: RestartController,
  SetSpeed: SetSpeed,
  TorqueEnable: TorqueEnable,
  SetTorqueLimit: SetTorqueLimit,
  StopController: StopController,
  StartController: StartController,
};
