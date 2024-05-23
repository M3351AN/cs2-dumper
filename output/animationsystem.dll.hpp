// Generated using https://github.com/a2x/cs2-dumper
// 2024-05-23 01:29:07.135665300 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: animationsystem.dll
        // Classes count: 362
        // Enums count: 70
        namespace animationsystem_dll {
            // Alignment: 4
            // Members count: 17
            enum class SeqCmd_t : uint32_t {
                SeqCmd_Nop = 0x0,
                SeqCmd_LinearDelta = 0x1,
                SeqCmd_FetchFrameRange = 0x2,
                SeqCmd_Slerp = 0x3,
                SeqCmd_Add = 0x4,
                SeqCmd_Subtract = 0x5,
                SeqCmd_Scale = 0x6,
                SeqCmd_Copy = 0x7,
                SeqCmd_Blend = 0x8,
                SeqCmd_Worldspace = 0x9,
                SeqCmd_Sequence = 0xA,
                SeqCmd_FetchCycle = 0xB,
                SeqCmd_FetchFrame = 0xC,
                SeqCmd_IKLockInPlace = 0xD,
                SeqCmd_IKRestoreAll = 0xE,
                SeqCmd_ReverseSequence = 0xF,
                SeqCmd_Transform = 0x10
            };
            // Alignment: 4
            // Members count: 4
            enum class BoneTransformSpace_t : uint32_t {
                BoneTransformSpace_Invalid = 0xFFFFFFFFFFFFFFFF,
                BoneTransformSpace_Parent = 0x0,
                BoneTransformSpace_Model = 0x1,
                BoneTransformSpace_World = 0x2
            };
            // Alignment: 4
            // Members count: 5
            enum class CAnimationGraphVisualizerPrimitiveType : uint32_t {
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Text = 0x0,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Sphere = 0x1,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Line = 0x2,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Pie = 0x3,
                ANIMATIONGRAPHVISUALIZERPRIMITIVETYPE_Axis = 0x4
            };
            // Alignment: 1
            // Members count: 3
            enum class NmTransitionRule_t : uint8_t {
                AllowTransition = 0x0,
                ConditionallyAllowTransition = 0x1,
                BlockTransition = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class BinaryNodeTiming : uint32_t {
                UseChild1 = 0x0,
                UseChild2 = 0x1,
                SyncChildren = 0x2
            };
            // Alignment: 4
            // Members count: 7
            enum class SolveIKChainAnimNodeDebugSetting : uint32_t {
                SOLVEIKCHAINANIMNODEDEBUGSETTING_None = 0x0,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_X_Axis_Circle = 0x1,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Y_Axis_Circle = 0x2,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Z_Axis_Circle = 0x3,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Forward = 0x4,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Up = 0x5,
                SOLVEIKCHAINANIMNODEDEBUGSETTING_Left = 0x6
            };
            // Alignment: 1
            // Members count: 5
            enum class MovementGait_t : uint8_t {
                eInvalid = 0xFFFFFFFFFFFFFFFF,
                eWalk = 0x0,
                eJog = 0x1,
                eRun = 0x2,
                eSprint = 0x3
            };
            // Alignment: 4
            // Members count: 3
            enum class IKTargetCoordinateSystem : uint32_t {
                IKTARGETCOORDINATESYSTEM_WorldSpace = 0x0,
                IKTARGETCOORDINATESYSTEM_ModelSpace = 0x1,
                IKTARGETCOORDINATESYSTEM_COUNT = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class VPhysXAggregateData_t__VPhysXFlagEnum_t : uint32_t {
                FLAG_IS_POLYSOUP_GEOMETRY = 0x1,
                FLAG_LEVEL_COLLISION = 0x10,
                FLAG_IGNORE_SCALE_OBSOLETE_DO_NOT_USE = 0x20
            };
            // Alignment: 4
            // Members count: 2
            enum class MatterialAttributeTagType_t : uint32_t {
                MATERIAL_ATTRIBUTE_TAG_VALUE = 0x0,
                MATERIAL_ATTRIBUTE_TAG_COLOR = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class AnimPoseControl : uint32_t {
                NoPoseControl = 0x0,
                AbsolutePoseControl = 0x1,
                RelativePoseControl = 0x2
            };
            // Alignment: 1
            // Members count: 4
            enum class NmTransitionRuleCondition_t : uint8_t {
                AnyAllowed = 0x0,
                FullyAllowed = 0x1,
                ConditionallyAllowed = 0x2,
                Blocked = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class EDemoBoneSelectionMode : uint32_t {
                CaptureAllBones = 0x0,
                CaptureSelectedBones = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class StepPhase : uint32_t {
                StepPhase_OnGround = 0x0,
                StepPhase_InAir = 0x1
            };
            // Alignment: 4
            // Members count: 26
            enum class FlexOpCode_t : uint32_t {
                FLEX_OP_CONST = 0x1,
                FLEX_OP_FETCH1 = 0x2,
                FLEX_OP_FETCH2 = 0x3,
                FLEX_OP_ADD = 0x4,
                FLEX_OP_SUB = 0x5,
                FLEX_OP_MUL = 0x6,
                FLEX_OP_DIV = 0x7,
                FLEX_OP_NEG = 0x8,
                FLEX_OP_EXP = 0x9,
                FLEX_OP_OPEN = 0xA,
                FLEX_OP_CLOSE = 0xB,
                FLEX_OP_COMMA = 0xC,
                FLEX_OP_MAX = 0xD,
                FLEX_OP_MIN = 0xE,
                FLEX_OP_2WAY_0 = 0xF,
                FLEX_OP_2WAY_1 = 0x10,
                FLEX_OP_NWAY = 0x11,
                FLEX_OP_COMBO = 0x12,
                FLEX_OP_DOMINATE = 0x13,
                FLEX_OP_DME_LOWER_EYELID = 0x14,
                FLEX_OP_DME_UPPER_EYELID = 0x15,
                FLEX_OP_SQRT = 0x16,
                FLEX_OP_REMAPVALCLAMPED = 0x17,
                FLEX_OP_SIN = 0x18,
                FLEX_OP_COS = 0x19,
                FLEX_OP_ABS = 0x1A
            };
            // Alignment: 4
            // Members count: 2
            enum class AnimNodeNetworkMode : uint32_t {
                ServerAuthoritative = 0x0,
                ClientSimulate = 0x1
            };
            // Alignment: 4
            // Members count: 5
            enum class VPhysXBodyPart_t__VPhysXFlagEnum_t : uint32_t {
                FLAG_STATIC = 0x1,
                FLAG_KINEMATIC = 0x2,
                FLAG_JOINT = 0x4,
                FLAG_MASS = 0x8,
                FLAG_ALWAYS_DYNAMIC_ON_CLIENT = 0x10
            };
            // Alignment: 1
            // Members count: 9
            enum class AnimParamType_t : uint8_t {
                ANIMPARAM_UNKNOWN = 0x0,
                ANIMPARAM_BOOL = 0x1,
                ANIMPARAM_ENUM = 0x2,
                ANIMPARAM_INT = 0x3,
                ANIMPARAM_FLOAT = 0x4,
                ANIMPARAM_VECTOR = 0x5,
                ANIMPARAM_QUATERNION = 0x6,
                ANIMPARAM_GLOBALSYMBOL = 0x7,
                ANIMPARAM_COUNT = 0x8
            };
            // Alignment: 4
            // Members count: 3
            enum class IKTargetSource : uint32_t {
                IKTARGETSOURCE_Bone = 0x0,
                IKTARGETSOURCE_AnimgraphParameter = 0x1,
                IKTARGETSOURCE_COUNT = 0x2
            };
            // Alignment: 4
            // Members count: 15
            enum class PermModelInfo_t__FlagEnum : uint32_t {
                FLAG_TRANSLUCENT = 0x1,
                FLAG_TRANSLUCENT_TWO_PASS = 0x2,
                FLAG_MODEL_IS_RUNTIME_COMBINED = 0x4,
                FLAG_SOURCE1_IMPORT = 0x8,
                FLAG_MODEL_PART_CHILD = 0x10,
                FLAG_NAV_GEN_NONE = 0x20,
                FLAG_NAV_GEN_HULL = 0x40,
                FLAG_NO_FORCED_FADE = 0x800,
                FLAG_HAS_SKINNED_MESHES = 0x400,
                FLAG_DO_NOT_CAST_SHADOWS = 0x20000,
                FLAG_FORCE_PHONEME_CROSSFADE = 0x1000,
                FLAG_NO_ANIM_EVENTS = 0x100000,
                FLAG_ANIMATION_DRIVEN_FLEXES = 0x200000,
                FLAG_IMPLICIT_BIND_POSE_SEQUENCE = 0x400000,
                FLAG_MODEL_DOC = 0x800000
            };
            // Alignment: 4
            // Members count: 3
            enum class AnimParamNetworkSetting : uint32_t {
                Auto = 0x0,
                AlwaysNetwork = 0x1,
                NeverNetwork = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class MorphFlexControllerRemapType_t : uint32_t {
                MORPH_FLEXCONTROLLER_REMAP_PASSTHRU = 0x0,
                MORPH_FLEXCONTROLLER_REMAP_2WAY = 0x1,
                MORPH_FLEXCONTROLLER_REMAP_NWAY = 0x2,
                MORPH_FLEXCONTROLLER_REMAP_EYELID = 0x3
            };
            // Alignment: 4
            // Members count: 8
            enum class MeshDrawPrimitiveFlags_t : uint32_t {
                MESH_DRAW_FLAGS_NONE = 0x0,
                MESH_DRAW_FLAGS_USE_SHADOW_FAST_PATH = 0x1,
                MESH_DRAW_FLAGS_USE_COMPRESSED_NORMAL_TANGENT = 0x2,
                MESH_DRAW_INPUT_LAYOUT_IS_NOT_MATCHED_TO_MATERIAL = 0x8,
                MESH_DRAW_FLAGS_USE_COMPRESSED_PER_VERTEX_LIGHTING = 0x10,
                MESH_DRAW_FLAGS_USE_UNCOMPRESSED_PER_VERTEX_LIGHTING = 0x20,
                MESH_DRAW_FLAGS_CAN_BATCH_WITH_DYNAMIC_SHADER_CONSTANTS = 0x40,
                MESH_DRAW_FLAGS_DRAW_LAST = 0x80
            };
            // Alignment: 4
            // Members count: 4
            enum class ModelBoneFlexComponent_t : uint32_t {
                MODEL_BONE_FLEX_INVALID = 0xFFFFFFFFFFFFFFFF,
                MODEL_BONE_FLEX_TX = 0x0,
                MODEL_BONE_FLEX_TY = 0x1,
                MODEL_BONE_FLEX_TZ = 0x2
            };
            // Alignment: 1
            // Members count: 3
            enum class PoseType_t : uint8_t {
                POSETYPE_STATIC = 0x0,
                POSETYPE_DYNAMIC = 0x1,
                POSETYPE_INVALID = 0xFF
            };
            // Alignment: 4
            // Members count: 37
            enum class AnimValueSource : uint32_t {
                MoveHeading = 0x0,
                MoveSpeed = 0x1,
                ForwardSpeed = 0x2,
                StrafeSpeed = 0x3,
                FacingHeading = 0x4,
                ManualFacingHeading = 0x5,
                LookHeading = 0x6,
                LookPitch = 0x7,
                LookDistance = 0x8,
                Parameter = 0x9,
                WayPointHeading = 0xA,
                WayPointDistance = 0xB,
                BoundaryRadius = 0xC,
                TargetMoveHeading = 0xD,
                TargetMoveSpeed = 0xE,
                AccelerationHeading = 0xF,
                AccelerationSpeed = 0x10,
                SlopeHeading = 0x11,
                SlopeAngle = 0x12,
                SlopePitch = 0x13,
                SlopeYaw = 0x14,
                GoalDistance = 0x15,
                AccelerationLeftRight = 0x16,
                AccelerationFrontBack = 0x17,
                RootMotionSpeed = 0x18,
                RootMotionTurnSpeed = 0x19,
                MoveHeadingRelativeToLookHeading = 0x1A,
                MaxMoveSpeed = 0x1B,
                FingerCurl_Thumb = 0x1C,
                FingerCurl_Index = 0x1D,
                FingerCurl_Middle = 0x1E,
                FingerCurl_Ring = 0x1F,
                FingerCurl_Pinky = 0x20,
                FingerSplay_Thumb_Index = 0x21,
                FingerSplay_Index_Middle = 0x22,
                FingerSplay_Middle_Ring = 0x23,
                FingerSplay_Ring_Pinky = 0x24
            };
            // Alignment: 4
            // Members count: 2
            enum class RagdollPoseControl : uint32_t {
                Absolute = 0x0,
                Relative = 0x1
            };
            // Alignment: 4
            // Members count: 6
            enum class IKSolverType : uint32_t {
                IKSOLVER_Perlin = 0x0,
                IKSOLVER_TwoBone = 0x1,
                IKSOLVER_Fabrik = 0x2,
                IKSOLVER_DogLeg3Bone = 0x3,
                IKSOLVER_CCD = 0x4,
                IKSOLVER_COUNT = 0x5
            };
            // Alignment: 4
            // Members count: 2
            enum class Blend2DMode : uint32_t {
                Blend2DMode_General = 0x0,
                Blend2DMode_Directional = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class ChoiceChangeMethod : uint32_t {
                OnReset = 0x0,
                OnCycleEnd = 0x1,
                OnResetOrCycleEnd = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class ChoiceBlendMethod : uint32_t {
                SingleBlendTime = 0x0,
                PerChoiceBlendTimes = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class VPhysXConstraintParams_t__EnumFlags0_t : uint32_t {
                FLAG0_SHIFT_INTERPENETRATE = 0x0,
                FLAG0_SHIFT_CONSTRAIN = 0x1,
                FLAG0_SHIFT_BREAKABLE_FORCE = 0x2,
                FLAG0_SHIFT_BREAKABLE_TORQUE = 0x3
            };
            // Alignment: 4
            // Members count: 4
            enum class BlendKeyType : uint32_t {
                BlendKey_UserValue = 0x0,
                BlendKey_Velocity = 0x1,
                BlendKey_Distance = 0x2,
                BlendKey_RemainingDistance = 0x3
            };
            // Alignment: 4
            // Members count: 4
            enum class StateActionBehavior : uint32_t {
                STATETAGBEHAVIOR_ACTIVE_WHILE_CURRENT = 0x0,
                STATETAGBEHAVIOR_FIRE_ON_ENTER = 0x1,
                STATETAGBEHAVIOR_FIRE_ON_EXIT = 0x2,
                STATETAGBEHAVIOR_FIRE_ON_ENTER_AND_EXIT = 0x3
            };
            // Alignment: 1
            // Members count: 6
            enum class NmFootPhaseCondition_t : uint8_t {
                LeftFootDown = 0x0,
                LeftFootPassing = 0x1,
                LeftPhase = 0x4,
                RightFootDown = 0x2,
                RightFootPassing = 0x3,
                RightPhase = 0x5
            };
            // Alignment: 4
            // Members count: 22
            enum class ModelSkeletonData_t__BoneFlags_t : uint32_t {
                FLAG_NO_BONE_FLAGS = 0x0,
                FLAG_BONEFLEXDRIVER = 0x4,
                FLAG_CLOTH = 0x8,
                FLAG_PHYSICS = 0x10,
                FLAG_ATTACHMENT = 0x20,
                FLAG_ANIMATION = 0x40,
                FLAG_MESH = 0x80,
                FLAG_HITBOX = 0x100,
                FLAG_BONE_USED_BY_VERTEX_LOD0 = 0x400,
                FLAG_BONE_USED_BY_VERTEX_LOD1 = 0x800,
                FLAG_BONE_USED_BY_VERTEX_LOD2 = 0x1000,
                FLAG_BONE_USED_BY_VERTEX_LOD3 = 0x2000,
                FLAG_BONE_USED_BY_VERTEX_LOD4 = 0x4000,
                FLAG_BONE_USED_BY_VERTEX_LOD5 = 0x8000,
                FLAG_BONE_USED_BY_VERTEX_LOD6 = 0x10000,
                FLAG_BONE_USED_BY_VERTEX_LOD7 = 0x20000,
                FLAG_BONE_MERGE_READ = 0x40000,
                FLAG_BONE_MERGE_WRITE = 0x80000,
                FLAG_ALL_BONE_FLAGS = 0xFFFFF,
                BLEND_PREALIGNED = 0x100000,
                FLAG_RIGIDLENGTH = 0x200000,
                FLAG_PROCEDURAL = 0x400000
            };
            // Alignment: 4
            // Members count: 4
            enum class MorphBundleType_t : uint32_t {
                MORPH_BUNDLE_TYPE_NONE = 0x0,
                MORPH_BUNDLE_TYPE_POSITION_SPEED = 0x1,
                MORPH_BUNDLE_TYPE_NORMAL_WRINKLE = 0x2,
                MORPH_BUNDLE_TYPE_COUNT = 0x3
            };
            // Alignment: 4
            // Members count: 5
            enum class ResetCycleOption : uint32_t {
                Beginning = 0x0,
                SameCycleAsSource = 0x1,
                InverseSourceCycle = 0x2,
                FixedValue = 0x3,
                SameTimeAsSource = 0x4
            };
            // Alignment: 4
            // Members count: 4
            enum class IKChannelMode : uint32_t {
                TwoBone = 0x0,
                TwoBone_Translate = 0x1,
                OneBone = 0x2,
                OneBone_Translate = 0x3
            };
            // Alignment: 1
            // Members count: 4
            enum class NmFootPhase_t : uint8_t {
                LeftFootDown = 0x0,
                RightFootPassing = 0x1,
                RightFootDown = 0x2,
                LeftFootPassing = 0x3
            };
            // Alignment: 4
            // Members count: 3
            enum class FootstepLandedFootSoundType_t : uint32_t {
                FOOTSOUND_Left = 0x0,
                FOOTSOUND_Right = 0x1,
                FOOTSOUND_UseOverrideSound = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class FootLockSubVisualization : uint32_t {
                FOOTLOCKSUBVISUALIZATION_ReachabilityAnalysis = 0x0,
                FOOTLOCKSUBVISUALIZATION_IKSolve = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class NmFrameSnapEventMode_t : uint32_t {
                Floor = 0x0,
                Round = 0x1
            };
            // Alignment: 4
            // Members count: 3
            enum class FootPinningTimingSource : uint32_t {
                FootMotion = 0x0,
                Tag = 0x1,
                Parameter = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class DampingSpeedFunction : uint32_t {
                NoDamping = 0x0,
                Constant = 0x1,
                Spring = 0x2
            };
            // Alignment: 4
            // Members count: 6
            enum class AnimationProcessingType_t : uint32_t {
                ANIMATION_PROCESSING_SERVER_SIMULATION = 0x0,
                ANIMATION_PROCESSING_CLIENT_SIMULATION = 0x1,
                ANIMATION_PROCESSING_CLIENT_PREDICTION = 0x2,
                ANIMATION_PROCESSING_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_PROCESSING_CLIENT_RENDER = 0x4,
                ANIMATION_PROCESSING_MAX = 0x5
            };
            // Alignment: 4
            // Members count: 3
            enum class JiggleBoneSimSpace : uint32_t {
                SimSpace_Local = 0x0,
                SimSpace_Model = 0x1,
                SimSpace_World = 0x2
            };
            // Alignment: 4
            // Members count: 2
            enum class StanceOverrideMode : uint32_t {
                Sequence = 0x0,
                Node = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class IkEndEffectorType : uint32_t {
                IkEndEffector_Attachment = 0x0,
                IkEndEffector_Bone = 0x1
            };
            // Alignment: 2
            // Members count: 3
            enum class AnimScriptType : uint16_t {
                ANIMSCRIPT_TYPE_INVALID = 0xFFFFFFFFFFFFFFFF,
                ANIMSCRIPT_FUSE_GENERAL = 0x0,
                ANIMSCRIPT_FUSE_STATEMACHINE = 0x1
            };
            // Alignment: 4
            // Members count: 4
            enum class SeqPoseSetting_t : uint32_t {
                SEQ_POSE_SETTING_CONSTANT = 0x0,
                SEQ_POSE_SETTING_ROTATION = 0x1,
                SEQ_POSE_SETTING_POSITION = 0x2,
                SEQ_POSE_SETTING_VELOCITY = 0x3
            };
            // Alignment: 4
            // Members count: 13
            enum class AnimParamButton_t : uint32_t {
                ANIMPARAM_BUTTON_NONE = 0x0,
                ANIMPARAM_BUTTON_DPAD_UP = 0x1,
                ANIMPARAM_BUTTON_DPAD_RIGHT = 0x2,
                ANIMPARAM_BUTTON_DPAD_DOWN = 0x3,
                ANIMPARAM_BUTTON_DPAD_LEFT = 0x4,
                ANIMPARAM_BUTTON_A = 0x5,
                ANIMPARAM_BUTTON_B = 0x6,
                ANIMPARAM_BUTTON_X = 0x7,
                ANIMPARAM_BUTTON_Y = 0x8,
                ANIMPARAM_BUTTON_LEFT_SHOULDER = 0x9,
                ANIMPARAM_BUTTON_RIGHT_SHOULDER = 0xA,
                ANIMPARAM_BUTTON_LTRIGGER = 0xB,
                ANIMPARAM_BUTTON_RTRIGGER = 0xC
            };
            // Alignment: 4
            // Members count: 3
            enum class SelectorTagBehavior_t : uint32_t {
                SelectorTagBehavior_OnWhileCurrent = 0x0,
                SelectorTagBehavior_OffWhenFinished = 0x1,
                SelectorTagBehavior_OffBeforeFinished = 0x2
            };
            // Alignment: 1
            // Members count: 3
            enum class CNmBoneMask__WeightInfo_t : uint8_t {
                Zero = 0x0,
                Mixed = 0x1,
                One = 0x2
            };
            // Alignment: 4
            // Members count: 18
            enum class ParticleAttachment_t : uint32_t {
                PATTACH_INVALID = 0xFFFFFFFFFFFFFFFF,
                PATTACH_ABSORIGIN = 0x0,
                PATTACH_ABSORIGIN_FOLLOW = 0x1,
                PATTACH_CUSTOMORIGIN = 0x2,
                PATTACH_CUSTOMORIGIN_FOLLOW = 0x3,
                PATTACH_POINT = 0x4,
                PATTACH_POINT_FOLLOW = 0x5,
                PATTACH_EYES_FOLLOW = 0x6,
                PATTACH_OVERHEAD_FOLLOW = 0x7,
                PATTACH_WORLDORIGIN = 0x8,
                PATTACH_ROOTBONE_FOLLOW = 0x9,
                PATTACH_RENDERORIGIN_FOLLOW = 0xA,
                PATTACH_MAIN_VIEW = 0xB,
                PATTACH_WATERWAKE = 0xC,
                PATTACH_CENTER_FOLLOW = 0xD,
                PATTACH_CUSTOM_GAME_STATE_1 = 0xE,
                PATTACH_HEALTHBAR = 0xF,
                MAX_PATTACH_TYPES = 0x10
            };
            // Alignment: 4
            // Members count: 3
            enum class FieldNetworkOption : uint32_t {
                Auto = 0x0,
                ForceEnable = 0x1,
                ForceDisable = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class VPhysXJoint_t__Flags_t : uint32_t {
                JOINT_FLAGS_NONE = 0x0,
                JOINT_FLAGS_BODY1_FIXED = 0x1,
                JOINT_FLAGS_USE_BLOCK_SOLVER = 0x2
            };
            // Alignment: 1
            // Members count: 3
            enum class VelocityMetricMode : uint8_t {
                DirectionOnly = 0x0,
                MagnitudeOnly = 0x1,
                DirectionAndMagnitude = 0x2
            };
            // Alignment: 4
            // Members count: 3
            enum class FacingMode : uint32_t {
                FacingMode_Manual = 0x0,
                FacingMode_Path = 0x1,
                FacingMode_LookTarget = 0x2
            };
            // Alignment: 4
            // Members count: 4
            enum class AimMatrixBlendMode : uint32_t {
                AimMatrixBlendMode_None = 0x0,
                AimMatrixBlendMode_Additive = 0x1,
                AimMatrixBlendMode_ModelSpaceAdditive = 0x2,
                AimMatrixBlendMode_BoneMask = 0x3
            };
            // Alignment: 4
            // Members count: 7
            enum class AnimationSnapshotType_t : uint32_t {
                ANIMATION_SNAPSHOT_SERVER_SIMULATION = 0x0,
                ANIMATION_SNAPSHOT_CLIENT_SIMULATION = 0x1,
                ANIMATION_SNAPSHOT_CLIENT_PREDICTION = 0x2,
                ANIMATION_SNAPSHOT_CLIENT_INTERPOLATION = 0x3,
                ANIMATION_SNAPSHOT_CLIENT_RENDER = 0x4,
                ANIMATION_SNAPSHOT_FINAL_COMPOSITE = 0x5,
                ANIMATION_SNAPSHOT_MAX = 0x6
            };
            // Alignment: 4
            // Members count: 8
            enum class FootFallTagFoot_t : uint32_t {
                FOOT1 = 0x0,
                FOOT2 = 0x1,
                FOOT3 = 0x2,
                FOOT4 = 0x3,
                FOOT5 = 0x4,
                FOOT6 = 0x5,
                FOOT7 = 0x6,
                FOOT8 = 0x7
            };
            // Alignment: 4
            // Members count: 4
            enum class ChoiceMethod : uint32_t {
                WeightedRandom = 0x0,
                WeightedRandomNoRepeat = 0x1,
                Iterate = 0x2,
                IterateRandom = 0x3
            };
            // Alignment: 4
            // Members count: 13
            enum class AnimVectorSource : uint32_t {
                MoveDirection = 0x0,
                FacingDirection = 0x1,
                LookDirection = 0x2,
                VectorParameter = 0x3,
                WayPointDirection = 0x4,
                Acceleration = 0x5,
                SlopeNormal = 0x6,
                SlopeNormal_WorldSpace = 0x7,
                LookTarget = 0x8,
                LookTarget_WorldSpace = 0x9,
                WayPointPosition = 0xA,
                GoalPosition = 0xB,
                RootMotionVelocity = 0xC
            };
            // Alignment: 4
            // Members count: 4
            enum class IkTargetType : uint32_t {
                IkTarget_Attachment = 0x0,
                IkTarget_Bone = 0x1,
                IkTarget_Parameter_ModelSpace = 0x2,
                IkTarget_Parameter_WorldSpace = 0x3
            };
            // Alignment: 4
            // Members count: 4
            enum class BoneMaskBlendSpace : uint32_t {
                BlendSpace_Parent = 0x0,
                BlendSpace_Model = 0x1,
                BlendSpace_Model_RotationOnly = 0x2,
                BlendSpace_Model_TranslationOnly = 0x3
            };
            // Alignment: 4
            // Members count: 5
            enum class ModelConfigAttachmentType_t : uint32_t {
                MODEL_CONFIG_ATTACHMENT_INVALID = 0xFFFFFFFFFFFFFFFF,
                MODEL_CONFIG_ATTACHMENT_BONE_OR_ATTACHMENT = 0x0,
                MODEL_CONFIG_ATTACHMENT_ROOT_RELATIVE = 0x1,
                MODEL_CONFIG_ATTACHMENT_BONEMERGE = 0x2,
                MODEL_CONFIG_ATTACHMENT_COUNT = 0x3
            };
            // Alignment: 4
            // Members count: 2
            enum class BinaryNodeChildOption : uint32_t {
                Child1 = 0x0,
                Child2 = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class JumpCorrectionMethod : uint32_t {
                ScaleMotion = 0x0,
                AddCorrectionDelta = 0x1
            };
            // Alignment: 4
            // Members count: 2
            enum class MoodType_t : uint32_t {
                eMoodType_Head = 0x0,
                eMoodType_Body = 0x1
            };
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimFrameBlockAnim {
                constexpr std::ptrdiff_t m_nStartFrame = 0x0; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0x4; // int32
                constexpr std::ptrdiff_t m_segmentIndexArray = 0x8; // CUtlVector<int32>
            }
            // Parent: CLeafUpdateNode
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CZeroPoseUpdateNode {
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSlowDownOnSlopesUpdateNode {
                constexpr std::ptrdiff_t m_flSlowDownStrength = 0x68; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParameterBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_group = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x28; // AnimParamID
                constexpr std::ptrdiff_t m_componentName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_bNetworkingRequested = 0x60; // bool
                constexpr std::ptrdiff_t m_bIsReferenced = 0x61; // bool
            }
            // Parent: CAnimTagBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSequenceFinishedAnimTag {
                constexpr std::ptrdiff_t m_sequenceName = 0x50; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSceneObjectData {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
                constexpr std::ptrdiff_t m_drawCalls = 0x18; // CUtlVector<CMaterialDrawDescriptor>
                constexpr std::ptrdiff_t m_drawBounds = 0x30; // CUtlVector<AABB_t>
                constexpr std::ptrdiff_t m_meshlets = 0x48; // CUtlVector<CMeshletDescriptor>
                constexpr std::ptrdiff_t m_vTintColor = 0x60; // Vector4D
            }
            // Parent: CCycleBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycle {
            }
            // Parent: CLeafUpdateNode
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CInputStreamUpdateNode {
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CIntAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // int32
                constexpr std::ptrdiff_t m_minValue = 0x7C; // int32
                constexpr std::ptrdiff_t m_maxValue = 0x80; // int32
            }
            // Parent: CNmEvent
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFrameSnapEvent {
                constexpr std::ptrdiff_t m_frameSnapMode = 0x10; // NmFrameSnapEventMode_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimNodePath {
                constexpr std::ptrdiff_t m_path = 0x0; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nCount = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimNodeOutputID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSyncTrack {
                constexpr std::ptrdiff_t m_syncEvents = 0x0; // CUtlLeanVectorFixedGrowable<CNmSyncTrack::Event_t>
                constexpr std::ptrdiff_t m_nStartEventOffset = 0xA8; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqBoneMaskList {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nLocalBoneArray = 0x10; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_flBoneWeightArray = 0x28; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flDefaultMorphCtrlWeight = 0x40; // float32
                constexpr std::ptrdiff_t m_morphCtrlWeightArray = 0x48; // CUtlVector<CUtlPair<CBufferString,float32>>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimEncodedFrames {
                constexpr std::ptrdiff_t m_fileName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nFrames = 0x10; // int32
                constexpr std::ptrdiff_t m_nFramesPerBlock = 0x14; // int32
                constexpr std::ptrdiff_t m_frameblockArray = 0x18; // CUtlVector<CAnimFrameBlockAnim>
                constexpr std::ptrdiff_t m_usageDifferences = 0x30; // CAnimEncodeDifference
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SampleCode {
                constexpr std::ptrdiff_t m_subCode = 0x0; // uint8[8]
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCachedPose {
                constexpr std::ptrdiff_t m_transforms = 0x8; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_morphWeights = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_hSequence = 0x38; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x3C; // float32
            }
            // Parent: CAnimTagBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CTaskStatusAnimTag {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphConfig {
                constexpr std::ptrdiff_t m_paramValues = 0x0; // float32[4]
                constexpr std::ptrdiff_t m_flDuration = 0x10; // float32
                constexpr std::ptrdiff_t m_nMotionIndex = 0x14; // MotionIndex
                constexpr std::ptrdiff_t m_nSampleStart = 0x18; // int32
                constexpr std::ptrdiff_t m_nSampleCount = 0x1C; // int32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionSearchNode {
                constexpr std::ptrdiff_t m_children = 0x0; // CUtlVector<CMotionSearchNode*>
                constexpr std::ptrdiff_t m_quantizer = 0x18; // CVectorQuantizer
                constexpr std::ptrdiff_t m_sampleCodes = 0x38; // CUtlVector<CUtlVector<SampleCode>>
                constexpr std::ptrdiff_t m_sampleIndices = 0x50; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_selectableSamples = 0x68; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimActivity {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nActivity = 0x10; // int32
                constexpr std::ptrdiff_t m_nFlags = 0x14; // int32
                constexpr std::ptrdiff_t m_nWeight = 0x18; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimScriptManager {
                constexpr std::ptrdiff_t m_scriptInfo = 0x10; // CUtlVector<ScriptInfo_t>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationDecodeDebugDumpElement_t {
                constexpr std::ptrdiff_t m_nEntityIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_poseParams = 0x10; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_decodeOps = 0x28; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_internalOps = 0x40; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_decodedAnims = 0x58; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ConfigIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nConfig = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXCollisionAttributes_t {
                constexpr std::ptrdiff_t m_CollisionGroup = 0x0; // uint32
                constexpr std::ptrdiff_t m_InteractAs = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractWith = 0x20; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_InteractExclude = 0x38; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_CollisionGroupString = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_InteractAsStrings = 0x58; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractWithStrings = 0x70; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_InteractExcludeStrings = 0x88; // CUtlVector<CUtlString>
            }
            // Parent: CLeafUpdateNode
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSequenceUpdateNode {
                constexpr std::ptrdiff_t m_paramSpans = 0x60; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x94; // HSequence
                constexpr std::ptrdiff_t m_playbackSpeed = 0x98; // float32
                constexpr std::ptrdiff_t m_duration = 0x9C; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xA0; // bool
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqSeqDescFlag {
                constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
                constexpr std::ptrdiff_t m_bSnap = 0x1; // bool
                constexpr std::ptrdiff_t m_bAutoplay = 0x2; // bool
                constexpr std::ptrdiff_t m_bPost = 0x3; // bool
                constexpr std::ptrdiff_t m_bHidden = 0x4; // bool
                constexpr std::ptrdiff_t m_bMulti = 0x5; // bool
                constexpr std::ptrdiff_t m_bLegacyDelta = 0x6; // bool
                constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x7; // bool
                constexpr std::ptrdiff_t m_bLegacyCyclepose = 0x8; // bool
                constexpr std::ptrdiff_t m_bLegacyRealtime = 0x9; // bool
                constexpr std::ptrdiff_t m_bModelDoc = 0xA; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelInfo_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_vHullMin = 0x4; // Vector
                constexpr std::ptrdiff_t m_vHullMax = 0x10; // Vector
                constexpr std::ptrdiff_t m_vViewMin = 0x1C; // Vector
                constexpr std::ptrdiff_t m_vViewMax = 0x28; // Vector
                constexpr std::ptrdiff_t m_flMass = 0x34; // float32
                constexpr std::ptrdiff_t m_vEyePosition = 0x38; // Vector
                constexpr std::ptrdiff_t m_flMaxEyeDeflection = 0x44; // float32
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_keyValueText = 0x50; // CUtlString
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace StanceInfo_t {
                constexpr std::ptrdiff_t m_vPosition = 0x0; // Vector
                constexpr std::ptrdiff_t m_flDirection = 0xC; // float32
            }
            // Parent: None
            // Fields count: 1
            namespace IKBoneNameAndIndex_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStanceScaleUpdateNode {
                constexpr std::ptrdiff_t m_hParam = 0x68; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 17
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace HitReactFixedSettings_t {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nEffectedBoneCount = 0x4; // int32
                constexpr std::ptrdiff_t m_flMaxImpactForce = 0x8; // float32
                constexpr std::ptrdiff_t m_flMinImpactForce = 0xC; // float32
                constexpr std::ptrdiff_t m_flWhipImpactScale = 0x10; // float32
                constexpr std::ptrdiff_t m_flCounterRotationScale = 0x14; // float32
                constexpr std::ptrdiff_t m_flDistanceFadeScale = 0x18; // float32
                constexpr std::ptrdiff_t m_flPropagationScale = 0x1C; // float32
                constexpr std::ptrdiff_t m_flWhipDelay = 0x20; // float32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x24; // float32
                constexpr std::ptrdiff_t m_flWhipSpringStrength = 0x28; // float32
                constexpr std::ptrdiff_t m_flMaxAngleRadians = 0x2C; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x30; // int32
                constexpr std::ptrdiff_t m_flHipBoneTranslationScale = 0x34; // float32
                constexpr std::ptrdiff_t m_flHipDipSpringStrength = 0x38; // float32
                constexpr std::ptrdiff_t m_flHipDipImpactScale = 0x3C; // float32
                constexpr std::ptrdiff_t m_flHipDipDelay = 0x40; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimTagBase {
                constexpr std::ptrdiff_t m_name = 0x18; // CGlobalSymbol
                constexpr std::ptrdiff_t m_group = 0x20; // CGlobalSymbol
                constexpr std::ptrdiff_t m_tagID = 0x28; // AnimTagID
                constexpr std::ptrdiff_t m_bIsReferenced = 0x40; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraph {
                constexpr std::ptrdiff_t m_paramSpans = 0x10; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pRootNode = 0x40; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_nParameterCount = 0x48; // int32
                constexpr std::ptrdiff_t m_nConfigStartIndex = 0x4C; // int32
                constexpr std::ptrdiff_t m_nConfigCount = 0x50; // int32
                constexpr std::ptrdiff_t m_bLoop = 0x54; // bool
            }
            // Parent: AnimationSnapshotBase_t
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationSnapshot_t {
                constexpr std::ptrdiff_t m_nEntIndex = 0x110; // int32
                constexpr std::ptrdiff_t m_modelName = 0x118; // CUtlString
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqTransition {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float32
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphSettingsGroup {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphDebugReplay {
                constexpr std::ptrdiff_t m_animGraphFileName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_frameList = 0x48; // CUtlVector<CSmartPtr<CAnimReplayFrame>>
                constexpr std::ptrdiff_t m_startIndex = 0x60; // int32
                constexpr std::ptrdiff_t m_writeIndex = 0x64; // int32
                constexpr std::ptrdiff_t m_frameCount = 0x68; // int32
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CVectorAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // Vector
                constexpr std::ptrdiff_t m_bInterpolate = 0x84; // bool
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStanceOverrideUpdateNode {
                constexpr std::ptrdiff_t m_footStanceInfo = 0x68; // CUtlVector<StanceInfo_t>
                constexpr std::ptrdiff_t m_pStanceSourceNode = 0x80; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_hParameter = 0x90; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eMode = 0x94; // StanceOverrideMode
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace LookAtBone_t {
                constexpr std::ptrdiff_t m_index = 0x0; // int32
                constexpr std::ptrdiff_t m_weight = 0x4; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimEncodeDifference {
                constexpr std::ptrdiff_t m_boneArray = 0x0; // CUtlVector<CAnimBoneDifference>
                constexpr std::ptrdiff_t m_morphArray = 0x18; // CUtlVector<CAnimMorphDifference>
                constexpr std::ptrdiff_t m_userArray = 0x30; // CUtlVector<CAnimUserDifference>
                constexpr std::ptrdiff_t m_bHasRotationBitArray = 0x48; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasMovementBitArray = 0x60; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasMorphBitArray = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_bHasUserBitArray = 0x90; // CUtlVector<uint8>
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRootUpdateNode {
            }
            // Parent: CLeafUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphUpdateNode {
                constexpr std::ptrdiff_t m_pMotionGraph = 0x58; // CSmartPtr<CMotionGraph>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParamHandle {
                constexpr std::ptrdiff_t m_type = 0x0; // AnimParamType_t
                constexpr std::ptrdiff_t m_index = 0x1; // uint8
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace WeightList {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_weights = 0x8; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionIndex {
                constexpr std::ptrdiff_t m_nGroup = 0x0; // uint16
                constexpr std::ptrdiff_t m_nMotion = 0x2; // uint16
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FollowAttachmentSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_boneIndex = 0x80; // int32
                constexpr std::ptrdiff_t m_bMatchTranslation = 0x84; // bool
                constexpr std::ptrdiff_t m_bMatchRotation = 0x85; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimNodeID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLookComponentUpdater {
                constexpr std::ptrdiff_t m_hLookHeading = 0x34; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookHeadingVelocity = 0x36; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookPitch = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDistance = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookDirection = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTarget = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hLookTargetWorldSpace = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bNetworkLookTarget = 0x42; // bool
            }
            // Parent: CAnimGraphSettingsGroup
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimGraphNetworkSettings {
                constexpr std::ptrdiff_t m_bNetworkingEnabled = 0x20; // bool
            }
            // Parent: CLeafUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSingleFrameUpdateNode {
                constexpr std::ptrdiff_t m_actions = 0x58; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
                constexpr std::ptrdiff_t m_hPoseCacheHandle = 0x70; // CPoseHandle
                constexpr std::ptrdiff_t m_hSequence = 0x74; // HSequence
                constexpr std::ptrdiff_t m_flCycle = 0x78; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlockSelectionMetricEvaluator {
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigList {
                constexpr std::ptrdiff_t m_bHideMaterialGroupInTools = 0x0; // bool
                constexpr std::ptrdiff_t m_bHideRenderColorInTools = 0x1; // bool
                constexpr std::ptrdiff_t m_Configs = 0x8; // CUtlVector<CModelConfig*>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqAutoLayerFlag {
                constexpr std::ptrdiff_t m_bPost = 0x0; // bool
                constexpr std::ptrdiff_t m_bSpline = 0x1; // bool
                constexpr std::ptrdiff_t m_bXFade = 0x2; // bool
                constexpr std::ptrdiff_t m_bNoBlend = 0x3; // bool
                constexpr std::ptrdiff_t m_bLocal = 0x4; // bool
                constexpr std::ptrdiff_t m_bPose = 0x5; // bool
                constexpr std::ptrdiff_t m_bFetchFrame = 0x6; // bool
                constexpr std::ptrdiff_t m_bSubtract = 0x7; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimStateID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelBoneFlexDriver_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_boneNameToken = 0x8; // uint32
                constexpr std::ptrdiff_t m_controls = 0x10; // CUtlVector<ModelBoneFlexDriverControl_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_morphRectDatas = 0x8; // CUtlVector<CMorphRectData>
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootPinningUpdateNode {
                constexpr std::ptrdiff_t m_poseOpFixedData = 0x70; // FootPinningPoseOpFixedData_t
                constexpr std::ptrdiff_t m_eTimingSource = 0xA0; // FootPinningTimingSource
                constexpr std::ptrdiff_t m_params = 0xA8; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_bResetChild = 0xC0; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqPoseSetting {
                constexpr std::ptrdiff_t m_sPoseParameter = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_sAttachment = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_sReferenceSequence = 0x20; // CBufferString
                constexpr std::ptrdiff_t m_flValue = 0x30; // float32
                constexpr std::ptrdiff_t m_bX = 0x34; // bool
                constexpr std::ptrdiff_t m_bY = 0x35; // bool
                constexpr std::ptrdiff_t m_bZ = 0x36; // bool
                constexpr std::ptrdiff_t m_eType = 0x38; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAttachment {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_influenceNames = 0x8; // CUtlString[3]
                constexpr std::ptrdiff_t m_vInfluenceRotations = 0x20; // Quaternion[3]
                constexpr std::ptrdiff_t m_vInfluenceOffsets = 0x50; // Vector[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x74; // float32[3]
                constexpr std::ptrdiff_t m_bInfluenceRootTransform = 0x80; // bool[3]
                constexpr std::ptrdiff_t m_nInfluences = 0x83; // uint8
                constexpr std::ptrdiff_t m_bIgnoreRotation = 0x84; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDrawCullingData {
                constexpr std::ptrdiff_t m_vConeApex = 0x0; // Vector
                constexpr std::ptrdiff_t m_ConeAxis = 0xC; // int8[3]
                constexpr std::ptrdiff_t m_ConeCutoff = 0xF; // int8
            }
            // Parent: None
            // Fields count: 24
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXJoint_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // uint16
                constexpr std::ptrdiff_t m_nBody1 = 0x2; // uint16
                constexpr std::ptrdiff_t m_nBody2 = 0x4; // uint16
                constexpr std::ptrdiff_t m_nFlags = 0x6; // uint16
                constexpr std::ptrdiff_t m_Frame1 = 0x10; // CTransform
                constexpr std::ptrdiff_t m_Frame2 = 0x30; // CTransform
                constexpr std::ptrdiff_t m_bEnableCollision = 0x50; // bool
                constexpr std::ptrdiff_t m_bEnableLinearLimit = 0x51; // bool
                constexpr std::ptrdiff_t m_LinearLimit = 0x54; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableLinearMotor = 0x5C; // bool
                constexpr std::ptrdiff_t m_vLinearTargetVelocity = 0x60; // Vector
                constexpr std::ptrdiff_t m_flMaxForce = 0x6C; // float32
                constexpr std::ptrdiff_t m_bEnableSwingLimit = 0x70; // bool
                constexpr std::ptrdiff_t m_SwingLimit = 0x74; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableTwistLimit = 0x7C; // bool
                constexpr std::ptrdiff_t m_TwistLimit = 0x80; // VPhysXRange_t
                constexpr std::ptrdiff_t m_bEnableAngularMotor = 0x88; // bool
                constexpr std::ptrdiff_t m_vAngularTargetVelocity = 0x8C; // Vector
                constexpr std::ptrdiff_t m_flMaxTorque = 0x98; // float32
                constexpr std::ptrdiff_t m_flLinearFrequency = 0x9C; // float32
                constexpr std::ptrdiff_t m_flLinearDampingRatio = 0xA0; // float32
                constexpr std::ptrdiff_t m_flAngularFrequency = 0xA4; // float32
                constexpr std::ptrdiff_t m_flAngularDampingRatio = 0xA8; // float32
                constexpr std::ptrdiff_t m_flFriction = 0xAC; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateNodeTransitionData {
                constexpr std::ptrdiff_t m_curve = 0x0; // CBlendCurve
                constexpr std::ptrdiff_t m_blendDuration = 0x8; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_resetCycleValue = 0x10; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_bReset = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_resetCycleOption = 0x0; // bitfield:3
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTimeRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_bMatchByTimeRemaining = 0x50; // bool
                constexpr std::ptrdiff_t m_flMaxTimeRemaining = 0x54; // float32
                constexpr std::ptrdiff_t m_bFilterByTimeRemaining = 0x58; // bool
                constexpr std::ptrdiff_t m_flMinTimeRemaining = 0x5C; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement {
                constexpr std::ptrdiff_t m_ElementName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_NestedElements = 0x10; // CUtlVector<CModelConfigElement*>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootFixedSettings {
                constexpr std::ptrdiff_t m_traceSettings = 0x0; // TraceSettings_t
                constexpr std::ptrdiff_t m_vFootBaseBindPosePositionMS = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_flFootBaseLength = 0x20; // float32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x24; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x28; // float32
                constexpr std::ptrdiff_t m_footstepLandedTagIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_bEnableTracing = 0x30; // bool
                constexpr std::ptrdiff_t m_flTraceAngleBlend = 0x34; // float32
                constexpr std::ptrdiff_t m_nDisableTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_nFootIndex = 0x3C; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfig {
                constexpr std::ptrdiff_t m_ConfigName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_Elements = 0x8; // CUtlVector<CModelConfigElement*>
                constexpr std::ptrdiff_t m_bTopLevel = 0x20; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimComponentID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXAggregateData_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint16
                constexpr std::ptrdiff_t m_nRefCounter = 0x2; // uint16
                constexpr std::ptrdiff_t m_bonesHash = 0x8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_boneNames = 0x20; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_indexNames = 0x38; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_indexHash = 0x50; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_bindPose = 0x68; // CUtlVector<matrix3x4a_t>
                constexpr std::ptrdiff_t m_parts = 0x80; // CUtlVector<VPhysXBodyPart_t>
                constexpr std::ptrdiff_t m_constraints2 = 0x98; // CUtlVector<VPhysXConstraint2_t>
                constexpr std::ptrdiff_t m_joints = 0xB0; // CUtlVector<VPhysXJoint_t>
                constexpr std::ptrdiff_t m_pFeModel = 0xC8; // PhysFeModelDesc_t*
                constexpr std::ptrdiff_t m_boneParents = 0xD0; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_surfacePropertyHashes = 0xE8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_collisionAttributes = 0x100; // CUtlVector<VPhysXCollisionAttributes_t>
                constexpr std::ptrdiff_t m_debugPartNames = 0x118; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_embeddedKeyvalues = 0x130; // CUtlString
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDemoCaptureSettings {
                constexpr std::ptrdiff_t m_vecErrorRangeSplineRotation = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeSplineTranslation = 0x8; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeSplineScale = 0x10; // Vector2D
                constexpr std::ptrdiff_t m_flIkRotation_MaxSplineError = 0x18; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxSplineError = 0x1C; // float32
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationRotation = 0x20; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationTranslation = 0x28; // Vector2D
                constexpr std::ptrdiff_t m_vecErrorRangeQuantizationScale = 0x30; // Vector2D
                constexpr std::ptrdiff_t m_flIkRotation_MaxQuantizationError = 0x38; // float32
                constexpr std::ptrdiff_t m_flIkTranslation_MaxQuantizationError = 0x3C; // float32
                constexpr std::ptrdiff_t m_baseSequence = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_nBaseSequenceFrame = 0x48; // int32
                constexpr std::ptrdiff_t m_boneSelectionMode = 0x4C; // EDemoBoneSelectionMode
                constexpr std::ptrdiff_t m_bones = 0x50; // CUtlVector<BoneDemoCaptureSettings_t>
                constexpr std::ptrdiff_t m_ikChains = 0x68; // CUtlVector<IKDemoCaptureSettings_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace IKDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_parentBoneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_eMode = 0x8; // IKChannelMode
                constexpr std::ptrdiff_t m_ikChainName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneStart = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_oneBoneEnd = 0x20; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqMultiFetchFlag {
                constexpr std::ptrdiff_t m_bRealtime = 0x0; // bool
                constexpr std::ptrdiff_t m_bCylepose = 0x1; // bool
                constexpr std::ptrdiff_t m_b0D = 0x2; // bool
                constexpr std::ptrdiff_t m_b1D = 0x3; // bool
                constexpr std::ptrdiff_t m_b2D = 0x4; // bool
                constexpr std::ptrdiff_t m_b2D_TRI = 0x5; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXRange_t {
                constexpr std::ptrdiff_t m_flMin = 0x0; // float32
                constexpr std::ptrdiff_t m_flMax = 0x4; // float32
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStopAtGoalUpdateNode {
                constexpr std::ptrdiff_t m_flOuterRadius = 0x6C; // float32
                constexpr std::ptrdiff_t m_flInnerRadius = 0x70; // float32
                constexpr std::ptrdiff_t m_flMaxScale = 0x74; // float32
                constexpr std::ptrdiff_t m_flMinScale = 0x78; // float32
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimBoneDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_parent = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_posError = 0x20; // Vector
                constexpr std::ptrdiff_t m_bHasRotation = 0x2C; // bool
                constexpr std::ptrdiff_t m_bHasMovement = 0x2D; // bool
            }
            // Parent: CCycleBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimCycle {
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CActionComponentUpdater {
                constexpr std::ptrdiff_t m_actions = 0x30; // CUtlVector<CSmartPtr<CAnimActionUpdater>>
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphDataSet {
                constexpr std::ptrdiff_t m_variationID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_skeleton = 0x8; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_resources = 0x10; // CUtlVector<CStrongHandleVoid>
            }
            // Parent: CPathAnimMotorUpdaterBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedPathAnimMotorUpdater {
                constexpr std::ptrdiff_t m_flAnticipationTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flMinSpeedScale = 0x30; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x34; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x36; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flSpringConstant = 0x38; // float32
                constexpr std::ptrdiff_t m_flMinSpringTension = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxSpringTension = 0x40; // float32
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetMaterialGroupOnAttachedModels {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathHelperUpdateNode {
                constexpr std::ptrdiff_t m_flStoppingRadius = 0x68; // float32
                constexpr std::ptrdiff_t m_flStoppingSpeedScale = 0x6C; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialGroup_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_materials = 0x8; // CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphBundleData {
                constexpr std::ptrdiff_t m_flULeftSrc = 0x0; // float32
                constexpr std::ptrdiff_t m_flVTopSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_offsets = 0x8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_ranges = 0x20; // CUtlVector<float32>
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_UserPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSolveIKTargetHandle_t {
                constexpr std::ptrdiff_t m_positionHandle = 0x0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_orientationHandle = 0x2; // CAnimParamHandle
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootAdjustmentUpdateNode {
                constexpr std::ptrdiff_t m_clips = 0x70; // CUtlVector<HSequence>
                constexpr std::ptrdiff_t m_hBasePoseCacheHandle = 0x88; // CPoseHandle
                constexpr std::ptrdiff_t m_facingTarget = 0x8C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnTimeMin = 0x90; // float32
                constexpr std::ptrdiff_t m_flTurnTimeMax = 0x94; // float32
                constexpr std::ptrdiff_t m_flStepHeightMax = 0x98; // float32
                constexpr std::ptrdiff_t m_flStepHeightMaxAngle = 0x9C; // float32
                constexpr std::ptrdiff_t m_bResetChild = 0xA0; // bool
                constexpr std::ptrdiff_t m_bAnimationDriven = 0xA1; // bool
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CChoreoUpdateNode {
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAimConstraint {
                constexpr std::ptrdiff_t m_qAimOffset = 0x70; // Quaternion
                constexpr std::ptrdiff_t m_nUpType = 0x80; // uint32
            }
            // Parent: CAnimTagBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFootFallAnimTag {
                constexpr std::ptrdiff_t m_foot = 0x50; // FootFallTagFoot_t
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMaterialDrawDescriptor {
                constexpr std::ptrdiff_t m_nPrimitiveType = 0x0; // RenderPrimitiveType_t
                constexpr std::ptrdiff_t m_nBaseVertex = 0x4; // int32
                constexpr std::ptrdiff_t m_nVertexCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nStartIndex = 0xC; // int32
                constexpr std::ptrdiff_t m_nIndexCount = 0x10; // int32
                constexpr std::ptrdiff_t m_flUvDensity = 0x14; // float32
                constexpr std::ptrdiff_t m_vTintColor = 0x18; // Vector
                constexpr std::ptrdiff_t m_flAlpha = 0x24; // float32
                constexpr std::ptrdiff_t m_nFirstMeshlet = 0x2C; // uint32
                constexpr std::ptrdiff_t m_nNumMeshlets = 0x30; // uint16
                constexpr std::ptrdiff_t m_indexBuffer = 0xB8; // CRenderBufferBinding
                constexpr std::ptrdiff_t m_material = 0xE0; // CStrongHandle<InfoForResourceTypeIMaterial2>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSkeleton {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_boneIDs = 0x8; // CUtlLeanVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_parentIndices = 0x18; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_parentSpaceReferencePose = 0x30; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_modelSpaceReferencePose = 0x48; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_numBonesToSampleAtLowLOD = 0x60; // int32
                constexpr std::ptrdiff_t m_boneMasks = 0x68; // CUtlLeanVector<CNmBoneMask>
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStepsRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_flMinStepsRemaining = 0x68; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            // MPropertyElementNameFn
            namespace CBodyGroupSetting {
                constexpr std::ptrdiff_t m_BodyGroupName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nBodyGroupOption = 0x8; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVectorQuantizer {
                constexpr std::ptrdiff_t m_centroidVectors = 0x0; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nCentroids = 0x18; // int32
                constexpr std::ptrdiff_t m_nDimensions = 0x1C; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycleMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBox {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_sSurfaceProperty = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_sBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vMinBounds = 0x18; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0x24; // Vector
                constexpr std::ptrdiff_t m_flShapeRadius = 0x30; // float32
                constexpr std::ptrdiff_t m_nBoneNameHash = 0x34; // uint32
                constexpr std::ptrdiff_t m_nGroupId = 0x38; // int32
                constexpr std::ptrdiff_t m_nShapeType = 0x3C; // uint8
                constexpr std::ptrdiff_t m_bTranslationOnly = 0x3D; // bool
                constexpr std::ptrdiff_t m_CRC = 0x40; // uint32
                constexpr std::ptrdiff_t m_cRenderColor = 0x44; // Color
                constexpr std::ptrdiff_t m_nHitBoxIndex = 0x48; // uint16
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelSkeletonData_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nParent = 0x18; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_boneSphere = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nFlag = 0x48; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_bonePosParent = 0x60; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_boneRotParent = 0x78; // CUtlVector<QuaternionStorage>
                constexpr std::ptrdiff_t m_boneScaleParent = 0x90; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmEvent {
                constexpr std::ptrdiff_t m_flStartTime = 0x8; // float32
                constexpr std::ptrdiff_t m_flDuration = 0xC; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraph__ExternalGraphSlot_t {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_slotID = 0x8; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmCompressionSettings_t__QuantizationRange_t {
                constexpr std::ptrdiff_t m_flRangeStart = 0x0; // float32
                constexpr std::ptrdiff_t m_flRangeLength = 0x4; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TagSpan_t {
                constexpr std::ptrdiff_t m_tagIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_startCycle = 0x4; // float32
                constexpr std::ptrdiff_t m_endCycle = 0x8; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelDataAnimatedMaterialAttribute_t {
                constexpr std::ptrdiff_t m_AttributeName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNumChannels = 0x8; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionDataSet {
                constexpr std::ptrdiff_t m_groups = 0x0; // CUtlVector<CMotionGraphGroup>
                constexpr std::ptrdiff_t m_nDimensionCount = 0x18; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CProductQuantizer {
                constexpr std::ptrdiff_t m_subQuantizers = 0x0; // CUtlVector<CVectorQuantizer>
                constexpr std::ptrdiff_t m_nDimensions = 0x18; // int32
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CChoiceUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_weights = 0x70; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendTimes = 0x88; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_choiceMethod = 0xA0; // ChoiceMethod
                constexpr std::ptrdiff_t m_choiceChangeMethod = 0xA4; // ChoiceChangeMethod
                constexpr std::ptrdiff_t m_blendMethod = 0xA8; // ChoiceBlendMethod
                constexpr std::ptrdiff_t m_blendTime = 0xAC; // float32
                constexpr std::ptrdiff_t m_bCrossFade = 0xB0; // bool
                constexpr std::ptrdiff_t m_bResetChosen = 0xB1; // bool
                constexpr std::ptrdiff_t m_bDontResetSameSelection = 0xB2; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Bone_t {
                constexpr std::ptrdiff_t m_Name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_BindPose = 0x10; // CTransform
                constexpr std::ptrdiff_t m_nParent = 0x30; // int32
            }
            // Parent: CAnimActionUpdater
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExpressionActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_hScript = 0x1C; // AnimScriptHandle
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerLine {
                constexpr std::ptrdiff_t m_vWsPositionStart = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsPositionEnd = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x60; // Color
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCycleControlUpdateNode {
                constexpr std::ptrdiff_t m_valueSource = 0x68; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x6C; // CAnimParamHandle
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedValueComponentUpdater {
                constexpr std::ptrdiff_t m_items = 0x30; // CUtlVector<CDampedValueUpdateItem>
            }
            // Parent: CBoneConstraintBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBaseConstraint {
                constexpr std::ptrdiff_t m_name = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_vUpVector = 0x30; // Vector
                constexpr std::ptrdiff_t m_slaves = 0x40; // CUtlVector<CConstraintSlave>
                constexpr std::ptrdiff_t m_targets = 0x58; // CUtlVector<CConstraintTarget>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BlendItem_t {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_pChild = 0x18; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_hSequence = 0x28; // HSequence
                constexpr std::ptrdiff_t m_vPos = 0x2C; // Vector2D
                constexpr std::ptrdiff_t m_flDuration = 0x34; // float32
                constexpr std::ptrdiff_t m_bUseCustomDuration = 0x38; // bool
            }
            // Parent: CAnimParameterBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConcreteAnimParameter {
                constexpr std::ptrdiff_t m_previewButton = 0x68; // AnimParamButton_t
                constexpr std::ptrdiff_t m_eNetworkSetting = 0x6C; // AnimParamNetworkSetting
                constexpr std::ptrdiff_t m_bUseMostRecentValue = 0x70; // bool
                constexpr std::ptrdiff_t m_bAutoReset = 0x71; // bool
                constexpr std::ptrdiff_t m_bGameWritable = 0x72; // bool
                constexpr std::ptrdiff_t m_bGraphWritable = 0x73; // bool
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_RandomPick {
                constexpr std::ptrdiff_t m_Choices = 0x48; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_ChoiceWeights = 0x60; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXConstraint2_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_nParent = 0x4; // uint16
                constexpr std::ptrdiff_t m_nChild = 0x6; // uint16
                constexpr std::ptrdiff_t m_params = 0x8; // VPhysXConstraintParams_t
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConstraintTarget {
                constexpr std::ptrdiff_t m_qOffset = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_vOffset = 0x30; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x3C; // uint32
                constexpr std::ptrdiff_t m_sName = 0x40; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_bIsAttachment = 0x59; // bool
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t {
                constexpr std::ptrdiff_t m_nEntIndex = 0x0; // CEntityIndex
                constexpr std::ptrdiff_t m_nEntParent = 0x4; // CEntityIndex
                constexpr std::ptrdiff_t m_ImportedCollision = 0x8; // CUtlVector<CEntityIndex>
                constexpr std::ptrdiff_t m_ModelName = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_CaptureName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_ModelBindPose = 0x30; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_FeModelInitPose = 0x48; // CUtlVector<SkeletonAnimCapture_t::Bone_t>
                constexpr std::ptrdiff_t m_nFlexControllers = 0x60; // int32
                constexpr std::ptrdiff_t m_bPredicted = 0x64; // bool
                constexpr std::ptrdiff_t m_Frames = 0xA8; // CUtlVector<SkeletonAnimCapture_t::Frame_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUser {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nType = 0x10; // int32
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRagdollComponentUpdater {
                constexpr std::ptrdiff_t m_ragdollNodePaths = 0x30; // CUtlVector<CAnimNodePath>
                constexpr std::ptrdiff_t m_boneIndices = 0x48; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_boneNames = 0x60; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_weightLists = 0x78; // CUtlVector<WeightList>
                constexpr std::ptrdiff_t m_flSpringFrequencyMin = 0x90; // float32
                constexpr std::ptrdiff_t m_flSpringFrequencyMax = 0x94; // float32
                constexpr std::ptrdiff_t m_flMaxStretch = 0x98; // float32
                constexpr std::ptrdiff_t m_bSolidCollisionAtZeroWeight = 0x9C; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootDefinition {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_ankleBoneName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_toeBoneName = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x18; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x24; // Vector
                constexpr std::ptrdiff_t m_flFootLength = 0x30; // float32
                constexpr std::ptrdiff_t m_flBindPoseDirectionMS = 0x34; // float32
                constexpr std::ptrdiff_t m_flTraceHeight = 0x38; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x3C; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqSynthAnimDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
                constexpr std::ptrdiff_t m_nLocalBaseReference = 0x24; // int16
                constexpr std::ptrdiff_t m_nLocalBoneMask = 0x26; // int16
                constexpr std::ptrdiff_t m_activityArray = 0x28; // CUtlVector<CAnimActivity>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimComponentUpdater {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimComponentID
                constexpr std::ptrdiff_t m_networkMode = 0x24; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_bStartEnabled = 0x28; // bool
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlend2DUpdateNode {
                constexpr std::ptrdiff_t m_items = 0x60; // CUtlVector<BlendItem_t>
                constexpr std::ptrdiff_t m_tags = 0x78; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_paramSpans = 0x90; // CParamSpanUpdater
                constexpr std::ptrdiff_t m_nodeItemIndices = 0xA8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_damping = 0xC0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSourceX = 0xD0; // AnimValueSource
                constexpr std::ptrdiff_t m_paramX = 0xD4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_blendSourceY = 0xD8; // AnimValueSource
                constexpr std::ptrdiff_t m_paramY = 0xDC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eBlendMode = 0xE0; // Blend2DMode
                constexpr std::ptrdiff_t m_playbackSpeed = 0xE4; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xE8; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xE9; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xEA; // bool
                constexpr std::ptrdiff_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xEB; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelExtPart_t {
                constexpr std::ptrdiff_t m_Transform = 0x0; // CTransform
                constexpr std::ptrdiff_t m_Name = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_nParent = 0x28; // int32
                constexpr std::ptrdiff_t m_refModel = 0x30; // CStrongHandle<InfoForResourceTypeCModel>
            }
            // Parent: CLeafUpdateNode
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLeanMatrixUpdateNode {
                constexpr std::ptrdiff_t m_frameCorners = 0x5C; // int32[3][3]
                constexpr std::ptrdiff_t m_poses = 0x80; // CPoseHandle[9]
                constexpr std::ptrdiff_t m_damping = 0xA8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendSource = 0xB8; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0xBC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_verticalAxis = 0xC0; // Vector
                constexpr std::ptrdiff_t m_horizontalAxis = 0xCC; // Vector
                constexpr std::ptrdiff_t m_hSequence = 0xD8; // HSequence
                constexpr std::ptrdiff_t m_flMaxValue = 0xDC; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xE0; // int32
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CSymbolAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x78; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBoxSetList {
                constexpr std::ptrdiff_t m_HitBoxSets = 0x0; // CUtlVector<CHitBoxSet>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionDBIndex {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDirectPlaybackTagData {
                constexpr std::ptrdiff_t m_sequenceName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_tags = 0x8; // CUtlVector<TagSpan_t>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParamSpanUpdater {
                constexpr std::ptrdiff_t m_spans = 0x0; // CUtlVector<ParamSpan_t>
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimActionUpdater {
            }
            // Parent: CAnimTagBase
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CParticleAnimTag {
                constexpr std::ptrdiff_t m_hParticleSystem = 0x50; // CStrongHandle<InfoForResourceTypeIParticleSystemDefinition>
                constexpr std::ptrdiff_t m_particleSystemName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_configName = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_bDetachFromOwner = 0x68; // bool
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x69; // bool
                constexpr std::ptrdiff_t m_bTagEndStopIsInstant = 0x6A; // bool
                constexpr std::ptrdiff_t m_attachmentName = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_attachmentType = 0x78; // ParticleAttachment_t
                constexpr std::ptrdiff_t m_attachmentCP1Name = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_attachmentCP1Type = 0x88; // ParticleAttachment_t
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCycleBase {
                constexpr std::ptrdiff_t m_flCycle = 0x0; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationSnapshotBase_t {
                constexpr std::ptrdiff_t m_flRealTime = 0x0; // float32
                constexpr std::ptrdiff_t m_rootToWorld = 0x10; // matrix3x4a_t
                constexpr std::ptrdiff_t m_bBonesInWorldSpace = 0x40; // bool
                constexpr std::ptrdiff_t m_boneSetupMask = 0x48; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_boneTransforms = 0x60; // CUtlVector<matrix3x4a_t>
                constexpr std::ptrdiff_t m_flexControllers = 0x78; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_SnapshotType = 0x90; // AnimationSnapshotType_t
                constexpr std::ptrdiff_t m_bHasDecodeDump = 0x94; // bool
                constexpr std::ptrdiff_t m_DecodeDump = 0x98; // AnimationDecodeDebugDumpElement_t
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEmitTagActionUpdater {
                constexpr std::ptrdiff_t m_nTagIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_bIsZeroDuration = 0x1C; // bool
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace DynamicMeshDeformParams_t {
                constexpr std::ptrdiff_t m_flTensionCompressScale = 0x0; // float32
                constexpr std::ptrdiff_t m_flTensionStretchScale = 0x4; // float32
                constexpr std::ptrdiff_t m_bRecomputeSmoothNormalsAfterAnimation = 0x8; // bool
                constexpr std::ptrdiff_t m_bComputeDynamicMeshTensionAfterAnimation = 0x9; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimStateMachineUpdater {
                constexpr std::ptrdiff_t m_states = 0x8; // CUtlVector<CStateUpdateData>
                constexpr std::ptrdiff_t m_transitions = 0x20; // CUtlVector<CTransitionUpdateData>
                constexpr std::ptrdiff_t m_startStateIndex = 0x50; // int32
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CUnaryUpdateNode {
                constexpr std::ptrdiff_t m_pChildNode = 0x58; // CAnimUpdateNodeRef
            }
            // Parent: None
            // Fields count: 17
            namespace CCompressorGroup {
                constexpr std::ptrdiff_t m_nTotalElementCount = 0x0; // int32
                constexpr std::ptrdiff_t m_szChannelClass = 0x8; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_szVariableName = 0x20; // CUtlVector<char*>
                constexpr std::ptrdiff_t m_nType = 0x38; // CUtlVector<fieldtype_t>
                constexpr std::ptrdiff_t m_nFlags = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_szGrouping = 0x68; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_nCompressorIndex = 0x80; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_szElementNames = 0x98; // CUtlVector<CUtlVector<char*>>
                constexpr std::ptrdiff_t m_nElementUniqueID = 0xB0; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_nElementMask = 0xC8; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_vectorCompressor = 0xF8; // CUtlVector<CCompressor<Vector>*>
                constexpr std::ptrdiff_t m_quaternionCompressor = 0x110; // CUtlVector<CCompressor<QuaternionStorage>*>
                constexpr std::ptrdiff_t m_intCompressor = 0x128; // CUtlVector<CCompressor<int32>*>
                constexpr std::ptrdiff_t m_boolCompressor = 0x140; // CUtlVector<CCompressor<bool>*>
                constexpr std::ptrdiff_t m_colorCompressor = 0x158; // CUtlVector<CCompressor<Color>*>
                constexpr std::ptrdiff_t m_vector2DCompressor = 0x170; // CUtlVector<CCompressor<Vector2D>*>
                constexpr std::ptrdiff_t m_vector4DCompressor = 0x188; // CUtlVector<CCompressor<Vector4D>*>
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSelectorUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_tags = 0x70; // CUtlVector<int8>
                constexpr std::ptrdiff_t m_blendCurve = 0x8C; // CBlendCurve
                constexpr std::ptrdiff_t m_flBlendTime = 0x94; // CAnimValue<float32>
                constexpr std::ptrdiff_t m_hParameter = 0x9C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eTagBehavior = 0xA0; // SelectorTagBehavior_t
                constexpr std::ptrdiff_t m_bResetOnChange = 0xA4; // bool
                constexpr std::ptrdiff_t m_bSyncCyclesOnChange = 0xA5; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmPercent_t {
                constexpr std::ptrdiff_t m_flValue = 0x0; // float32
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateMachineComponentUpdater {
                constexpr std::ptrdiff_t m_stateMachine = 0x30; // CAnimStateMachineUpdater
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateNodeRef {
                constexpr std::ptrdiff_t m_nodeIndex = 0x8; // int32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfaceProperties {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_baseNameHash = 0xC; // uint32
                constexpr std::ptrdiff_t m_bHidden = 0x18; // bool
                constexpr std::ptrdiff_t m_description = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_physics = 0x28; // CPhysSurfacePropertiesPhysics
                constexpr std::ptrdiff_t m_audioSounds = 0x48; // CPhysSurfacePropertiesSoundNames
                constexpr std::ptrdiff_t m_audioParams = 0x88; // CPhysSurfacePropertiesAudio
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqPoseParamDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flStart = 0x10; // float32
                constexpr std::ptrdiff_t m_flEnd = 0x14; // float32
                constexpr std::ptrdiff_t m_flLoop = 0x18; // float32
                constexpr std::ptrdiff_t m_bLooping = 0x1C; // bool
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetBodygroup {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimMovement {
                constexpr std::ptrdiff_t endframe = 0x0; // int32
                constexpr std::ptrdiff_t motionflags = 0x4; // int32
                constexpr std::ptrdiff_t v0 = 0x8; // float32
                constexpr std::ptrdiff_t v1 = 0xC; // float32
                constexpr std::ptrdiff_t angle = 0x10; // float32
                constexpr std::ptrdiff_t vector = 0x14; // Vector
                constexpr std::ptrdiff_t position = 0x20; // Vector
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootStepTrigger {
                constexpr std::ptrdiff_t m_tags = 0x0; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nFootIndex = 0x18; // int32
                constexpr std::ptrdiff_t m_triggerPhase = 0x1C; // StepPhase
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSyncTrack__EventMarker_t {
                constexpr std::ptrdiff_t m_startTime = 0x0; // NmPercent_t
                constexpr std::ptrdiff_t m_ID = 0x8; // CGlobalSymbol
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathMetricEvaluator {
                constexpr std::ptrdiff_t m_pathTimeSamples = 0x50; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flDistance = 0x68; // float32
                constexpr std::ptrdiff_t m_bExtrapolateMovement = 0x6C; // bool
                constexpr std::ptrdiff_t m_flMinExtrapolationSpeed = 0x70; // float32
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 20
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootLockUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x68; // FootLockPoseOpFixedSettings
                constexpr std::ptrdiff_t m_footSettings = 0xD0; // CUtlVector<FootFixedSettings>
                constexpr std::ptrdiff_t m_hipShiftDamping = 0xE8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_rootHeightDamping = 0xF8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flStrideCurveScale = 0x108; // float32
                constexpr std::ptrdiff_t m_flStrideCurveLimitScale = 0x10C; // float32
                constexpr std::ptrdiff_t m_flStepHeightIncreaseScale = 0x110; // float32
                constexpr std::ptrdiff_t m_flStepHeightDecreaseScale = 0x114; // float32
                constexpr std::ptrdiff_t m_flHipShiftScale = 0x118; // float32
                constexpr std::ptrdiff_t m_flBlendTime = 0x11C; // float32
                constexpr std::ptrdiff_t m_flMaxRootHeightOffset = 0x120; // float32
                constexpr std::ptrdiff_t m_flMinRootHeightOffset = 0x124; // float32
                constexpr std::ptrdiff_t m_flTiltPlanePitchSpringStrength = 0x128; // float32
                constexpr std::ptrdiff_t m_flTiltPlaneRollSpringStrength = 0x12C; // float32
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x130; // bool
                constexpr std::ptrdiff_t m_bApplyHipShift = 0x131; // bool
                constexpr std::ptrdiff_t m_bModulateStepHeight = 0x132; // bool
                constexpr std::ptrdiff_t m_bResetChild = 0x133; // bool
                constexpr std::ptrdiff_t m_bEnableVerticalCurvedPaths = 0x134; // bool
                constexpr std::ptrdiff_t m_bEnableRootHeightDamping = 0x135; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace JiggleBoneSettings_t {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_flSpringStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flMaxTimeStep = 0x8; // float32
                constexpr std::ptrdiff_t m_flDamping = 0xC; // float32
                constexpr std::ptrdiff_t m_vBoundsMaxLS = 0x10; // Vector
                constexpr std::ptrdiff_t m_vBoundsMinLS = 0x1C; // Vector
                constexpr std::ptrdiff_t m_eSimSpace = 0x28; // JiggleBoneSimSpace
            }
            // Parent: CSequenceUpdateNode
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CJumpHelperUpdateNode {
                constexpr std::ptrdiff_t m_hTargetParam = 0xA8; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flOriginalJumpMovement = 0xAC; // Vector
                constexpr std::ptrdiff_t m_flOriginalJumpDuration = 0xB8; // float32
                constexpr std::ptrdiff_t m_flJumpStartCycle = 0xBC; // float32
                constexpr std::ptrdiff_t m_flJumpEndCycle = 0xC0; // float32
                constexpr std::ptrdiff_t m_eCorrectionMethod = 0xC4; // JumpCorrectionMethod
                constexpr std::ptrdiff_t m_bTranslationAxis = 0xC8; // bool[3]
                constexpr std::ptrdiff_t m_bScaleSpeed = 0xCB; // bool
            }
            // Parent: None
            // Fields count: 18
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootLockPoseOpFixedSettings {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_hipDampingSettings = 0x18; // CAnimInputDamping
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x28; // int32
                constexpr std::ptrdiff_t m_ikSolverType = 0x2C; // IKSolverType
                constexpr std::ptrdiff_t m_bApplyTilt = 0x30; // bool
                constexpr std::ptrdiff_t m_bApplyHipDrop = 0x31; // bool
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x32; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x33; // bool
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x34; // bool
                constexpr std::ptrdiff_t m_flMaxFootHeight = 0x38; // float32
                constexpr std::ptrdiff_t m_flExtensionScale = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x40; // float32
                constexpr std::ptrdiff_t m_bEnableLockBreaking = 0x44; // bool
                constexpr std::ptrdiff_t m_flLockBreakTolerance = 0x48; // float32
                constexpr std::ptrdiff_t m_flLockBlendTime = 0x4C; // float32
                constexpr std::ptrdiff_t m_bEnableStretching = 0x50; // bool
                constexpr std::ptrdiff_t m_flMaxStretchAmount = 0x54; // float32
                constexpr std::ptrdiff_t m_flStretchExtensionScale = 0x58; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_RandomColor {
                constexpr std::ptrdiff_t m_Gradient = 0x48; // CColorGradient
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootMotion {
                constexpr std::ptrdiff_t m_strides = 0x0; // CUtlVector<CFootStride>
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bAdditive = 0x20; // bool
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CJiggleBoneUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x68; // JiggleBoneSettingsList_t
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyArrayElementNameKey
            namespace MoodAnimation_t {
                constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flWeight = 0x8; // float32
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLODComponentUpdater {
                constexpr std::ptrdiff_t m_nServerLOD = 0x30; // int32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDataChannelDesc {
                constexpr std::ptrdiff_t m_szChannelClass = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_szVariableName = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nFlags = 0x20; // int32
                constexpr std::ptrdiff_t m_nType = 0x24; // int32
                constexpr std::ptrdiff_t m_szGrouping = 0x28; // CBufferString
                constexpr std::ptrdiff_t m_szDescription = 0x38; // CBufferString
                constexpr std::ptrdiff_t m_szElementNameArray = 0x48; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_nElementIndexArray = 0x60; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nElementMaskArray = 0x78; // CUtlVector<uint32>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphRectData {
                constexpr std::ptrdiff_t m_nXLeftDst = 0x0; // int16
                constexpr std::ptrdiff_t m_nYTopDst = 0x2; // int16
                constexpr std::ptrdiff_t m_flUWidthSrc = 0x4; // float32
                constexpr std::ptrdiff_t m_flVHeightSrc = 0x8; // float32
                constexpr std::ptrdiff_t m_bundleDatas = 0x10; // CUtlVector<CMorphBundleData>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimFoot {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_vBallOffset = 0x8; // Vector
                constexpr std::ptrdiff_t m_vHeelOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_ankleBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_toeBoneIndex = 0x24; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmBoneMask {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_weightInfo = 0x8; // CNmBoneMask::WeightInfo_t
                constexpr std::ptrdiff_t m_weights = 0x18; // CUtlVector<float32>
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CParentConstraint {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootPositionMetricEvaluator {
                constexpr std::ptrdiff_t m_footIndices = 0x50; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_bIgnoreSlope = 0x68; // bool
            }
            // Parent: None
            // Fields count: 1
            namespace HSequence {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDampedValueUpdateItem {
                constexpr std::ptrdiff_t m_damping = 0x0; // CAnimInputDamping
                constexpr std::ptrdiff_t m_hParamIn = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hParamOut = 0x1A; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimLocalHierarchy {
                constexpr std::ptrdiff_t m_sBone = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_sNewParent = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nStartFrame = 0x20; // int32
                constexpr std::ptrdiff_t m_nPeakFrame = 0x24; // int32
                constexpr std::ptrdiff_t m_nTailFrame = 0x28; // int32
                constexpr std::ptrdiff_t m_nEndFrame = 0x2C; // int32
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlendUpdateNode {
                constexpr std::ptrdiff_t m_children = 0x60; // CUtlVector<CAnimUpdateNodeRef>
                constexpr std::ptrdiff_t m_sortedOrder = 0x78; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_targetValues = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_blendValueSource = 0xAC; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0xB0; // CAnimParamHandle
                constexpr std::ptrdiff_t m_damping = 0xB8; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendKeyType = 0xC8; // BlendKeyType
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xCC; // bool
                constexpr std::ptrdiff_t m_bSyncCycles = 0xCD; // bool
                constexpr std::ptrdiff_t m_bLoop = 0xCE; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0xCF; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CQuaternionAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_bInterpolate = 0x90; // bool
            }
            // Parent: None
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PermModelData_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_modelInfo = 0x8; // PermModelInfo_t
                constexpr std::ptrdiff_t m_ExtParts = 0x60; // CUtlVector<PermModelExtPart_t>
                constexpr std::ptrdiff_t m_refMeshes = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>>
                constexpr std::ptrdiff_t m_refMeshGroupMasks = 0x90; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refPhysGroupMasks = 0xA8; // CUtlVector<uint64>
                constexpr std::ptrdiff_t m_refLODGroupMasks = 0xC0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_lodGroupSwitchDistances = 0xD8; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_refPhysicsData = 0xF0; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refPhysicsHitboxData = 0x108; // CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>>
                constexpr std::ptrdiff_t m_refAnimGroups = 0x120; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                constexpr std::ptrdiff_t m_refSequenceGroups = 0x138; // CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>>
                constexpr std::ptrdiff_t m_meshGroups = 0x150; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_materialGroups = 0x168; // CUtlVector<MaterialGroup_t>
                constexpr std::ptrdiff_t m_nDefaultMeshGroupMask = 0x180; // uint64
                constexpr std::ptrdiff_t m_modelSkeleton = 0x188; // ModelSkeletonData_t
                constexpr std::ptrdiff_t m_remappingTable = 0x230; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_remappingTableStarts = 0x248; // CUtlVector<uint16>
                constexpr std::ptrdiff_t m_boneFlexDrivers = 0x260; // CUtlVector<ModelBoneFlexDriver_t>
                constexpr std::ptrdiff_t m_pModelConfigList = 0x278; // CModelConfigList*
                constexpr std::ptrdiff_t m_BodyGroupsHiddenInTools = 0x280; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_refAnimIncludeModels = 0x298; // CUtlVector<CStrongHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_AnimatedMaterialAttributes = 0x2B0; // CUtlVector<PermModelDataAnimatedMaterialAttribute_t>
            }
            // Parent: CStaticPoseCache
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStaticPoseCacheBuilder {
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSequenceGroupData {
                constexpr std::ptrdiff_t m_sName = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_nFlags = 0x20; // uint32
                constexpr std::ptrdiff_t m_localSequenceNameArray = 0x28; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_localS1SeqDescArray = 0x40; // CUtlVector<CSeqS1SeqDesc>
                constexpr std::ptrdiff_t m_localMultiSeqDescArray = 0x58; // CUtlVector<CSeqS1SeqDesc>
                constexpr std::ptrdiff_t m_localSynthAnimDescArray = 0x70; // CUtlVector<CSeqSynthAnimDesc>
                constexpr std::ptrdiff_t m_localCmdSeqDescArray = 0x88; // CUtlVector<CSeqCmdSeqDesc>
                constexpr std::ptrdiff_t m_localBoneMaskArray = 0xA0; // CUtlVector<CSeqBoneMaskList>
                constexpr std::ptrdiff_t m_localScaleSetArray = 0xB8; // CUtlVector<CSeqScaleSet>
                constexpr std::ptrdiff_t m_localBoneNameArray = 0xD0; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_localNodeName = 0xE8; // CBufferString
                constexpr std::ptrdiff_t m_localPoseParamArray = 0xF8; // CUtlVector<CSeqPoseParamDesc>
                constexpr std::ptrdiff_t m_keyValues = 0x110; // KeyValues3
                constexpr std::ptrdiff_t m_localIKAutoplayLockArray = 0x120; // CUtlVector<CSeqIKLock>
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateMachineUpdateNode {
                constexpr std::ptrdiff_t m_stateMachine = 0x68; // CAnimStateMachineUpdater
                constexpr std::ptrdiff_t m_stateData = 0xC0; // CUtlVector<CStateNodeStateData>
                constexpr std::ptrdiff_t m_transitionData = 0xD8; // CUtlVector<CStateNodeTransitionData>
                constexpr std::ptrdiff_t m_bBlockWaningTags = 0xF4; // bool
                constexpr std::ptrdiff_t m_bLockStateWhenWaning = 0xF5; // bool
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAimMatrixUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // AimMatrixOpFixedSettings_t
                constexpr std::ptrdiff_t m_target = 0x148; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0x14C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSequence = 0x150; // HSequence
                constexpr std::ptrdiff_t m_bResetChild = 0x154; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x155; // bool
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Frame_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_Stamp = 0x4; // SkeletonAnimCapture_t::FrameStamp_t
                constexpr std::ptrdiff_t m_Transform = 0x20; // CTransform
                constexpr std::ptrdiff_t m_bTeleport = 0x40; // bool
                constexpr std::ptrdiff_t m_CompositeBones = 0x48; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_SimStateBones = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelAnims = 0x78; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_FeModelPos = 0x90; // CUtlVector<VectorAligned>
                constexpr std::ptrdiff_t m_FlexControllerWeights = 0xA8; // CUtlVector<float32>
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_Command {
                constexpr std::ptrdiff_t m_Command = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_Args = 0x50; // KeyValues3
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimEventDefinition {
                constexpr std::ptrdiff_t m_nFrame = 0x8; // int32
                constexpr std::ptrdiff_t m_flCycle = 0xC; // float32
                constexpr std::ptrdiff_t m_EventData = 0x10; // KeyValues3
                constexpr std::ptrdiff_t m_sLegacyOptions = 0x20; // CBufferString
                constexpr std::ptrdiff_t m_sEventName = 0x30; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmRootMotionData {
                constexpr std::ptrdiff_t m_transforms = 0x0; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_nNumFrames = 0x18; // int32
                constexpr std::ptrdiff_t m_flAverageLinearVelocity = 0x1C; // float32
                constexpr std::ptrdiff_t m_flAverageAngularVelocityRadians = 0x20; // float32
                constexpr std::ptrdiff_t m_totalDelta = 0x30; // CTransform
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimScriptHandle {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexOp {
                constexpr std::ptrdiff_t m_OpCode = 0x0; // FlexOpCode_t
                constexpr std::ptrdiff_t m_Data = 0x4; // int32
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitReactUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x68; // HitReactFixedSettings_t
                constexpr std::ptrdiff_t m_triggerParam = 0xB4; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitBoneParam = 0xB6; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitOffsetParam = 0xB8; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitDirectionParam = 0xBA; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hitStrengthParam = 0xBC; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flMinDelayBetweenHits = 0xC0; // float32
                constexpr std::ptrdiff_t m_bResetChild = 0xC4; // bool
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLookAtUpdateNode {
                constexpr std::ptrdiff_t m_opFixedSettings = 0x70; // LookAtOpFixedSettings_t
                constexpr std::ptrdiff_t m_target = 0x138; // AnimVectorSource
                constexpr std::ptrdiff_t m_paramIndex = 0x13C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_weightParamIndex = 0x13E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bResetChild = 0x140; // bool
                constexpr std::ptrdiff_t m_bLockWhenWaning = 0x141; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimBone {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_parent = 0x10; // int32
                constexpr std::ptrdiff_t m_pos = 0x14; // Vector
                constexpr std::ptrdiff_t m_quat = 0x20; // QuaternionStorage
                constexpr std::ptrdiff_t m_scale = 0x30; // float32
                constexpr std::ptrdiff_t m_qAlignment = 0x34; // QuaternionStorage
                constexpr std::ptrdiff_t m_flags = 0x44; // int32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraph {
                constexpr std::ptrdiff_t m_persistentNodeIndices = 0x0; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_instanceNodeStartOffsets = 0x18; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_instanceRequiredMemory = 0x30; // uint32
                constexpr std::ptrdiff_t m_instanceRequiredAlignment = 0x34; // uint32
                constexpr std::ptrdiff_t m_rootNodeIdx = 0x38; // int16
                constexpr std::ptrdiff_t m_controlParameterIDs = 0x40; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_virtualParameterIDs = 0x58; // CUtlVector<CGlobalSymbol>
                constexpr std::ptrdiff_t m_virtualParameterNodeIndices = 0x70; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_childGraphSlots = 0x88; // CUtlVector<CNmGraph::ChildGraphSlot_t>
                constexpr std::ptrdiff_t m_externalGraphSlots = 0xA0; // CUtlVector<CNmGraph::ExternalGraphSlot_t>
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParameterManagerUpdater {
                constexpr std::ptrdiff_t m_parameters = 0x18; // CUtlVector<CSmartPtr<CAnimParameterBase>>
                constexpr std::ptrdiff_t m_idToIndexMap = 0x30; // CUtlHashtable<AnimParamID,int32>
                constexpr std::ptrdiff_t m_nameToIndexMap = 0x50; // CUtlHashtable<CUtlString,int32>
                constexpr std::ptrdiff_t m_indexToHandle = 0x70; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_autoResetParams = 0x88; // CUtlVector<CUtlPair<CAnimParamHandle,CAnimVariant>>
                constexpr std::ptrdiff_t m_autoResetMap = 0xA0; // CUtlHashtable<CAnimParamHandle,int16>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace BoneDemoCaptureSettings_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_flErrorSplineRotationMax = 0x8; // float32
                constexpr std::ptrdiff_t m_flErrorSplineTranslationMax = 0xC; // float32
                constexpr std::ptrdiff_t m_flErrorSplineScaleMax = 0x10; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationRotationMax = 0x14; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationTranslationMax = 0x18; // float32
                constexpr std::ptrdiff_t m_flErrorQuantizationScaleMax = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 2
            namespace CBoneConstraintPoseSpaceMorph__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputWeightList = 0x10; // CUtlVector<float32>
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyArrayElementNameKey
            namespace MoodAnimationLayer_t {
                constexpr std::ptrdiff_t m_sName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_bActiveListening = 0x8; // bool
                constexpr std::ptrdiff_t m_bActiveTalking = 0x9; // bool
                constexpr std::ptrdiff_t m_layerAnimations = 0x10; // CUtlVector<MoodAnimation_t>
                constexpr std::ptrdiff_t m_flIntensity = 0x28; // CRangeFloat
                constexpr std::ptrdiff_t m_flDurationScale = 0x30; // CRangeFloat
                constexpr std::ptrdiff_t m_bScaleWithInts = 0x38; // bool
                constexpr std::ptrdiff_t m_flNextStart = 0x3C; // CRangeFloat
                constexpr std::ptrdiff_t m_flStartOffset = 0x44; // CRangeFloat
                constexpr std::ptrdiff_t m_flEndOffset = 0x4C; // CRangeFloat
                constexpr std::ptrdiff_t m_flFadeIn = 0x54; // float32
                constexpr std::ptrdiff_t m_flFadeOut = 0x58; // float32
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSpeedScaleUpdateNode {
                constexpr std::ptrdiff_t m_paramIndex = 0x68; // CAnimParamHandle
            }
            // Parent: CModelConfigElement
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetBodygroupOnAttachedModels {
                constexpr std::ptrdiff_t m_GroupName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_nChoice = 0x50; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCurrentVelocityMetricEvaluator {
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimReplayFrame {
                constexpr std::ptrdiff_t m_inputDataBlocks = 0x10; // CUtlVector<CUtlBinaryBlock>
                constexpr std::ptrdiff_t m_instanceData = 0x28; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_startingLocalToWorldTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_localToWorldTransform = 0x60; // CTransform
                constexpr std::ptrdiff_t m_timeStamp = 0x80; // float32
            }
            // Parent: CNmEvent
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmTransitionEvent {
                constexpr std::ptrdiff_t m_rule = 0x10; // NmTransitionRule_t
                constexpr std::ptrdiff_t m_ID = 0x18; // CGlobalSymbol
            }
            // Parent: CAnimMotorUpdaterBase
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_bLockToPath = 0x20; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__Camera_t {
                constexpr std::ptrdiff_t m_tmCamera = 0x0; // CTransform
                constexpr std::ptrdiff_t m_flTime = 0x20; // float32
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFollowAttachmentUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // FollowAttachmentSettings_t
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMovementComponentUpdater {
                constexpr std::ptrdiff_t m_motors = 0x30; // CUtlVector<CSmartPtr<CAnimMotorUpdaterBase>>
                constexpr std::ptrdiff_t m_facingDamping = 0x48; // CAnimInputDamping
                constexpr std::ptrdiff_t m_eDefaultFacingMode = 0x58; // FacingMode
                constexpr std::ptrdiff_t m_nDefaultMotorIndex = 0x64; // int32
                constexpr std::ptrdiff_t m_flDefaultRunSpeed = 0x68; // float32
                constexpr std::ptrdiff_t m_bMoveVarsDisabled = 0x6C; // bool
                constexpr std::ptrdiff_t m_bNetworkPath = 0x6D; // bool
                constexpr std::ptrdiff_t m_bNetworkFacing = 0x6E; // bool
                constexpr std::ptrdiff_t m_paramHandles = 0x6F; // CAnimParamHandle[30]
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetMaterialGroup {
                constexpr std::ptrdiff_t m_MaterialGroupName = 0x48; // CUtlString
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFutureFacingMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flTime = 0x54; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmCompressionSettings_t {
                constexpr std::ptrdiff_t m_translationRangeX = 0x0; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_translationRangeY = 0x8; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_translationRangeZ = 0x10; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_scaleRange = 0x18; // NmCompressionSettings_t::QuantizationRange_t
                constexpr std::ptrdiff_t m_constantRotation = 0x20; // Quaternion
                constexpr std::ptrdiff_t m_bIsRotationStatic = 0x30; // bool
                constexpr std::ptrdiff_t m_bIsTranslationStatic = 0x31; // bool
                constexpr std::ptrdiff_t m_bIsScaleStatic = 0x32; // bool
            }
            // Parent: CBinaryUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAddUpdateNode {
                constexpr std::ptrdiff_t m_footMotionTiming = 0x8C; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x90; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x91; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x92; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MPropertyEditClassAsString
            namespace CAnimEnum {
                constexpr std::ptrdiff_t m_value = 0x0; // uint8
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDemoSettingsComponentUpdater {
                constexpr std::ptrdiff_t m_settings = 0x30; // CAnimDemoCaptureSettings
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDecoder {
                constexpr std::ptrdiff_t m_szName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nVersion = 0x10; // int32
                constexpr std::ptrdiff_t m_nType = 0x14; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootStride {
                constexpr std::ptrdiff_t m_definition = 0x0; // CFootCycleDefinition
                constexpr std::ptrdiff_t m_trajectories = 0x40; // CFootTrajectories
            }
            // Parent: CNmEvent
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmLegacyEvent {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateNodeStateData {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_bExclusiveRootMotion = 0x0; // bitfield:1
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFootstepLandedAnimTag {
                constexpr std::ptrdiff_t m_FootstepType = 0x50; // FootstepLandedFootSoundType_t
                constexpr std::ptrdiff_t m_OverrideSoundName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_DebugAnimSourceString = 0x60; // CUtlString
                constexpr std::ptrdiff_t m_BoneName = 0x68; // CUtlString
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CEnumAnimParameter {
                constexpr std::ptrdiff_t m_defaultValue = 0x80; // uint8
                constexpr std::ptrdiff_t m_enumOptions = 0x88; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimTagID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimFrameSegment {
                constexpr std::ptrdiff_t m_nUniqueFrameIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_nLocalElementMasks = 0x4; // uint32
                constexpr std::ptrdiff_t m_nLocalChannel = 0x8; // int32
                constexpr std::ptrdiff_t m_container = 0x10; // CUtlBinaryBlock
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSlopeComponentUpdater {
                constexpr std::ptrdiff_t m_flTraceDistance = 0x34; // float32
                constexpr std::ptrdiff_t m_hSlopeAngle = 0x38; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleFront = 0x3A; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeAngleSide = 0x3C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeHeading = 0x3E; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal = 0x40; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hSlopeNormal_WorldSpace = 0x42; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAnimInputDamping {
                constexpr std::ptrdiff_t m_speedFunction = 0x8; // DampingSpeedFunction
                constexpr std::ptrdiff_t m_fSpeedScale = 0xC; // float32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CHitBoxSet {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nNameHash = 0x8; // uint32
                constexpr std::ptrdiff_t m_HitBoxes = 0x10; // CUtlVector<CHitBox>
                constexpr std::ptrdiff_t m_SourceFilename = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ChainToSolveData_t {
                constexpr std::ptrdiff_t m_nChainIndex = 0x0; // int32
                constexpr std::ptrdiff_t m_SolverSettings = 0x4; // IKSolverSettings_t
                constexpr std::ptrdiff_t m_TargetSettings = 0x10; // IKTargetSettings_t
                constexpr std::ptrdiff_t m_DebugSetting = 0x38; // SolveIKChainAnimNodeDebugSetting
                constexpr std::ptrdiff_t m_flDebugNormalizedValue = 0x3C; // float32
                constexpr std::ptrdiff_t m_vDebugOffset = 0x40; // VectorAligned
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CConstraintSlave {
                constexpr std::ptrdiff_t m_qBaseOrientation = 0x0; // Quaternion
                constexpr std::ptrdiff_t m_vBasePosition = 0x10; // Vector
                constexpr std::ptrdiff_t m_nBoneHash = 0x1C; // uint32
                constexpr std::ptrdiff_t m_flWeight = 0x20; // float32
                constexpr std::ptrdiff_t m_sName = 0x28; // CUtlString
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootCycleDefinition {
                constexpr std::ptrdiff_t m_vStancePositionMS = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMidpointPositionMS = 0xC; // Vector
                constexpr std::ptrdiff_t m_flStanceDirectionMS = 0x18; // float32
                constexpr std::ptrdiff_t m_vToStrideStartPos = 0x1C; // Vector
                constexpr std::ptrdiff_t m_stanceCycle = 0x28; // CAnimCycle
                constexpr std::ptrdiff_t m_footLiftCycle = 0x2C; // CFootCycle
                constexpr std::ptrdiff_t m_footOffCycle = 0x30; // CFootCycle
                constexpr std::ptrdiff_t m_footStrikeCycle = 0x34; // CFootCycle
                constexpr std::ptrdiff_t m_footLandCycle = 0x38; // CFootCycle
            }
            // Parent: CAnimParameterBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVirtualAnimParameter {
                constexpr std::ptrdiff_t m_expressionString = 0x68; // CUtlString
                constexpr std::ptrdiff_t m_eParamType = 0x70; // AnimParamType_t
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionMetricEvaluator {
                constexpr std::ptrdiff_t m_means = 0x18; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_standardDeviations = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flWeight = 0x48; // float32
                constexpr std::ptrdiff_t m_nDimensionStartIndex = 0x4C; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFutureVelocityMetricEvaluator {
                constexpr std::ptrdiff_t m_flDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flStoppingDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flTargetSpeed = 0x58; // float32
                constexpr std::ptrdiff_t m_eMode = 0x5C; // VelocityMetricMode
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateNodeBase {
                constexpr std::ptrdiff_t m_nodePath = 0x18; // CAnimNodePath
                constexpr std::ptrdiff_t m_networkMode = 0x48; // AnimNodeNetworkMode
                constexpr std::ptrdiff_t m_name = 0x50; // CUtlString
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSetParameterActionUpdater {
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_value = 0x1A; // CAnimVariant
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraphVariation {
                constexpr std::ptrdiff_t m_graph = 0x0; // CStrongHandle<InfoForResourceTypeCNmGraph>
                constexpr std::ptrdiff_t m_dataSet = 0x8; // CStrongHandle<InfoForResourceTypeCNmGraphDataSet>
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonAnimCapture_t__FrameStamp_t {
                constexpr std::ptrdiff_t m_flTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flEntitySimTime = 0x4; // float32
                constexpr std::ptrdiff_t m_bTeleportTick = 0x8; // bool
                constexpr std::ptrdiff_t m_bPredicted = 0x9; // bool
                constexpr std::ptrdiff_t m_flCurTime = 0xC; // float32
                constexpr std::ptrdiff_t m_flRealTime = 0x10; // float32
                constexpr std::ptrdiff_t m_nFrameCount = 0x14; // int32
                constexpr std::ptrdiff_t m_nTickCount = 0x18; // int32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBonePositionMetricEvaluator {
                constexpr std::ptrdiff_t m_nBoneIndex = 0x50; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderBufferBinding {
                constexpr std::ptrdiff_t m_hBuffer = 0x0; // uint64
                constexpr std::ptrdiff_t m_nBindOffsetBytes = 0x10; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMeshletDescriptor {
                constexpr std::ptrdiff_t m_PackedAABB = 0x0; // PackedAABB_t
                constexpr std::ptrdiff_t m_CullingData = 0x8; // CDrawCullingData
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphSetData {
                constexpr std::ptrdiff_t m_nWidth = 0x10; // int32
                constexpr std::ptrdiff_t m_nHeight = 0x14; // int32
                constexpr std::ptrdiff_t m_bundleTypes = 0x18; // CUtlVector<MorphBundleType_t>
                constexpr std::ptrdiff_t m_morphDatas = 0x30; // CUtlVector<CMorphData>
                constexpr std::ptrdiff_t m_pTextureAtlas = 0x48; // CStrongHandle<InfoForResourceTypeCTextureBase>
                constexpr std::ptrdiff_t m_FlexDesc = 0x50; // CUtlVector<CFlexDesc>
                constexpr std::ptrdiff_t m_FlexControllers = 0x68; // CUtlVector<CFlexController>
                constexpr std::ptrdiff_t m_FlexRules = 0x80; // CUtlVector<CFlexRule>
            }
            // Parent: CBaseConstraint
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMorphConstraint {
                constexpr std::ptrdiff_t m_sTargetMorph = 0x70; // CUtlString
                constexpr std::ptrdiff_t m_nSlaveChannel = 0x78; // int32
                constexpr std::ptrdiff_t m_flMin = 0x7C; // float32
                constexpr std::ptrdiff_t m_flMax = 0x80; // float32
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CClothSettingsAnimTag {
                constexpr std::ptrdiff_t m_flStiffness = 0x50; // float32
                constexpr std::ptrdiff_t m_flEaseIn = 0x54; // float32
                constexpr std::ptrdiff_t m_flEaseOut = 0x58; // float32
                constexpr std::ptrdiff_t m_nVertexSet = 0x60; // CUtlString
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDesc_Flag {
                constexpr std::ptrdiff_t m_bLooping = 0x0; // bool
                constexpr std::ptrdiff_t m_bAllZeros = 0x1; // bool
                constexpr std::ptrdiff_t m_bHidden = 0x2; // bool
                constexpr std::ptrdiff_t m_bDelta = 0x3; // bool
                constexpr std::ptrdiff_t m_bLegacyWorldspace = 0x4; // bool
                constexpr std::ptrdiff_t m_bModelDoc = 0x5; // bool
                constexpr std::ptrdiff_t m_bImplicitSeqIgnoreDelta = 0x6; // bool
                constexpr std::ptrdiff_t m_bAnimGraphAdditive = 0x7; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBlendCurve {
                constexpr std::ptrdiff_t m_flControlPoint1 = 0x0; // float32
                constexpr std::ptrdiff_t m_flControlPoint2 = 0x4; // float32
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerSphere {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_flRadius = 0x50; // float32
                constexpr std::ptrdiff_t m_Color = 0x54; // Color
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUserDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_nType = 0x10; // int32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTransitionUpdateData {
                constexpr std::ptrdiff_t m_srcStateIndex = 0x0; // uint8
                constexpr std::ptrdiff_t m_destStateIndex = 0x1; // uint8
                constexpr std::ptrdiff_t m_bDisabled = 0x0; // bitfield:1
            }
            // Parent: None
            // Fields count: 2
            namespace CBoneConstraintPoseSpaceBone__Input_t {
                constexpr std::ptrdiff_t m_inputValue = 0x0; // Vector
                constexpr std::ptrdiff_t m_outputTransformList = 0x10; // CUtlVector<CTransform>
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqMultiFetch {
                constexpr std::ptrdiff_t m_flags = 0x0; // CSeqMultiFetchFlag
                constexpr std::ptrdiff_t m_localReferenceArray = 0x8; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_nGroupSize = 0x20; // int32[2]
                constexpr std::ptrdiff_t m_nLocalPose = 0x28; // int32[2]
                constexpr std::ptrdiff_t m_poseKeyArray0 = 0x30; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_poseKeyArray1 = 0x48; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_nLocalCyclePoseParameter = 0x60; // int32
                constexpr std::ptrdiff_t m_bCalculatePoseParameters = 0x64; // bool
                constexpr std::ptrdiff_t m_bFixedBlendWeight = 0x65; // bool
                constexpr std::ptrdiff_t m_flFixedBlendWeightVals = 0x68; // float32[2]
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesSoundNames {
                constexpr std::ptrdiff_t m_impactSoft = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_impactHard = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_scrapeSmooth = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_scrapeRough = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_bulletImpact = 0x20; // CUtlString
                constexpr std::ptrdiff_t m_rolling = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_break = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_strain = 0x38; // CUtlString
            }
            // Parent: CAnimTagBase
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CAudioAnimTag {
                constexpr std::ptrdiff_t m_clipName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_attachmentName = 0x58; // CUtlString
                constexpr std::ptrdiff_t m_flVolume = 0x60; // float32
                constexpr std::ptrdiff_t m_bStopWhenTagEnds = 0x64; // bool
                constexpr std::ptrdiff_t m_bStopWhenGraphEnds = 0x65; // bool
                constexpr std::ptrdiff_t m_bPlayOnServer = 0x66; // bool
                constexpr std::ptrdiff_t m_bPlayOnClient = 0x67; // bool
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTurnHelperUpdateNode {
                constexpr std::ptrdiff_t m_facingTarget = 0x6C; // AnimValueSource
                constexpr std::ptrdiff_t m_turnStartTimeOffset = 0x70; // float32
                constexpr std::ptrdiff_t m_turnDuration = 0x74; // float32
                constexpr std::ptrdiff_t m_bMatchChildDuration = 0x78; // bool
                constexpr std::ptrdiff_t m_manualTurnOffset = 0x7C; // float32
                constexpr std::ptrdiff_t m_bUseManualTurnOffset = 0x80; // bool
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGroup {
                constexpr std::ptrdiff_t m_nFlags = 0x10; // uint32
                constexpr std::ptrdiff_t m_name = 0x18; // CBufferString
                constexpr std::ptrdiff_t m_localHAnimArray_Handle = 0x60; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimData>>
                constexpr std::ptrdiff_t m_includedGroupArray_Handle = 0x78; // CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>>
                constexpr std::ptrdiff_t m_directHSeqGroup_Handle = 0x90; // CStrongHandle<InfoForResourceTypeCSequenceGroupData>
                constexpr std::ptrdiff_t m_decodeKey = 0x98; // CAnimKeyData
                constexpr std::ptrdiff_t m_szScripts = 0x110; // CUtlVector<CBufferString>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmSyncTrackTime_t {
                constexpr std::ptrdiff_t m_nEventIdx = 0x0; // int32
                constexpr std::ptrdiff_t m_percentageThrough = 0x4; // NmPercent_t
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmClip {
                constexpr std::ptrdiff_t m_skeleton = 0x0; // CStrongHandle<InfoForResourceTypeCNmSkeleton>
                constexpr std::ptrdiff_t m_nNumFrames = 0x8; // uint32
                constexpr std::ptrdiff_t m_flDuration = 0xC; // float32
                constexpr std::ptrdiff_t m_compressedPoseData = 0x10; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_trackCompressionSettings = 0x28; // CUtlVector<NmCompressionSettings_t>
                constexpr std::ptrdiff_t m_compressedPoseOffsets = 0x40; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_syncTrack = 0xA0; // CNmSyncTrack
                constexpr std::ptrdiff_t m_rootMotion = 0x150; // CNmRootMotionData
                constexpr std::ptrdiff_t m_bIsAdditive = 0x1A0; // bool
            }
            // Parent: CAnimActionUpdater
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CToggleComponentActionUpdater {
                constexpr std::ptrdiff_t m_componentID = 0x18; // AnimComponentID
                constexpr std::ptrdiff_t m_bSetEnabled = 0x1C; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerPrimitiveBase {
                constexpr std::ptrdiff_t m_Type = 0x8; // CAnimationGraphVisualizerPrimitiveType
                constexpr std::ptrdiff_t m_OwningAnimNodePaths = 0xC; // AnimNodeID[11]
                constexpr std::ptrdiff_t m_nOwningAnimNodePathCount = 0x38; // int32
            }
            // Parent: CLeafUpdateNode
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBindPoseUpdateNode {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NmSyncTrackTimeRange_t {
                constexpr std::ptrdiff_t m_startTime = 0x0; // NmSyncTrackTime_t
                constexpr std::ptrdiff_t m_endTime = 0x8; // NmSyncTrackTime_t
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerText {
                constexpr std::ptrdiff_t m_vWsPosition = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x50; // Color
                constexpr std::ptrdiff_t m_Text = 0x58; // CUtlString
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootTrajectory {
                constexpr std::ptrdiff_t m_vOffset = 0x0; // Vector
                constexpr std::ptrdiff_t m_flRotationOffset = 0xC; // float32
                constexpr std::ptrdiff_t m_flProgression = 0x10; // float32
            }
            // Parent: CLeafUpdateNode
            // Fields count: 23
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionMatchingUpdateNode {
                constexpr std::ptrdiff_t m_dataSet = 0x58; // CMotionDataSet
                constexpr std::ptrdiff_t m_metrics = 0x78; // CUtlVector<CSmartPtr<CMotionMetricEvaluator>>
                constexpr std::ptrdiff_t m_weights = 0x90; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_bSearchEveryTick = 0xE0; // bool
                constexpr std::ptrdiff_t m_flSearchInterval = 0xE4; // float32
                constexpr std::ptrdiff_t m_bSearchWhenClipEnds = 0xE8; // bool
                constexpr std::ptrdiff_t m_bSearchWhenGoalChanges = 0xE9; // bool
                constexpr std::ptrdiff_t m_blendCurve = 0xEC; // CBlendCurve
                constexpr std::ptrdiff_t m_flSampleRate = 0xF4; // float32
                constexpr std::ptrdiff_t m_flBlendTime = 0xF8; // float32
                constexpr std::ptrdiff_t m_bLockClipWhenWaning = 0xFC; // bool
                constexpr std::ptrdiff_t m_flSelectionThreshold = 0x100; // float32
                constexpr std::ptrdiff_t m_flReselectionTimeWindow = 0x104; // float32
                constexpr std::ptrdiff_t m_bEnableRotationCorrection = 0x108; // bool
                constexpr std::ptrdiff_t m_bGoalAssist = 0x109; // bool
                constexpr std::ptrdiff_t m_flGoalAssistDistance = 0x10C; // float32
                constexpr std::ptrdiff_t m_flGoalAssistTolerance = 0x110; // float32
                constexpr std::ptrdiff_t m_distanceScale_Damping = 0x118; // CAnimInputDamping
                constexpr std::ptrdiff_t m_flDistanceScale_OuterRadius = 0x128; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_InnerRadius = 0x12C; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MaxScale = 0x130; // float32
                constexpr std::ptrdiff_t m_flDistanceScale_MinScale = 0x134; // float32
                constexpr std::ptrdiff_t m_bEnableDistanceScaling = 0x138; // bool
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqS1SeqDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_fetch = 0x20; // CSeqMultiFetch
                constexpr std::ptrdiff_t m_nLocalWeightlist = 0x90; // int32
                constexpr std::ptrdiff_t m_autoLayerArray = 0x98; // CUtlVector<CSeqAutoLayer>
                constexpr std::ptrdiff_t m_IKLockArray = 0xB0; // CUtlVector<CSeqIKLock>
                constexpr std::ptrdiff_t m_transition = 0xC8; // CSeqTransition
                constexpr std::ptrdiff_t m_SequenceKeys = 0xD0; // KeyValues3
                constexpr std::ptrdiff_t m_LegacyKeyValueText = 0xE0; // CBufferString
                constexpr std::ptrdiff_t m_activityArray = 0xF0; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_footMotion = 0x108; // CUtlVector<CFootMotion>
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexController {
                constexpr std::ptrdiff_t m_szName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_szType = 0x8; // CUtlString
                constexpr std::ptrdiff_t min = 0x10; // float32
                constexpr std::ptrdiff_t max = 0x14; // float32
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonDemoDb_t {
                constexpr std::ptrdiff_t m_AnimCaptures = 0x0; // CUtlVector<SkeletonAnimCapture_t*>
                constexpr std::ptrdiff_t m_CameraTrack = 0x18; // CUtlVector<SkeletonAnimCapture_t::Camera_t>
                constexpr std::ptrdiff_t m_flRecordingTime = 0x30; // float32
            }
            // Parent: CMotionNode
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNodeSequence {
                constexpr std::ptrdiff_t m_tags = 0x28; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x40; // HSequence
                constexpr std::ptrdiff_t m_flPlaybackSpeed = 0x44; // float32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexDesc {
                constexpr std::ptrdiff_t m_szFacs = 0x0; // CUtlString
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderMesh {
                constexpr std::ptrdiff_t m_sceneObjects = 0x10; // CUtlVectorFixedGrowable<CSceneObjectData>
                constexpr std::ptrdiff_t m_constraints = 0xA0; // CUtlVector<CBaseConstraint*>
                constexpr std::ptrdiff_t m_skeleton = 0xB8; // CRenderSkeleton
                constexpr std::ptrdiff_t m_meshDeformParams = 0x1E0; // DynamicMeshDeformParams_t
                constexpr std::ptrdiff_t m_pGroomData = 0x1F0; // CRenderGroom*
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimSkeleton {
                constexpr std::ptrdiff_t m_localSpaceTransforms = 0x10; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_modelSpaceTransforms = 0x28; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_boneNames = 0x40; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_children = 0x58; // CUtlVector<CUtlVector<int32>>
                constexpr std::ptrdiff_t m_parents = 0x70; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_feet = 0x88; // CUtlVector<CAnimFoot>
                constexpr std::ptrdiff_t m_morphNames = 0xA0; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_lodBoneCounts = 0xB8; // CUtlVector<int32>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysics2ShapeDef_t {
                constexpr std::ptrdiff_t m_spheres = 0x0; // CUtlVector<RnSphereDesc_t>
                constexpr std::ptrdiff_t m_capsules = 0x18; // CUtlVector<RnCapsuleDesc_t>
                constexpr std::ptrdiff_t m_hulls = 0x30; // CUtlVector<RnHullDesc_t>
                constexpr std::ptrdiff_t m_meshes = 0x48; // CUtlVector<RnMeshDesc_t>
                constexpr std::ptrdiff_t m_CollisionAttributeIndices = 0x60; // CUtlVector<uint16>
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerAxis {
                constexpr std::ptrdiff_t m_xWsTransform = 0x40; // CTransform
                constexpr std::ptrdiff_t m_flAxisSize = 0x60; // float32
            }
            // Parent: CBaseConstraint
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTwistConstraint {
                constexpr std::ptrdiff_t m_bInverse = 0x70; // bool
                constexpr std::ptrdiff_t m_qParentBindRotation = 0x80; // Quaternion
                constexpr std::ptrdiff_t m_qChildBindRotation = 0x90; // Quaternion
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ModelBoneFlexDriverControl_t {
                constexpr std::ptrdiff_t m_nBoneComponent = 0x0; // ModelBoneFlexComponent_t
                constexpr std::ptrdiff_t m_flexController = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_flexControllerToken = 0x10; // uint32
                constexpr std::ptrdiff_t m_flMin = 0x14; // float32
                constexpr std::ptrdiff_t m_flMax = 0x18; // float32
            }
            // Parent: None
            // Fields count: 9
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqCmdLayer {
                constexpr std::ptrdiff_t m_cmd = 0x0; // int16
                constexpr std::ptrdiff_t m_nLocalReference = 0x2; // int16
                constexpr std::ptrdiff_t m_nLocalBonemask = 0x4; // int16
                constexpr std::ptrdiff_t m_nDstResult = 0x6; // int16
                constexpr std::ptrdiff_t m_nSrcResult = 0x8; // int16
                constexpr std::ptrdiff_t m_bSpline = 0xA; // bool
                constexpr std::ptrdiff_t m_flVar1 = 0xC; // float32
                constexpr std::ptrdiff_t m_flVar2 = 0x10; // float32
                constexpr std::ptrdiff_t m_nLineNumber = 0x14; // int16
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootPinningPoseOpFixedData_t {
                constexpr std::ptrdiff_t m_footInfo = 0x0; // CUtlVector<FootFixedData_t>
                constexpr std::ptrdiff_t m_flBlendTime = 0x18; // float32
                constexpr std::ptrdiff_t m_flLockBreakDistance = 0x1C; // float32
                constexpr std::ptrdiff_t m_flMaxLegTwist = 0x20; // float32
                constexpr std::ptrdiff_t m_nHipBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_bApplyLegTwistLimits = 0x28; // bool
                constexpr std::ptrdiff_t m_bApplyFootRotationLimits = 0x29; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderSkeletonBone_t {
                constexpr std::ptrdiff_t m_boneName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_parentName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_invBindPose = 0x10; // matrix3x4_t
                constexpr std::ptrdiff_t m_bbox = 0x40; // SkeletonBoneBounds_t
                constexpr std::ptrdiff_t m_flSphereRadius = 0x58; // float32
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDistanceRemainingMetricEvaluator {
                constexpr std::ptrdiff_t m_flMaxDistance = 0x50; // float32
                constexpr std::ptrdiff_t m_flMinDistance = 0x54; // float32
                constexpr std::ptrdiff_t m_flStartGoalFilterDistance = 0x58; // float32
                constexpr std::ptrdiff_t m_flMaxGoalOvershootScale = 0x5C; // float32
                constexpr std::ptrdiff_t m_bFilterFixedMinDistance = 0x60; // bool
                constexpr std::ptrdiff_t m_bFilterGoalDistance = 0x61; // bool
                constexpr std::ptrdiff_t m_bFilterGoalOvershoot = 0x62; // bool
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDirectPlaybackUpdateNode {
                constexpr std::ptrdiff_t m_bFinishEarly = 0x6C; // bool
                constexpr std::ptrdiff_t m_bResetOnFinish = 0x6D; // bool
                constexpr std::ptrdiff_t m_allTags = 0x70; // CUtlVector<CDirectPlaybackTagData>
            }
            // Parent: CNmEvent
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmIDEvent {
                constexpr std::ptrdiff_t m_ID = 0x10; // CGlobalSymbol
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFlexRule {
                constexpr std::ptrdiff_t m_nFlex = 0x0; // int32
                constexpr std::ptrdiff_t m_FlexOps = 0x8; // CUtlVector<CFlexOp>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ScriptInfo_t {
                constexpr std::ptrdiff_t m_code = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_paramsModified = 0x8; // CUtlVector<CAnimParamHandle>
                constexpr std::ptrdiff_t m_proxyReadParams = 0x20; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_proxyWriteParams = 0x38; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_eScriptType = 0x50; // AnimScriptType
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderGroom {
                constexpr std::ptrdiff_t m_nSegmentsPerHairStrand = 0x0; // int32
                constexpr std::ptrdiff_t m_nGuideHairCount = 0x4; // int32
                constexpr std::ptrdiff_t m_nHairCount = 0x8; // int32
                constexpr std::ptrdiff_t m_nGroomGroupID = 0xC; // int32
                constexpr std::ptrdiff_t m_nAttachBoneIdx = 0x10; // int32
                constexpr std::ptrdiff_t m_hairInfoBufferData = 0x18; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_hairs = 0x30; // CUtlVector<RenderHairStrandInfo_t>
            }
            // Parent: CBaseConstraint
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTiltTwistConstraint {
                constexpr std::ptrdiff_t m_nTargetAxis = 0x70; // int32
                constexpr std::ptrdiff_t m_nSlaveAxis = 0x74; // int32
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CVPhysXSurfacePropertiesList {
                constexpr std::ptrdiff_t m_surfacePropertiesList = 0x0; // CUtlVector<CPhysSurfaceProperties*>
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace RenderHairStrandInfo_t {
                constexpr std::ptrdiff_t m_nGuideIdx = 0x0; // uint32[3]
                constexpr std::ptrdiff_t m_nBaseTriIdx = 0xC; // uint32
                constexpr std::ptrdiff_t m_vGuideBarycentric = 0x10; // Vector2D
                constexpr std::ptrdiff_t m_vBaseBarycentric = 0x18; // Vector2D
                constexpr std::ptrdiff_t m_vRootOffset_flLengthScale = 0x20; // uint16[4]
                constexpr std::ptrdiff_t m_nPackedBaseMeshUv = 0x28; // uint32
                constexpr std::ptrdiff_t m_nPad = 0x2C; // uint32
            }
            // Parent: CLeafUpdateNode
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCycleControlClipUpdateNode {
                constexpr std::ptrdiff_t m_tags = 0x60; // CUtlVector<TagSpan_t>
                constexpr std::ptrdiff_t m_hSequence = 0x7C; // HSequence
                constexpr std::ptrdiff_t m_duration = 0x80; // float32
                constexpr std::ptrdiff_t m_valueSource = 0x84; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x88; // CAnimParamHandle
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStaticPoseCache {
                constexpr std::ptrdiff_t m_poses = 0x10; // CUtlVector<CCachedPose>
                constexpr std::ptrdiff_t m_nBoneCount = 0x28; // int32
                constexpr std::ptrdiff_t m_nMorphCount = 0x2C; // int32
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace LookAtOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_bones = 0x90; // CUtlVector<LookAtBone_t>
                constexpr std::ptrdiff_t m_flYawLimit = 0xA8; // float32
                constexpr std::ptrdiff_t m_flPitchLimit = 0xAC; // float32
                constexpr std::ptrdiff_t m_flHysteresisInnerAngle = 0xB0; // float32
                constexpr std::ptrdiff_t m_flHysteresisOuterAngle = 0xB4; // float32
                constexpr std::ptrdiff_t m_bRotateYawForward = 0xB8; // bool
                constexpr std::ptrdiff_t m_bMaintainUpDirection = 0xB9; // bool
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xBA; // bool
                constexpr std::ptrdiff_t m_bUseHysteresis = 0xBB; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphSettingsManager {
                constexpr std::ptrdiff_t m_settingsGroups = 0x18; // CUtlVector<CSmartPtr<CAnimGraphSettingsGroup>>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimGraphModelBinding {
                constexpr std::ptrdiff_t m_modelName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_pSharedData = 0x10; // CSmartPtr<CAnimUpdateSharedData>
            }
            // Parent: CBaseConstraint
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintPoseSpaceBone {
                constexpr std::ptrdiff_t m_inputList = 0x70; // CUtlVector<CBoneConstraintPoseSpaceBone::Input_t>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MotionBlendItem {
                constexpr std::ptrdiff_t m_pChild = 0x0; // CSmartPtr<CMotionNode>
                constexpr std::ptrdiff_t m_flKeyValue = 0x8; // float32
            }
            // Parent: CBoneConstraintBase
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintPoseSpaceMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_sAttachmentName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_outputMorph = 0x38; // CUtlVector<CUtlString>
                constexpr std::ptrdiff_t m_inputList = 0x50; // CUtlVector<CBoneConstraintPoseSpaceMorph::Input_t>
                constexpr std::ptrdiff_t m_bClamp = 0x68; // bool
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CFloatAnimParameter {
                constexpr std::ptrdiff_t m_fDefaultValue = 0x78; // float32
                constexpr std::ptrdiff_t m_fMinValue = 0x7C; // float32
                constexpr std::ptrdiff_t m_fMaxValue = 0x80; // float32
                constexpr std::ptrdiff_t m_bInterpolate = 0x84; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateActionUpdater {
                constexpr std::ptrdiff_t m_pAction = 0x0; // CSmartPtr<CAnimActionUpdater>
                constexpr std::ptrdiff_t m_eBehavior = 0x8; // StateActionBehavior
            }
            // Parent: CAnimMotorUpdaterBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPlayerInputAnimMotorUpdater {
                constexpr std::ptrdiff_t m_sampleTimes = 0x20; // CUtlVector<float32>
                constexpr std::ptrdiff_t m_flSpringConstant = 0x3C; // float32
                constexpr std::ptrdiff_t m_flAnticipationDistance = 0x40; // float32
                constexpr std::ptrdiff_t m_hAnticipationPosParam = 0x44; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hAnticipationHeadingParam = 0x46; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bUseAcceleration = 0x48; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRenderSkeleton {
                constexpr std::ptrdiff_t m_bones = 0x0; // CUtlVector<RenderSkeletonBone_t>
                constexpr std::ptrdiff_t m_boneParents = 0x30; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_nBoneWeightCount = 0x48; // int32
            }
            // Parent: None
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqIKLock {
                constexpr std::ptrdiff_t m_flPosWeight = 0x0; // float32
                constexpr std::ptrdiff_t m_flAngleWeight = 0x4; // float32
                constexpr std::ptrdiff_t m_nLocalBone = 0x8; // int16
                constexpr std::ptrdiff_t m_bBonesOrientedAlongPositiveX = 0xA; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimParamHandleMap {
                constexpr std::ptrdiff_t m_list = 0x0; // CUtlHashtable<uint16,int16>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmGraph__ChildGraphSlot_t {
                constexpr std::ptrdiff_t m_nNodeIdx = 0x0; // int16
                constexpr std::ptrdiff_t m_dataSlotIdx = 0x2; // int16
            }
            // Parent: None
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimDesc {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CAnimDesc_Flag
                constexpr std::ptrdiff_t fps = 0x18; // float32
                constexpr std::ptrdiff_t m_Data = 0x20; // CAnimEncodedFrames
                constexpr std::ptrdiff_t m_movementArray = 0xF8; // CUtlVector<CAnimMovement>
                constexpr std::ptrdiff_t m_eventArray = 0x110; // CUtlVector<CAnimEventDefinition>
                constexpr std::ptrdiff_t m_activityArray = 0x128; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_hierarchyArray = 0x140; // CUtlVector<CAnimLocalHierarchy>
                constexpr std::ptrdiff_t framestalltime = 0x158; // float32
                constexpr std::ptrdiff_t m_vecRootMin = 0x15C; // Vector
                constexpr std::ptrdiff_t m_vecRootMax = 0x168; // Vector
                constexpr std::ptrdiff_t m_vecBoneWorldMin = 0x178; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_vecBoneWorldMax = 0x190; // CUtlVector<Vector>
                constexpr std::ptrdiff_t m_sequenceParams = 0x1A8; // CAnimSequenceParams
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesPhysics {
                constexpr std::ptrdiff_t m_friction = 0x0; // float32
                constexpr std::ptrdiff_t m_elasticity = 0x4; // float32
                constexpr std::ptrdiff_t m_density = 0x8; // float32
                constexpr std::ptrdiff_t m_thickness = 0xC; // float32
                constexpr std::ptrdiff_t m_softContactFrequency = 0x10; // float32
                constexpr std::ptrdiff_t m_softContactDampingRatio = 0x14; // float32
                constexpr std::ptrdiff_t m_wheelDrag = 0x18; // float32
            }
            // Parent: CAnimationGraphVisualizerPrimitiveBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimationGraphVisualizerPie {
                constexpr std::ptrdiff_t m_vWsCenter = 0x40; // VectorAligned
                constexpr std::ptrdiff_t m_vWsStart = 0x50; // VectorAligned
                constexpr std::ptrdiff_t m_vWsEnd = 0x60; // VectorAligned
                constexpr std::ptrdiff_t m_Color = 0x70; // Color
            }
            // Parent: CBoneConstraintBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintDotToMorph {
                constexpr std::ptrdiff_t m_sBoneName = 0x28; // CUtlString
                constexpr std::ptrdiff_t m_sTargetBoneName = 0x30; // CUtlString
                constexpr std::ptrdiff_t m_sMorphChannelName = 0x38; // CUtlString
                constexpr std::ptrdiff_t m_flRemap = 0x40; // float32[4]
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPointConstraint {
            }
            // Parent: CMotionMetricEvaluator
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCurrentRotationVelocityMetricEvaluator {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TraceSettings_t {
                constexpr std::ptrdiff_t m_flTraceHeight = 0x0; // float32
                constexpr std::ptrdiff_t m_flTraceRadius = 0x4; // float32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParamSpanSample_t {
                constexpr std::ptrdiff_t m_value = 0x0; // CAnimVariant
                constexpr std::ptrdiff_t m_flCycle = 0x14; // float32
            }
            // Parent: None
            // Fields count: 46
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXConstraintParams_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // int8
                constexpr std::ptrdiff_t m_nTranslateMotion = 0x1; // int8
                constexpr std::ptrdiff_t m_nRotateMotion = 0x2; // int8
                constexpr std::ptrdiff_t m_nFlags = 0x3; // int8
                constexpr std::ptrdiff_t m_anchor = 0x4; // Vector[2]
                constexpr std::ptrdiff_t m_axes = 0x1C; // QuaternionStorage[2]
                constexpr std::ptrdiff_t m_maxForce = 0x3C; // float32
                constexpr std::ptrdiff_t m_maxTorque = 0x40; // float32
                constexpr std::ptrdiff_t m_linearLimitValue = 0x44; // float32
                constexpr std::ptrdiff_t m_linearLimitRestitution = 0x48; // float32
                constexpr std::ptrdiff_t m_linearLimitSpring = 0x4C; // float32
                constexpr std::ptrdiff_t m_linearLimitDamping = 0x50; // float32
                constexpr std::ptrdiff_t m_twistLowLimitValue = 0x54; // float32
                constexpr std::ptrdiff_t m_twistLowLimitRestitution = 0x58; // float32
                constexpr std::ptrdiff_t m_twistLowLimitSpring = 0x5C; // float32
                constexpr std::ptrdiff_t m_twistLowLimitDamping = 0x60; // float32
                constexpr std::ptrdiff_t m_twistHighLimitValue = 0x64; // float32
                constexpr std::ptrdiff_t m_twistHighLimitRestitution = 0x68; // float32
                constexpr std::ptrdiff_t m_twistHighLimitSpring = 0x6C; // float32
                constexpr std::ptrdiff_t m_twistHighLimitDamping = 0x70; // float32
                constexpr std::ptrdiff_t m_swing1LimitValue = 0x74; // float32
                constexpr std::ptrdiff_t m_swing1LimitRestitution = 0x78; // float32
                constexpr std::ptrdiff_t m_swing1LimitSpring = 0x7C; // float32
                constexpr std::ptrdiff_t m_swing1LimitDamping = 0x80; // float32
                constexpr std::ptrdiff_t m_swing2LimitValue = 0x84; // float32
                constexpr std::ptrdiff_t m_swing2LimitRestitution = 0x88; // float32
                constexpr std::ptrdiff_t m_swing2LimitSpring = 0x8C; // float32
                constexpr std::ptrdiff_t m_swing2LimitDamping = 0x90; // float32
                constexpr std::ptrdiff_t m_goalPosition = 0x94; // Vector
                constexpr std::ptrdiff_t m_goalOrientation = 0xA0; // QuaternionStorage
                constexpr std::ptrdiff_t m_goalAngularVelocity = 0xB0; // Vector
                constexpr std::ptrdiff_t m_driveSpringX = 0xBC; // float32
                constexpr std::ptrdiff_t m_driveSpringY = 0xC0; // float32
                constexpr std::ptrdiff_t m_driveSpringZ = 0xC4; // float32
                constexpr std::ptrdiff_t m_driveDampingX = 0xC8; // float32
                constexpr std::ptrdiff_t m_driveDampingY = 0xCC; // float32
                constexpr std::ptrdiff_t m_driveDampingZ = 0xD0; // float32
                constexpr std::ptrdiff_t m_driveSpringTwist = 0xD4; // float32
                constexpr std::ptrdiff_t m_driveSpringSwing = 0xD8; // float32
                constexpr std::ptrdiff_t m_driveSpringSlerp = 0xDC; // float32
                constexpr std::ptrdiff_t m_driveDampingTwist = 0xE0; // float32
                constexpr std::ptrdiff_t m_driveDampingSwing = 0xE4; // float32
                constexpr std::ptrdiff_t m_driveDampingSlerp = 0xE8; // float32
                constexpr std::ptrdiff_t m_solverIterationCount = 0xEC; // int32
                constexpr std::ptrdiff_t m_projectionLinearTolerance = 0xF0; // float32
                constexpr std::ptrdiff_t m_projectionAngularTolerance = 0xF4; // float32
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CStateUpdateData {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_hScript = 0x8; // AnimScriptHandle
                constexpr std::ptrdiff_t m_transitionIndices = 0x10; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_actions = 0x28; // CUtlVector<CStateActionUpdater>
                constexpr std::ptrdiff_t m_stateID = 0x40; // AnimStateID
                constexpr std::ptrdiff_t m_bIsStartState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsEndState = 0x0; // bitfield:1
                constexpr std::ptrdiff_t m_bIsPassthrough = 0x0; // bitfield:1
            }
            // Parent: CBaseConstraint
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace COrientConstraint {
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMoverUpdateNode {
                constexpr std::ptrdiff_t m_damping = 0x70; // CAnimInputDamping
                constexpr std::ptrdiff_t m_facingTarget = 0x80; // AnimValueSource
                constexpr std::ptrdiff_t m_hMoveVecParam = 0x84; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hMoveHeadingParam = 0x86; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hTurnToFaceParam = 0x88; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0x8C; // float32
                constexpr std::ptrdiff_t m_flTurnToFaceLimit = 0x90; // float32
                constexpr std::ptrdiff_t m_bAdditive = 0x94; // bool
                constexpr std::ptrdiff_t m_bApplyMovement = 0x95; // bool
                constexpr std::ptrdiff_t m_bOrientMovement = 0x96; // bool
                constexpr std::ptrdiff_t m_bApplyRotation = 0x97; // bool
                constexpr std::ptrdiff_t m_bLimitOnly = 0x98; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimMotorUpdaterBase {
                constexpr std::ptrdiff_t m_name = 0x10; // CUtlString
                constexpr std::ptrdiff_t m_bDefault = 0x18; // bool
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace JiggleBoneSettingsList_t {
                constexpr std::ptrdiff_t m_boneSettings = 0x0; // CUtlVector<JiggleBoneSettings_t>
            }
            // Parent: CBinaryUpdateNode
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSubtractUpdateNode {
                constexpr std::ptrdiff_t m_footMotionTiming = 0x8C; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bApplyToFootMotion = 0x90; // bool
                constexpr std::ptrdiff_t m_bApplyChannelsSeparately = 0x91; // bool
                constexpr std::ptrdiff_t m_bUseModelSpace = 0x92; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPoseHandle {
                constexpr std::ptrdiff_t m_nIndex = 0x0; // uint16
                constexpr std::ptrdiff_t m_eType = 0x2; // PoseType_t
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSolveIKChainUpdateNode {
                constexpr std::ptrdiff_t m_targetHandles = 0x68; // CUtlVector<CSolveIKTargetHandle_t>
                constexpr std::ptrdiff_t m_opFixedData = 0x80; // SolveIKChainPoseOpFixedSettings_t
            }
            // Parent: None
            // Fields count: 12
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqCmdSeqDesc {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_flags = 0x10; // CSeqSeqDescFlag
                constexpr std::ptrdiff_t m_transition = 0x1C; // CSeqTransition
                constexpr std::ptrdiff_t m_nFrameRangeSequence = 0x24; // int16
                constexpr std::ptrdiff_t m_nFrameCount = 0x26; // int16
                constexpr std::ptrdiff_t m_flFPS = 0x28; // float32
                constexpr std::ptrdiff_t m_nSubCycles = 0x2C; // int16
                constexpr std::ptrdiff_t m_numLocalResults = 0x2E; // int16
                constexpr std::ptrdiff_t m_cmdLayerArray = 0x30; // CUtlVector<CSeqCmdLayer>
                constexpr std::ptrdiff_t m_eventArray = 0x48; // CUtlVector<CAnimEventDefinition>
                constexpr std::ptrdiff_t m_activityArray = 0x60; // CUtlVector<CAnimActivity>
                constexpr std::ptrdiff_t m_poseSettingArray = 0x78; // CUtlVector<CSeqPoseSetting>
            }
            // Parent: CBinaryUpdateNode
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneMaskUpdateNode {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x8C; // int32
                constexpr std::ptrdiff_t m_flRootMotionBlend = 0x90; // float32
                constexpr std::ptrdiff_t m_blendSpace = 0x94; // BoneMaskBlendSpace
                constexpr std::ptrdiff_t m_footMotionTiming = 0x98; // BinaryNodeChildOption
                constexpr std::ptrdiff_t m_bUseBlendScale = 0x9C; // bool
                constexpr std::ptrdiff_t m_blendValueSource = 0xA0; // AnimValueSource
                constexpr std::ptrdiff_t m_hBlendParameter = 0xA4; // CAnimParamHandle
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CLeafUpdateNode {
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SolveIKChainPoseOpFixedSettings_t {
                constexpr std::ptrdiff_t m_ChainsToSolveData = 0x0; // CUtlVector<ChainToSolveData_t>
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x18; // bool
            }
            // Parent: None
            // Fields count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace TwoBoneIKSettings_t {
                constexpr std::ptrdiff_t m_endEffectorType = 0x0; // IkEndEffectorType
                constexpr std::ptrdiff_t m_endEffectorAttachment = 0x10; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetType = 0x90; // IkTargetType
                constexpr std::ptrdiff_t m_targetAttachment = 0xA0; // CAnimAttachment
                constexpr std::ptrdiff_t m_targetBoneIndex = 0x120; // int32
                constexpr std::ptrdiff_t m_hPositionParam = 0x124; // CAnimParamHandle
                constexpr std::ptrdiff_t m_hRotationParam = 0x126; // CAnimParamHandle
                constexpr std::ptrdiff_t m_bAlwaysUseFallbackHinge = 0x128; // bool
                constexpr std::ptrdiff_t m_vLsFallbackHingeAxis = 0x130; // VectorAligned
                constexpr std::ptrdiff_t m_nFixedBoneIndex = 0x140; // int32
                constexpr std::ptrdiff_t m_nMiddleBoneIndex = 0x144; // int32
                constexpr std::ptrdiff_t m_nEndBoneIndex = 0x148; // int32
                constexpr std::ptrdiff_t m_bMatchTargetOrientation = 0x14C; // bool
                constexpr std::ptrdiff_t m_bConstrainTwist = 0x14D; // bool
                constexpr std::ptrdiff_t m_flMaxTwist = 0x150; // float32
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimUpdateSharedData {
                constexpr std::ptrdiff_t m_nodes = 0x10; // CUtlVector<CSmartPtr<CAnimUpdateNodeBase>>
                constexpr std::ptrdiff_t m_nodeIndexMap = 0x28; // CUtlHashtable<CAnimNodePath,int32>
                constexpr std::ptrdiff_t m_components = 0x48; // CUtlVector<CSmartPtr<CAnimComponentUpdater>>
                constexpr std::ptrdiff_t m_pParamListUpdater = 0x60; // CSmartPtr<CAnimParameterManagerUpdater>
                constexpr std::ptrdiff_t m_pTagManagerUpdater = 0x68; // CSmartPtr<CAnimTagManagerUpdater>
                constexpr std::ptrdiff_t m_scriptManager = 0x70; // CSmartPtr<CAnimScriptManager>
                constexpr std::ptrdiff_t m_settings = 0x78; // CAnimGraphSettingsManager
                constexpr std::ptrdiff_t m_pStaticPoseCache = 0xA8; // CSmartPtr<CStaticPoseCacheBuilder>
                constexpr std::ptrdiff_t m_pSkeleton = 0xB0; // CSmartPtr<CAnimSkeleton>
                constexpr std::ptrdiff_t m_rootNodePath = 0xB8; // CAnimNodePath
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimAttachment {
                constexpr std::ptrdiff_t m_influenceRotations = 0x0; // Quaternion[3]
                constexpr std::ptrdiff_t m_influenceOffsets = 0x30; // VectorAligned[3]
                constexpr std::ptrdiff_t m_influenceIndices = 0x60; // int32[3]
                constexpr std::ptrdiff_t m_influenceWeights = 0x6C; // float32[3]
                constexpr std::ptrdiff_t m_numInfluences = 0x78; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootTrajectories {
                constexpr std::ptrdiff_t m_trajectories = 0x0; // CUtlVector<CFootTrajectory>
            }
            // Parent: CMotionGraph
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEditableMotionGraph {
            }
            // Parent: CAnimTagBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CStringAnimTag {
            }
            // Parent: CConcreteAnimParameter
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CBoolAnimParameter {
                constexpr std::ptrdiff_t m_bDefaultValue = 0x78; // bool
            }
            // Parent: CAnimTagBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CRagdollAnimTag {
                constexpr std::ptrdiff_t m_nPoseControl = 0x50; // AnimPoseControl
                constexpr std::ptrdiff_t m_flFrequency = 0x54; // float32
                constexpr std::ptrdiff_t m_flDampingRatio = 0x58; // float32
                constexpr std::ptrdiff_t m_flDecayDuration = 0x5C; // float32
                constexpr std::ptrdiff_t m_flDecayBias = 0x60; // float32
                constexpr std::ptrdiff_t m_bDestroy = 0x64; // bool
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNode {
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlString
                constexpr std::ptrdiff_t m_id = 0x20; // AnimNodeID
            }
            // Parent: CAnimTagBase
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CBodyGroupAnimTag {
                constexpr std::ptrdiff_t m_nPriority = 0x50; // int32
                constexpr std::ptrdiff_t m_bodyGroupSettings = 0x58; // CUtlVector<CBodyGroupSetting>
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyEditClassAsString
            namespace AnimParamID {
                constexpr std::ptrdiff_t m_id = 0x0; // uint32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AnimationDecodeDebugDump_t {
                constexpr std::ptrdiff_t m_processingType = 0x0; // AnimationProcessingType_t
                constexpr std::ptrdiff_t m_elems = 0x8; // CUtlVector<AnimationDecodeDebugDumpElement_t>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqScaleSet {
                constexpr std::ptrdiff_t m_sName = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_bRootOffset = 0x10; // bool
                constexpr std::ptrdiff_t m_vRootOffset = 0x14; // Vector
                constexpr std::ptrdiff_t m_nLocalBoneArray = 0x20; // CUtlVector<int16>
                constexpr std::ptrdiff_t m_flBoneScaleArray = 0x38; // CUtlVector<float32>
            }
            // Parent: CLeafUpdateNode
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CDirectionalBlendUpdateNode {
                constexpr std::ptrdiff_t m_hSequences = 0x5C; // HSequence[8]
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_blendValueSource = 0x90; // AnimValueSource
                constexpr std::ptrdiff_t m_paramIndex = 0x94; // CAnimParamHandle
                constexpr std::ptrdiff_t m_playbackSpeed = 0x98; // float32
                constexpr std::ptrdiff_t m_duration = 0x9C; // float32
                constexpr std::ptrdiff_t m_bLoop = 0xA0; // bool
                constexpr std::ptrdiff_t m_bLockBlendOnReset = 0xA1; // bool
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ParamSpan_t {
                constexpr std::ptrdiff_t m_samples = 0x0; // CUtlVector<ParamSpanSample_t>
                constexpr std::ptrdiff_t m_hParam = 0x18; // CAnimParamHandle
                constexpr std::ptrdiff_t m_eParamType = 0x1A; // AnimParamType_t
                constexpr std::ptrdiff_t m_flStartCycle = 0x1C; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x20; // float32
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFootStepTriggerUpdateNode {
                constexpr std::ptrdiff_t m_triggers = 0x68; // CUtlVector<FootStepTrigger>
                constexpr std::ptrdiff_t m_flTolerance = 0x84; // float32
            }
            // Parent: None
            // Fields count: 5
            namespace IKTargetSettings_t {
                constexpr std::ptrdiff_t m_TargetSource = 0x0; // IKTargetSource
                constexpr std::ptrdiff_t m_Bone = 0x8; // IKBoneNameAndIndex_t
                constexpr std::ptrdiff_t m_AnimgraphParameterNamePosition = 0x18; // AnimParamID
                constexpr std::ptrdiff_t m_AnimgraphParameterNameOrientation = 0x1C; // AnimParamID
                constexpr std::ptrdiff_t m_TargetCoordSystem = 0x20; // IKTargetCoordinateSystem
            }
            // Parent: CModelConfigElement
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_SetRenderColor {
                constexpr std::ptrdiff_t m_Color = 0x48; // Color
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionSearchDB {
                constexpr std::ptrdiff_t m_rootNode = 0x0; // CMotionSearchNode
                constexpr std::ptrdiff_t m_residualQuantizer = 0x80; // CProductQuantizer
                constexpr std::ptrdiff_t m_codeIndices = 0xA0; // CUtlVector<MotionDBIndex>
            }
            // Parent: CMotionNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionNodeBlend1D {
                constexpr std::ptrdiff_t m_blendItems = 0x28; // CUtlVector<MotionBlendItem>
                constexpr std::ptrdiff_t m_nParamIndex = 0x40; // int32
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace SkeletonBoneBounds_t {
                constexpr std::ptrdiff_t m_vecCenter = 0x0; // Vector
                constexpr std::ptrdiff_t m_vecSize = 0xC; // Vector
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CTwoBoneIKUpdateNode {
                constexpr std::ptrdiff_t m_opFixedData = 0x70; // TwoBoneIKSettings_t
            }
            // Parent: None
            // Fields count: 10
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VPhysXBodyPart_t {
                constexpr std::ptrdiff_t m_nFlags = 0x0; // uint32
                constexpr std::ptrdiff_t m_flMass = 0x4; // float32
                constexpr std::ptrdiff_t m_rnShape = 0x8; // VPhysics2ShapeDef_t
                constexpr std::ptrdiff_t m_nCollisionAttributeIndex = 0x80; // uint16
                constexpr std::ptrdiff_t m_nReserved = 0x82; // uint16
                constexpr std::ptrdiff_t m_flInertiaScale = 0x84; // float32
                constexpr std::ptrdiff_t m_flLinearDamping = 0x88; // float32
                constexpr std::ptrdiff_t m_flAngularDamping = 0x8C; // float32
                constexpr std::ptrdiff_t m_bOverrideMassCenter = 0x90; // bool
                constexpr std::ptrdiff_t m_vMassCenterOverride = 0x94; // Vector
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFollowPathUpdateNode {
                constexpr std::ptrdiff_t m_flBlendOutTime = 0x6C; // float32
                constexpr std::ptrdiff_t m_bBlockNonPathMovement = 0x70; // bool
                constexpr std::ptrdiff_t m_bStopFeetAtGoal = 0x71; // bool
                constexpr std::ptrdiff_t m_bScaleSpeed = 0x72; // bool
                constexpr std::ptrdiff_t m_flScale = 0x74; // float32
                constexpr std::ptrdiff_t m_flMinAngle = 0x78; // float32
                constexpr std::ptrdiff_t m_flMaxAngle = 0x7C; // float32
                constexpr std::ptrdiff_t m_flSpeedScaleBlending = 0x80; // float32
                constexpr std::ptrdiff_t m_turnDamping = 0x88; // CAnimInputDamping
                constexpr std::ptrdiff_t m_facingTarget = 0x98; // AnimValueSource
                constexpr std::ptrdiff_t m_hParam = 0x9C; // CAnimParamHandle
                constexpr std::ptrdiff_t m_flTurnToFaceOffset = 0xA0; // float32
                constexpr std::ptrdiff_t m_bTurnToFace = 0xA4; // bool
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace AimMatrixOpFixedSettings_t {
                constexpr std::ptrdiff_t m_attachment = 0x0; // CAnimAttachment
                constexpr std::ptrdiff_t m_damping = 0x80; // CAnimInputDamping
                constexpr std::ptrdiff_t m_poseCacheHandles = 0x90; // CPoseHandle[10]
                constexpr std::ptrdiff_t m_eBlendMode = 0xB8; // AimMatrixBlendMode
                constexpr std::ptrdiff_t m_fAngleIncrement = 0xBC; // float32
                constexpr std::ptrdiff_t m_nSequenceMaxFrame = 0xC0; // int32
                constexpr std::ptrdiff_t m_nBoneMaskIndex = 0xC4; // int32
                constexpr std::ptrdiff_t m_bTargetIsPosition = 0xC8; // bool
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimScriptComponentUpdater {
                constexpr std::ptrdiff_t m_hScript = 0x30; // AnimScriptHandle
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CRagdollUpdateNode {
                constexpr std::ptrdiff_t m_nWeightListIndex = 0x68; // int32
                constexpr std::ptrdiff_t m_poseControlMethod = 0x6C; // RagdollPoseControl
            }
            // Parent: None
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBoneConstraintBase {
            }
            // Parent: CPathAnimMotorUpdaterBase
            // Fields count: 0
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPathAnimMotorUpdater {
            }
            // Parent: CAnimTagBase
            // Fields count: 4
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MPropertyFriendlyName
            namespace CMaterialAttributeAnimTag {
                constexpr std::ptrdiff_t m_AttributeName = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_AttributeType = 0x58; // MatterialAttributeTagType_t
                constexpr std::ptrdiff_t m_flValue = 0x5C; // float32
                constexpr std::ptrdiff_t m_Color = 0x60; // Color
            }
            // Parent: CNmEvent
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmFootEvent {
                constexpr std::ptrdiff_t m_phase = 0x10; // NmFootPhase_t
            }
            // Parent: None
            // Fields count: 8
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CPhysSurfacePropertiesAudio {
                constexpr std::ptrdiff_t m_reflectivity = 0x0; // float32
                constexpr std::ptrdiff_t m_hardnessFactor = 0x4; // float32
                constexpr std::ptrdiff_t m_roughnessFactor = 0x8; // float32
                constexpr std::ptrdiff_t m_roughThreshold = 0xC; // float32
                constexpr std::ptrdiff_t m_hardThreshold = 0x10; // float32
                constexpr std::ptrdiff_t m_hardVelocityThreshold = 0x14; // float32
                constexpr std::ptrdiff_t m_flStaticImpactVolume = 0x18; // float32
                constexpr std::ptrdiff_t m_flOcclusionFactor = 0x1C; // float32
            }
            // Parent: None
            // Fields count: 7
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSeqAutoLayer {
                constexpr std::ptrdiff_t m_nLocalReference = 0x0; // int16
                constexpr std::ptrdiff_t m_nLocalPose = 0x2; // int16
                constexpr std::ptrdiff_t m_flags = 0x4; // CSeqAutoLayerFlag
                constexpr std::ptrdiff_t m_start = 0xC; // float32
                constexpr std::ptrdiff_t m_peak = 0x10; // float32
                constexpr std::ptrdiff_t m_tail = 0x14; // float32
                constexpr std::ptrdiff_t m_end = 0x18; // float32
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PhysSoftbodyDesc_t {
                constexpr std::ptrdiff_t m_ParticleBoneHash = 0x0; // CUtlVector<uint32>
                constexpr std::ptrdiff_t m_Particles = 0x18; // CUtlVector<RnSoftbodyParticle_t>
                constexpr std::ptrdiff_t m_Springs = 0x30; // CUtlVector<RnSoftbodySpring_t>
                constexpr std::ptrdiff_t m_Capsules = 0x48; // CUtlVector<RnSoftbodyCapsule_t>
                constexpr std::ptrdiff_t m_InitPose = 0x60; // CUtlVector<CTransform>
                constexpr std::ptrdiff_t m_ParticleBoneName = 0x78; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimSequenceParams {
                constexpr std::ptrdiff_t m_flFadeInTime = 0x0; // float32
                constexpr std::ptrdiff_t m_flFadeOutTime = 0x4; // float32
            }
            // Parent: CAnimComponentUpdater
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CCPPScriptComponentUpdater {
                constexpr std::ptrdiff_t m_scriptsToRun = 0x30; // CUtlVector<CGlobalSymbol>
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimData {
                constexpr std::ptrdiff_t m_name = 0x10; // CBufferString
                constexpr std::ptrdiff_t m_animArray = 0x20; // CUtlVector<CAnimDesc>
                constexpr std::ptrdiff_t m_decoderArray = 0x38; // CUtlVector<CAnimDecoder>
                constexpr std::ptrdiff_t m_nMaxUniqueFrameIndex = 0x50; // int32
                constexpr std::ptrdiff_t m_segmentArray = 0x58; // CUtlVector<CAnimFrameSegment>
            }
            // Parent: None
            // Fields count: 2
            namespace IKSolverSettings_t {
                constexpr std::ptrdiff_t m_SolverType = 0x0; // IKSolverType
                constexpr std::ptrdiff_t m_nNumIterations = 0x4; // int32
            }
            // Parent: CAnimUpdateNodeBase
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CBinaryUpdateNode {
                constexpr std::ptrdiff_t m_pChild1 = 0x58; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_pChild2 = 0x68; // CAnimUpdateNodeRef
                constexpr std::ptrdiff_t m_timingBehavior = 0x78; // BinaryNodeTiming
                constexpr std::ptrdiff_t m_flTimingBlend = 0x7C; // float32
                constexpr std::ptrdiff_t m_bResetChild1 = 0x80; // bool
                constexpr std::ptrdiff_t m_bResetChild2 = 0x81; // bool
            }
            // Parent: None
            // Fields count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimKeyData {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
                constexpr std::ptrdiff_t m_boneArray = 0x10; // CUtlVector<CAnimBone>
                constexpr std::ptrdiff_t m_userArray = 0x28; // CUtlVector<CAnimUser>
                constexpr std::ptrdiff_t m_morphArray = 0x40; // CUtlVector<CBufferString>
                constexpr std::ptrdiff_t m_nChannelElements = 0x58; // int32
                constexpr std::ptrdiff_t m_dataChannelArray = 0x60; // CUtlVector<CAnimDataChannelDesc>
            }
            // Parent: None
            // Fields count: 1
            namespace AttachmentHandle_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint8
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimMorphDifference {
                constexpr std::ptrdiff_t m_name = 0x0; // CBufferString
            }
            // Parent: None
            // Fields count: 11
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FootFixedData_t {
                constexpr std::ptrdiff_t m_vToeOffset = 0x0; // VectorAligned
                constexpr std::ptrdiff_t m_vHeelOffset = 0x10; // VectorAligned
                constexpr std::ptrdiff_t m_nTargetBoneIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_nAnkleBoneIndex = 0x24; // int32
                constexpr std::ptrdiff_t m_nIKAnchorBoneIndex = 0x28; // int32
                constexpr std::ptrdiff_t m_ikChainIndex = 0x2C; // int32
                constexpr std::ptrdiff_t m_flMaxIKLength = 0x30; // float32
                constexpr std::ptrdiff_t m_nFootIndex = 0x34; // int32
                constexpr std::ptrdiff_t m_nTagIndex = 0x38; // int32
                constexpr std::ptrdiff_t m_flMaxRotationLeft = 0x3C; // float32
                constexpr std::ptrdiff_t m_flMaxRotationRight = 0x40; // float32
            }
            // Parent: None
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CMotionGraphGroup {
                constexpr std::ptrdiff_t m_searchDB = 0x0; // CMotionSearchDB
                constexpr std::ptrdiff_t m_motionGraphs = 0xB8; // CUtlVector<CSmartPtr<CMotionGraph>>
                constexpr std::ptrdiff_t m_motionGraphConfigs = 0xD0; // CUtlVector<CMotionGraphConfig>
                constexpr std::ptrdiff_t m_sampleToConfig = 0xE8; // CUtlVector<int32>
                constexpr std::ptrdiff_t m_hIsActiveScript = 0x100; // AnimScriptHandle
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CSetFacingUpdateNode {
                constexpr std::ptrdiff_t m_facingMode = 0x68; // FacingMode
                constexpr std::ptrdiff_t m_bResetChild = 0x6C; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CNmSyncTrack__Event_t {
                constexpr std::ptrdiff_t m_ID = 0x0; // CGlobalSymbol
                constexpr std::ptrdiff_t m_startTime = 0x8; // NmPercent_t
                constexpr std::ptrdiff_t m_duration = 0xC; // NmPercent_t
            }
            // Parent: CUnaryUpdateNode
            // Fields count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CWayPointHelperUpdateNode {
                constexpr std::ptrdiff_t m_flStartCycle = 0x6C; // float32
                constexpr std::ptrdiff_t m_flEndCycle = 0x70; // float32
                constexpr std::ptrdiff_t m_bOnlyGoals = 0x74; // bool
                constexpr std::ptrdiff_t m_bPreventOvershoot = 0x75; // bool
                constexpr std::ptrdiff_t m_bPreventUndershoot = 0x76; // bool
            }
            // Parent: None
            // Fields count: 3
            //
            // Metadata:
            // MGetKV3ClassDefaults
            // MVDataOverlayType
            namespace CMoodVData {
                constexpr std::ptrdiff_t m_sModelName = 0x0; // CResourceNameTyped<CWeakHandle<InfoForResourceTypeCModel>>
                constexpr std::ptrdiff_t m_nMoodType = 0xE0; // MoodType_t
                constexpr std::ptrdiff_t m_animationLayers = 0xE8; // CUtlVector<MoodAnimationLayer_t>
            }
            // Parent: CModelConfigElement
            // Fields count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CModelConfigElement_AttachedModel {
                constexpr std::ptrdiff_t m_InstanceName = 0x48; // CUtlString
                constexpr std::ptrdiff_t m_EntityClass = 0x50; // CUtlString
                constexpr std::ptrdiff_t m_hModel = 0x58; // CStrongHandle<InfoForResourceTypeCModel>
                constexpr std::ptrdiff_t m_vOffset = 0x60; // Vector
                constexpr std::ptrdiff_t m_aAngOffset = 0x6C; // QAngle
                constexpr std::ptrdiff_t m_AttachmentName = 0x78; // CUtlString
                constexpr std::ptrdiff_t m_LocalAttachmentOffsetName = 0x80; // CUtlString
                constexpr std::ptrdiff_t m_AttachmentType = 0x88; // ModelConfigAttachmentType_t
                constexpr std::ptrdiff_t m_bBoneMergeFlex = 0x8C; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedColor = 0x8D; // bool
                constexpr std::ptrdiff_t m_bUserSpecifiedMaterialGroup = 0x8E; // bool
                constexpr std::ptrdiff_t m_bAcceptParentMaterialDrivenDecals = 0x8F; // bool
                constexpr std::ptrdiff_t m_BodygroupOnOtherModels = 0x90; // CUtlString
                constexpr std::ptrdiff_t m_MaterialGroupOnOtherModels = 0x98; // CUtlString
            }
            // Parent: None
            // Fields count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CAnimTagManagerUpdater {
                constexpr std::ptrdiff_t m_tags = 0x18; // CUtlVector<CSmartPtr<CAnimTagBase>>
            }
        }
    }
}
