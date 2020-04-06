# Handsfree-Fluid-Dispenser
A repo for the handsfree fluid dispenser I made. Can be used in times when you don't want people touching the dispenser such as public places

####INSERT IMAGE

# Disclaimer 
This project involves water and electricity there is always the chance that you may shortcircuit a board or part. Please build this at your own risk and consult an expert. I am not an expert and this code is just what I used. I am not responsible for any damages you create

⚠️⚠️WARNING⚠️⚠️ This project also involves water and electric components, these are dangerous and should only be used by responsible people under expert supervision. Please be safe and be careful. Mixing these 2 components could create some serious damages! I am not responsible for any damages you create using this project!

# Materials Needed
- 2 Litre spray bottle (can usually be found at department stores
- Arduino  - I used the Arduino Nano
- Arduino Cable + Computer with the Arduino IDE installed and setup 
- Ultrasonic sensor - I used the SR04
- Servo  - A 9g micro servo will do
- Straw or aquarium tubes  - To control the water flow direction
- Sturdy wires  - to connect the servo to the bottle
- Jumper cables to connect everything

Optional 
- External Power Supply
- Breadboard
- Electrical tape

Tools 
- Hot glue gun


# How to build
1. Glue the servo to the bottle and connect a stiff piece of wire to the servo and test that it will be able to trigger the water when activated.

###INSERT IMAGE

2. Next, you must connect all the components as is shown in this diagram below.

###insert image

3. Download and tweak the code to you needs

You will need to change a few variables listed at the top

```
/*
Adjust the following variables to suit your needs!

- The flowrate: how much milliseconds the servo will remain in a down 
  position to allow the flowing of the fluid      */
int flow_delay = 1000;

/*  - The After Flow Delay: The amount of ms that the servo will wait to
      dispense fluid again         */
int after_flow_delay = 4000; 

/*  - Distance (cm) that you want it to be activated
      and/or deactivated if the object is too close 
      and not under the waterway    */
int activation_dist = 25;  //25cm
int deactivation_dist = 10; //10cm

/* SETUP DONE */

```


3. Connect the Arduino to your computer and upload the code. (TIP: USE A CUP SO THAT YOU WON'T SPILL ANY WATER WHEN TESTING ON COMPONENTS)

4. Glue the sensor in place and place your product somewhere people will use it!


# Future Development Ideas
- Add a water sensor to sense if the tank is almost empty - Paired with a wifi connected node mcu you could receive a message evertime the water runs out.
- Using other sensors to sense the motion of a hand
