;; Auto-generated. Do not edit!


(when (boundp 'ball_chaser::DriveToTarget)
  (if (not (find-package "BALL_CHASER"))
    (make-package "BALL_CHASER"))
  (shadow 'DriveToTarget (find-package "BALL_CHASER")))
(unless (find-package "BALL_CHASER::DRIVETOTARGET")
  (make-package "BALL_CHASER::DRIVETOTARGET"))
(unless (find-package "BALL_CHASER::DRIVETOTARGETREQUEST")
  (make-package "BALL_CHASER::DRIVETOTARGETREQUEST"))
(unless (find-package "BALL_CHASER::DRIVETOTARGETRESPONSE")
  (make-package "BALL_CHASER::DRIVETOTARGETRESPONSE"))

(in-package "ROS")





(defclass ball_chaser::DriveToTargetRequest
  :super ros::object
  :slots (_lnr_x _ang_z ))

(defmethod ball_chaser::DriveToTargetRequest
  (:init
   (&key
    ((:lnr_x __lnr_x) 0.0)
    ((:ang_z __ang_z) 0.0)
    )
   (send-super :init)
   (setq _lnr_x (float __lnr_x))
   (setq _ang_z (float __ang_z))
   self)
  (:lnr_x
   (&optional __lnr_x)
   (if __lnr_x (setq _lnr_x __lnr_x)) _lnr_x)
  (:ang_z
   (&optional __ang_z)
   (if __ang_z (setq _ang_z __ang_z)) _ang_z)
  (:serialization-length
   ()
   (+
    ;; float64 _lnr_x
    8
    ;; float64 _ang_z
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _lnr_x
       (sys::poke _lnr_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _ang_z
       (sys::poke _ang_z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _lnr_x
     (setq _lnr_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _ang_z
     (setq _ang_z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(defclass ball_chaser::DriveToTargetResponse
  :super ros::object
  :slots (_back_msg ))

(defmethod ball_chaser::DriveToTargetResponse
  (:init
   (&key
    ((:back_msg __back_msg) "")
    )
   (send-super :init)
   (setq _back_msg (string __back_msg))
   self)
  (:back_msg
   (&optional __back_msg)
   (if __back_msg (setq _back_msg __back_msg)) _back_msg)
  (:serialization-length
   ()
   (+
    ;; string _back_msg
    4 (length _back_msg)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _back_msg
       (write-long (length _back_msg) s) (princ _back_msg s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _back_msg
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _back_msg (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass ball_chaser::DriveToTarget
  :super ros::object
  :slots ())

(setf (get ball_chaser::DriveToTarget :md5sum-) "97b31afcab8f9fd25010f502598a5e47")
(setf (get ball_chaser::DriveToTarget :datatype-) "ball_chaser/DriveToTarget")
(setf (get ball_chaser::DriveToTarget :request) ball_chaser::DriveToTargetRequest)
(setf (get ball_chaser::DriveToTarget :response) ball_chaser::DriveToTargetResponse)

(defmethod ball_chaser::DriveToTargetRequest
  (:response () (instance ball_chaser::DriveToTargetResponse :init)))

(setf (get ball_chaser::DriveToTargetRequest :md5sum-) "97b31afcab8f9fd25010f502598a5e47")
(setf (get ball_chaser::DriveToTargetRequest :datatype-) "ball_chaser/DriveToTargetRequest")
(setf (get ball_chaser::DriveToTargetRequest :definition-)
      "float64 lnr_x
float64 ang_z
---
string back_msg
")

(setf (get ball_chaser::DriveToTargetResponse :md5sum-) "97b31afcab8f9fd25010f502598a5e47")
(setf (get ball_chaser::DriveToTargetResponse :datatype-) "ball_chaser/DriveToTargetResponse")
(setf (get ball_chaser::DriveToTargetResponse :definition-)
      "float64 lnr_x
float64 ang_z
---
string back_msg
")



(provide :ball_chaser/DriveToTarget "97b31afcab8f9fd25010f502598a5e47")


