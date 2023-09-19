// 2023-07-25 14:47:30.166250
// Gesture: 3
#ifndef GESTURE_SIGNALS_H
#define GESTURE_SIGNALS_H
#define BATCH_SIZE 6
#define GESTURE_ANSWER 3
const elem_t gesture_signals[6][100][3]=
{{{-21,4,-6},{-21,5,-6},{-23,4,-6},{-22,4,-6},{-22,4,-5},{-21,4,-6},{-22,4,-6},{-22,4,-6},{-22,4,-6},{-21,4,-7},{-21,4,-6},{-21,5,-6},{-22,4,-6},{-22,4,-7},{-24,4,-5},{-22,3,-7},{-22,3,-8},{-23,3,-8},{-23,3,-8},{-128,-128,-128},{-24,1,-9},{-25,0,-13},{-26,-3,-15},{-28,-9,-21},{-29,-11,-25},{-30,-16,-26},{-31,-19,-29},{-31,-22,-32},{-32,-23,-35},{-30,-27,-38},{-33,-27,-41},{-32,-27,-45},{-32,-28,-48},{-32,-28,-52},{-33,-31,-57},{-35,-37,-62},{-39,-43,-66},{-41,-50,-70},{-47,-56,-74},{-50,-63,-79},{-54,-70,-83},{-55,-75,-86},{-57,-78,-88},{-59,-81,-90},{-60,-84,-93},{-62,-87,-95},{-63,-88,-96},{-65,-91,-97},{-66,-94,-99},{-68,-103,-103},{-68,-100,-105},{-72,-102,-105},{-70,-104,-106},{-70,-104,-108},{-71,-106,-108},{-71,-106,-108},{-72,-107,-110},{-72,-107,-110},{-72,-107,-107},{-72,-110,-110},{-71,-105,-109},{-72,-113,-109},{-70,-106,-109},{-69,-104,-109},{-74,-104,-108},{-69,-103,-108},{-69,-102,-107},{-68,-101,-105},{-68,-100,-106},{-72,-100,-106},{-67,-99,-106},{-68,-99,-105},{-67,-98,-105},{-67,-98,-105},{-67,-99,-102},{-67,-95,-103},{-67,-104,-102},{-65,-94,-100},{-65,-93,-100},{-65,-91,-100},{-63,-88,-97},{-62,-87,-95},{-61,-84,-93},{-59,-82,-92},{-57,-78,-91},{-55,-75,-90},{-53,-75,-88},{-51,-68,-87},{-49,-71,-84},{-48,-63,-81},{-48,-61,-77},{-47,-59,-73},{-43,-55,-67},{-40,-50,-60},{-37,-45,-56},{-34,-40,-54},{-31,-33,-48},{-29,-27,-41},{-28,-24,-35},{-27,-20,-29}},
{{-24,1,-9},{-25,0,-13},{-26,-3,-15},{-28,-9,-21},{-29,-11,-25},{-30,-16,-26},{-31,-19,-29},{-31,-22,-32},{-32,-23,-35},{-30,-27,-38},{-33,-27,-41},{-32,-27,-45},{-32,-28,-48},{-32,-28,-52},{-33,-31,-57},{-35,-37,-62},{-39,-43,-66},{-41,-50,-70},{-47,-56,-74},{-50,-63,-79},{-54,-70,-83},{-55,-75,-86},{-57,-78,-88},{-59,-81,-90},{-60,-84,-93},{-62,-87,-95},{-63,-88,-96},{-65,-91,-97},{-66,-94,-99},{-68,-103,-103},{-68,-100,-105},{-72,-102,-105},{-70,-104,-106},{-70,-104,-108},{-71,-106,-108},{-71,-106,-108},{-72,-107,-110},{-72,-107,-110},{-72,-107,-107},{-72,-110,-110},{-71,-105,-109},{-72,-113,-109},{-70,-106,-109},{-69,-104,-109},{-74,-104,-108},{-69,-103,-108},{-69,-102,-107},{-68,-101,-105},{-68,-100,-106},{-72,-100,-106},{-67,-99,-106},{-68,-99,-105},{-67,-98,-105},{-67,-98,-105},{-67,-99,-102},{-67,-95,-103},{-67,-104,-102},{-65,-94,-100},{-65,-93,-100},{-65,-91,-100},{-63,-88,-97},{-62,-87,-95},{-61,-84,-93},{-59,-82,-92},{-57,-78,-91},{-55,-75,-90},{-53,-75,-88},{-51,-68,-87},{-49,-71,-84},{-48,-63,-81},{-48,-61,-77},{-47,-59,-73},{-43,-55,-67},{-40,-50,-60},{-37,-45,-56},{-34,-40,-54},{-31,-33,-48},{-29,-27,-41},{-28,-24,-35},{-27,-20,-29},{-27,-17,-24},{-27,-13,-19},{-27,-11,-19},{-27,-8,-18},{-26,-5,-13},{-25,-3,-14},{-25,-3,-13},{-25,-2,-13},{-24,-2,-13},{-128,-128,-128},{-24,-1,-12},{-23,-1,-12},{-23,0,-12},{-24,0,-12},{-23,-1,-12},{-23,-1,-11},{-23,-1,-11},{-23,0,-11},{-23,0,-11},{-23,0,-11}},
{{-54,-70,-83},{-55,-75,-86},{-57,-78,-88},{-59,-81,-90},{-60,-84,-93},{-62,-87,-95},{-63,-88,-96},{-65,-91,-97},{-66,-94,-99},{-68,-103,-103},{-68,-100,-105},{-72,-102,-105},{-70,-104,-106},{-70,-104,-108},{-71,-106,-108},{-71,-106,-108},{-72,-107,-110},{-72,-107,-110},{-72,-107,-107},{-72,-110,-110},{-71,-105,-109},{-72,-113,-109},{-70,-106,-109},{-69,-104,-109},{-74,-104,-108},{-69,-103,-108},{-69,-102,-107},{-68,-101,-105},{-68,-100,-106},{-72,-100,-106},{-67,-99,-106},{-68,-99,-105},{-67,-98,-105},{-67,-98,-105},{-67,-99,-102},{-67,-95,-103},{-67,-104,-102},{-65,-94,-100},{-65,-93,-100},{-65,-91,-100},{-63,-88,-97},{-62,-87,-95},{-61,-84,-93},{-59,-82,-92},{-57,-78,-91},{-55,-75,-90},{-53,-75,-88},{-51,-68,-87},{-49,-71,-84},{-48,-63,-81},{-48,-61,-77},{-47,-59,-73},{-43,-55,-67},{-40,-50,-60},{-37,-45,-56},{-34,-40,-54},{-31,-33,-48},{-29,-27,-41},{-28,-24,-35},{-27,-20,-29},{-27,-17,-24},{-27,-13,-19},{-27,-11,-19},{-27,-8,-18},{-26,-5,-13},{-25,-3,-14},{-25,-3,-13},{-25,-2,-13},{-24,-2,-13},{-128,-128,-128},{-24,-1,-12},{-23,-1,-12},{-23,0,-12},{-24,0,-12},{-23,-1,-12},{-23,-1,-11},{-23,-1,-11},{-23,0,-11},{-23,0,-11},{-23,0,-11},{-23,0,-10},{-23,0,-9},{-23,0,-11},{-23,-1,-11},{-23,0,-10},{-23,0,-10},{-23,0,-10},{-23,-2,-11},{-23,1,-9},{-23,0,-10},{-23,0,-11},{-23,0,-10},{-23,0,-10},{-23,-1,-10},{-23,0,-9},{-23,0,-10},{-23,-1,-11},{-23,-1,-9},{-23,0,-11},{-24,0,-10}},
{{-71,-105,-109},{-72,-113,-109},{-70,-106,-109},{-69,-104,-109},{-74,-104,-108},{-69,-103,-108},{-69,-102,-107},{-68,-101,-105},{-68,-100,-106},{-72,-100,-106},{-67,-99,-106},{-68,-99,-105},{-67,-98,-105},{-67,-98,-105},{-67,-99,-102},{-67,-95,-103},{-67,-104,-102},{-65,-94,-100},{-65,-93,-100},{-65,-91,-100},{-63,-88,-97},{-62,-87,-95},{-61,-84,-93},{-59,-82,-92},{-57,-78,-91},{-55,-75,-90},{-53,-75,-88},{-51,-68,-87},{-49,-71,-84},{-48,-63,-81},{-48,-61,-77},{-47,-59,-73},{-43,-55,-67},{-40,-50,-60},{-37,-45,-56},{-34,-40,-54},{-31,-33,-48},{-29,-27,-41},{-28,-24,-35},{-27,-20,-29},{-27,-17,-24},{-27,-13,-19},{-27,-11,-19},{-27,-8,-18},{-26,-5,-13},{-25,-3,-14},{-25,-3,-13},{-25,-2,-13},{-24,-2,-13},{-128,-128,-128},{-24,-1,-12},{-23,-1,-12},{-23,0,-12},{-24,0,-12},{-23,-1,-12},{-23,-1,-11},{-23,-1,-11},{-23,0,-11},{-23,0,-11},{-23,0,-11},{-23,0,-10},{-23,0,-9},{-23,0,-11},{-23,-1,-11},{-23,0,-10},{-23,0,-10},{-23,0,-10},{-23,-2,-11},{-23,1,-9},{-23,0,-10},{-23,0,-11},{-23,0,-10},{-23,0,-10},{-23,-1,-10},{-23,0,-9},{-23,0,-10},{-23,-1,-11},{-23,-1,-9},{-23,0,-11},{-24,0,-10},{-23,0,-10},{-23,-1,-10},{-24,0,-10},{-24,0,-8},{-24,0,-10},{-24,0,-10},{-24,-1,-10},{-24,0,-10},{-24,0,-10},{-24,0,-10},{-24,1,-8},{-24,1,-8},{-26,-1,-9},{-24,1,-10},{-24,1,-10},{-24,0,-10},{-24,0,-9},{-25,0,-10},{-24,1,-8},{-24,0,-9}},
{{-63,-88,-97},{-62,-87,-95},{-61,-84,-93},{-59,-82,-92},{-57,-78,-91},{-55,-75,-90},{-53,-75,-88},{-51,-68,-87},{-49,-71,-84},{-48,-63,-81},{-48,-61,-77},{-47,-59,-73},{-43,-55,-67},{-40,-50,-60},{-37,-45,-56},{-34,-40,-54},{-31,-33,-48},{-29,-27,-41},{-28,-24,-35},{-27,-20,-29},{-27,-17,-24},{-27,-13,-19},{-27,-11,-19},{-27,-8,-18},{-26,-5,-13},{-25,-3,-14},{-25,-3,-13},{-25,-2,-13},{-24,-2,-13},{-128,-128,-128},{-24,-1,-12},{-23,-1,-12},{-23,0,-12},{-24,0,-12},{-23,-1,-12},{-23,-1,-11},{-23,-1,-11},{-23,0,-11},{-23,0,-11},{-23,0,-11},{-23,0,-10},{-23,0,-9},{-23,0,-11},{-23,-1,-11},{-23,0,-10},{-23,0,-10},{-23,0,-10},{-23,-2,-11},{-23,1,-9},{-23,0,-10},{-23,0,-11},{-23,0,-10},{-23,0,-10},{-23,-1,-10},{-23,0,-9},{-23,0,-10},{-23,-1,-11},{-23,-1,-9},{-23,0,-11},{-24,0,-10},{-23,0,-10},{-23,-1,-10},{-24,0,-10},{-24,0,-8},{-24,0,-10},{-24,0,-10},{-24,-1,-10},{-24,0,-10},{-24,0,-10},{-24,0,-10},{-24,1,-8},{-24,1,-8},{-26,-1,-9},{-24,1,-10},{-24,1,-10},{-24,0,-10},{-24,0,-9},{-25,0,-10},{-24,1,-8},{-24,0,-9},{-24,0,-10},{-24,1,-9},{-24,0,-10},{-24,0,-10},{-24,-1,-10},{-25,-1,-10},{-26,-1,-10},{-25,-1,-10},{-25,-1,-10},{-25,-1,-10},{-26,-2,-10},{-26,-1,-11},{-27,-3,-11},{-27,-2,-11},{-27,-5,-11},{-27,-1,-10},{-27,-3,-10},{-26,-3,-10},{-26,-1,-10},{-28,-2,-8}},
{{-27,-17,-24},{-27,-13,-19},{-27,-11,-19},{-27,-8,-18},{-26,-5,-13},{-25,-3,-14},{-25,-3,-13},{-25,-2,-13},{-24,-2,-13},{-128,-128,-128},{-24,-1,-12},{-23,-1,-12},{-23,0,-12},{-24,0,-12},{-23,-1,-12},{-23,-1,-11},{-23,-1,-11},{-23,0,-11},{-23,0,-11},{-23,0,-11},{-23,0,-10},{-23,0,-9},{-23,0,-11},{-23,-1,-11},{-23,0,-10},{-23,0,-10},{-23,0,-10},{-23,-2,-11},{-23,1,-9},{-23,0,-10},{-23,0,-11},{-23,0,-10},{-23,0,-10},{-23,-1,-10},{-23,0,-9},{-23,0,-10},{-23,-1,-11},{-23,-1,-9},{-23,0,-11},{-24,0,-10},{-23,0,-10},{-23,-1,-10},{-24,0,-10},{-24,0,-8},{-24,0,-10},{-24,0,-10},{-24,-1,-10},{-24,0,-10},{-24,0,-10},{-24,0,-10},{-24,1,-8},{-24,1,-8},{-26,-1,-9},{-24,1,-10},{-24,1,-10},{-24,0,-10},{-24,0,-9},{-25,0,-10},{-24,1,-8},{-24,0,-9},{-24,0,-10},{-24,1,-9},{-24,0,-10},{-24,0,-10},{-24,-1,-10},{-25,-1,-10},{-26,-1,-10},{-25,-1,-10},{-25,-1,-10},{-25,-1,-10},{-26,-2,-10},{-26,-1,-11},{-27,-3,-11},{-27,-2,-11},{-27,-5,-11},{-27,-1,-10},{-27,-3,-10},{-26,-3,-10},{-26,-1,-10},{-28,-2,-8},{-27,-2,-10},{-26,-2,-10},{-27,-2,-10},{-27,-2,-10},{-27,-2,-10},{-27,-2,-10},{-27,-2,-10},{-26,-2,-10},{-27,-3,-11},{-27,-5,-10},{-26,-3,-10},{-26,-2,-10},{-27,-2,-10},{-28,-2,-10},{-27,-3,-9},{-28,-3,-9},{-27,-2,-7},{-28,-2,-9},{-28,-2,-10},{-28,-4,-10}}
};
#endif