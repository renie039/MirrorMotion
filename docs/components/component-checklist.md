- [x] Add Scoch’s servo links
- [x] Confirm the base servo
- [ ] Check Arduino fit in Onshape

| Component | Model | Dimensions (mm) | Mounting holes | Plug and wire space | Source | Status |
| --- | --- | --- | --- | --- | --- | --- |
| Controller board | Arduino UNO R4 Minima | TBD | TBD | USB-C plug and cable clearance TBD | Board drawing TBD | Proposed |
| Micro servo | MG90S | 22.8 × 12 × 28.1 | TBD | TBD | [RobotStore listing](https://www.robotstore.it/Servo-micro-TowerPro-MG90S) | Preliminary dimensions from Scoch’s notes |
| Standard servo | MG996R | 40.7 × 20.5 × 39.5 | TBD | TBD | [RobotStore listing](https://www.robotstore.it/Servo-digitale-standard-MG996R) | Preliminary dimensions from Scoch’s notes |
| Base servo | TD8320MG | 40.6 x 20.4 x 39mm | TBD | TBD | [RobotStore TD8320MG](https://www.robotstore.it/Servo-digitale-standard-TD8320MG-20KG-Waterproof) | Proposed by Scoch |
| Wiring board | Small breadboard with power rails or custom PCB | TBD | TBD | TBD | TBD | Choice TBD |
| Power supply | TBD | TBD | TBD | TBD | TBD | Model and placement TBD |
| Cooling fans (2) | 5015 centrifugal blower | 50 × 50 × 15 | TBD | Space for wires, air inlet, and outlet needed | [AliExpress listing](https://www.aliexpress.us/item/3256809779765997.html) | Proposed by Scoch; voltage option and mounting-hole spacing pending |

### Enclosure CAD progress

![Open enclosure with the UNO R4 Minima placeholder](./mirrormotion-enclosure-open.png)

- USB-C side gap: 9.056 mm from the placeholder end face to the inside wall.
- Lid clearance: 22.000 mm from the placeholder top to the flat underside of the lid, before mounting posts.
- Pending: confirm the physical board and cable dimensions before adding mounting posts or the USB-C cutout.

### Follower Arm Side Layout
![Follower arm side layout](./follower-arm-side-layout.png)
- Upper arm: 100 mm from shoulder to elbow.
- Forearm: 90 mm from elbow to gripper.
- Shoulder height: 47.275 mm above the sketched base top.
- Shoulder-to-gripper distance: 172.959 mm in the pose shown, or 190 mm with both links straight.
- Dimensions are provisional.

### Electronics update from Scoch

- Proposed base servo: TD8320MG.
- Servo body dimensions reported by Scoch: 40.6 × 20.4 × 39 mm.
- Reported mass: 62 g.
- Reported torque at 4.8 V: 17.2 kg·cm.
- Scoch proposed two brushless cooling fans, one on each side of the enclosure.
- Pending for CAD: servo mounting-hole dimensions, shaft position, and fan dimensions.

### Base and shoulder concept from Scoch

[Download Scoch's preliminary STL](./base-shoulder_sketch.stl)

- Scoch created a preliminary circular housing, top platform, and shoulder joint model.
- Intended motions include base rotation and shoulder lifting.
- Scoch intends the upper arm to attach to the horizontal shoulder tube.
- Pending: bearing arrangement, servo drive connections, arm attachment details, and connection to the electronics enclosure.
- Model is preliminary and has not been physically tested.

- Electronics enclosure outer footprint: 100 × 120 mm.
- Scoch's circular base is approximately 120 mm in diameter, assuming the STL units are millimeters.
- If centered above the enclosure, it would overhang the 100 mm side by approximately 10 mm on each side.
- Connection between the two housings is pending clarification with Scoch.
