// Auto-generated. Do not edit!

// (in-package ball_chaser.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class DriveToTargetRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.lnr_x = null;
      this.ang_z = null;
    }
    else {
      if (initObj.hasOwnProperty('lnr_x')) {
        this.lnr_x = initObj.lnr_x
      }
      else {
        this.lnr_x = 0.0;
      }
      if (initObj.hasOwnProperty('ang_z')) {
        this.ang_z = initObj.ang_z
      }
      else {
        this.ang_z = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DriveToTargetRequest
    // Serialize message field [lnr_x]
    bufferOffset = _serializer.float64(obj.lnr_x, buffer, bufferOffset);
    // Serialize message field [ang_z]
    bufferOffset = _serializer.float64(obj.ang_z, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DriveToTargetRequest
    let len;
    let data = new DriveToTargetRequest(null);
    // Deserialize message field [lnr_x]
    data.lnr_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [ang_z]
    data.ang_z = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 16;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ball_chaser/DriveToTargetRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c992e177b30ad7586f832c8396cb66b5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 lnr_x
    float64 ang_z
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DriveToTargetRequest(null);
    if (msg.lnr_x !== undefined) {
      resolved.lnr_x = msg.lnr_x;
    }
    else {
      resolved.lnr_x = 0.0
    }

    if (msg.ang_z !== undefined) {
      resolved.ang_z = msg.ang_z;
    }
    else {
      resolved.ang_z = 0.0
    }

    return resolved;
    }
};

class DriveToTargetResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.back_msg = null;
    }
    else {
      if (initObj.hasOwnProperty('back_msg')) {
        this.back_msg = initObj.back_msg
      }
      else {
        this.back_msg = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DriveToTargetResponse
    // Serialize message field [back_msg]
    bufferOffset = _serializer.string(obj.back_msg, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DriveToTargetResponse
    let len;
    let data = new DriveToTargetResponse(null);
    // Deserialize message field [back_msg]
    data.back_msg = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.back_msg);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'ball_chaser/DriveToTargetResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'c1f49862c16ce40dfc56b6523d0930d3';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string back_msg
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DriveToTargetResponse(null);
    if (msg.back_msg !== undefined) {
      resolved.back_msg = msg.back_msg;
    }
    else {
      resolved.back_msg = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: DriveToTargetRequest,
  Response: DriveToTargetResponse,
  md5sum() { return '97b31afcab8f9fd25010f502598a5e47'; },
  datatype() { return 'ball_chaser/DriveToTarget'; }
};
