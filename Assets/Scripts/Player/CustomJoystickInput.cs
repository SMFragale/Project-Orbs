using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

namespace CMF
{
	//This character movement input class is an example of how to get input from a gamepad/joystick to control the character;
	//It comes with a dead zone threshold setting to bypass any unwanted joystick "jitter";
	public class CustomJoystickInput : CharacterInput {

		public KeyCode jumpKey = KeyCode.Joystick1Button0;

		private PlayerInput input;


		
		//If this is enabled, Unity's internal input smoothing is bypassed;
		public bool useRawInput = true;

		//If any input falls below this value, it is set to '0';
        //Use this to prevent any unwanted small movements of the joysticks ("jitter");
		public float deadZoneThreshold = 0.2f;

		public string actionName;

        public override float GetHorizontalMovementInput()
		{
			input = GetComponent<PlayerInput>();
			float _horizontalInput;

			if(useRawInput)
				_horizontalInput = input.actions[actionName].ReadValue<Vector2>().x;
			else
				_horizontalInput = input.actions[actionName].ReadValue<Vector2>().normalized.x;

			//Set any input values below threshold to '0';
			if(Mathf.Abs(_horizontalInput) < deadZoneThreshold)
				_horizontalInput = 0f;

			return _horizontalInput;
		}

		public override float GetVerticalMovementInput()
		{
			input = GetComponent<PlayerInput>();
			float _verticalInput;

			if(useRawInput)
				_verticalInput = input.actions[actionName].ReadValue<Vector2>().y;
			else
				_verticalInput = input.actions[actionName].ReadValue<Vector2>().normalized.y;

			//Set any input values below threshold to '0';
			if(Mathf.Abs(_verticalInput) < deadZoneThreshold)
				_verticalInput = 0f;


			return _verticalInput;
		}

		public override bool IsJumpKeyPressed()
		{
			return Input.GetKey(jumpKey);
		}

	}
}
