import time
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from prototype.action import AiCamera
#from ollama import chat
#import ollama

class CoActionServer(Node):

    def __init__(self):
        super().__init__('fibonacci_action_server')
        self._action_server = ActionServer(
            self,
            AiCamera,
            '/AiCamera',
            self.execute_callback)
        


    def execute_callback(self, goal_handle):
        self.get_logger().info(f'Received goal request: {goal_handle.request.user_request}')
        goal=goal_handle.request.user_request
        print(f'YOU: "{goal}"')
        feedback_msg=AiCamera.Feedback()
        """
        stream = ollama.chat(
        model='MistCom:latest',
        messages=[{'role': 'user', 'content': f'Below is an instruction that describes a task, paired with an input that provides further context. Write a response that appropriately completes the request.\n### Instruction:\n{goal}\n### Input:\n\n### Response:'}],
        stream=True,
        )


        for chunk in stream:  # Loop for 10 seconds
            feedback_msg.ai_response=chunk['message']['content']
            goal_handle.publish_feedback(feedback_msg)     
            print(chunk['message']['content'], end='',flush=True)
        """
        #feedback_msg.ai_response='ok all is ok'
        feedback_msg.ai_response = f'Received: {goal_handle.request.user_request}'
        print(f'ASSISTANT: "{feedback_msg}"')
        rclpy.spin_once(self, timeout_sec=1)

          

        goal_handle.succeed()
        result = AiCamera.Result()
        result.ai_end = f'Processed: {goal_handle.request.user_request}'
        #result.ai_end="."
        self.get_logger().info(f'Result: {result.ai_end}')
        return result
        #rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)

    fibonacci_action_server = CoActionServer()

    rclpy.spin(fibonacci_action_server)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
    



