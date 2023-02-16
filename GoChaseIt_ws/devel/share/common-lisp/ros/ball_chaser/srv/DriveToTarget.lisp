; Auto-generated. Do not edit!


(cl:in-package ball_chaser-srv)


;//! \htmlinclude DriveToTarget-request.msg.html

(cl:defclass <DriveToTarget-request> (roslisp-msg-protocol:ros-message)
  ((lnr_x
    :reader lnr_x
    :initarg :lnr_x
    :type cl:float
    :initform 0.0)
   (ang_z
    :reader ang_z
    :initarg :ang_z
    :type cl:float
    :initform 0.0))
)

(cl:defclass DriveToTarget-request (<DriveToTarget-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DriveToTarget-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DriveToTarget-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ball_chaser-srv:<DriveToTarget-request> is deprecated: use ball_chaser-srv:DriveToTarget-request instead.")))

(cl:ensure-generic-function 'lnr_x-val :lambda-list '(m))
(cl:defmethod lnr_x-val ((m <DriveToTarget-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ball_chaser-srv:lnr_x-val is deprecated.  Use ball_chaser-srv:lnr_x instead.")
  (lnr_x m))

(cl:ensure-generic-function 'ang_z-val :lambda-list '(m))
(cl:defmethod ang_z-val ((m <DriveToTarget-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ball_chaser-srv:ang_z-val is deprecated.  Use ball_chaser-srv:ang_z instead.")
  (ang_z m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DriveToTarget-request>) ostream)
  "Serializes a message object of type '<DriveToTarget-request>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'lnr_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'ang_z))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DriveToTarget-request>) istream)
  "Deserializes a message object of type '<DriveToTarget-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'lnr_x) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'ang_z) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DriveToTarget-request>)))
  "Returns string type for a service object of type '<DriveToTarget-request>"
  "ball_chaser/DriveToTargetRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DriveToTarget-request)))
  "Returns string type for a service object of type 'DriveToTarget-request"
  "ball_chaser/DriveToTargetRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DriveToTarget-request>)))
  "Returns md5sum for a message object of type '<DriveToTarget-request>"
  "97b31afcab8f9fd25010f502598a5e47")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DriveToTarget-request)))
  "Returns md5sum for a message object of type 'DriveToTarget-request"
  "97b31afcab8f9fd25010f502598a5e47")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DriveToTarget-request>)))
  "Returns full string definition for message of type '<DriveToTarget-request>"
  (cl:format cl:nil "float64 lnr_x~%float64 ang_z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DriveToTarget-request)))
  "Returns full string definition for message of type 'DriveToTarget-request"
  (cl:format cl:nil "float64 lnr_x~%float64 ang_z~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DriveToTarget-request>))
  (cl:+ 0
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DriveToTarget-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DriveToTarget-request
    (cl:cons ':lnr_x (lnr_x msg))
    (cl:cons ':ang_z (ang_z msg))
))
;//! \htmlinclude DriveToTarget-response.msg.html

(cl:defclass <DriveToTarget-response> (roslisp-msg-protocol:ros-message)
  ((back_msg
    :reader back_msg
    :initarg :back_msg
    :type cl:string
    :initform ""))
)

(cl:defclass DriveToTarget-response (<DriveToTarget-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DriveToTarget-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DriveToTarget-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ball_chaser-srv:<DriveToTarget-response> is deprecated: use ball_chaser-srv:DriveToTarget-response instead.")))

(cl:ensure-generic-function 'back_msg-val :lambda-list '(m))
(cl:defmethod back_msg-val ((m <DriveToTarget-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ball_chaser-srv:back_msg-val is deprecated.  Use ball_chaser-srv:back_msg instead.")
  (back_msg m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DriveToTarget-response>) ostream)
  "Serializes a message object of type '<DriveToTarget-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'back_msg))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'back_msg))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DriveToTarget-response>) istream)
  "Deserializes a message object of type '<DriveToTarget-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'back_msg) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'back_msg) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DriveToTarget-response>)))
  "Returns string type for a service object of type '<DriveToTarget-response>"
  "ball_chaser/DriveToTargetResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DriveToTarget-response)))
  "Returns string type for a service object of type 'DriveToTarget-response"
  "ball_chaser/DriveToTargetResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DriveToTarget-response>)))
  "Returns md5sum for a message object of type '<DriveToTarget-response>"
  "97b31afcab8f9fd25010f502598a5e47")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DriveToTarget-response)))
  "Returns md5sum for a message object of type 'DriveToTarget-response"
  "97b31afcab8f9fd25010f502598a5e47")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DriveToTarget-response>)))
  "Returns full string definition for message of type '<DriveToTarget-response>"
  (cl:format cl:nil "string back_msg~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DriveToTarget-response)))
  "Returns full string definition for message of type 'DriveToTarget-response"
  (cl:format cl:nil "string back_msg~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DriveToTarget-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'back_msg))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DriveToTarget-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DriveToTarget-response
    (cl:cons ':back_msg (back_msg msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DriveToTarget)))
  'DriveToTarget-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DriveToTarget)))
  'DriveToTarget-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DriveToTarget)))
  "Returns string type for a service object of type '<DriveToTarget>"
  "ball_chaser/DriveToTarget")