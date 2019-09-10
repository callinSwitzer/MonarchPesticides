

module ubracket(){
    difference(){
    cube([30,5,50]);
    
    
    translate([-25,4, 25])cube([90,10,30],center=true);
}}



difference(){
ubracket();

{
translate([5, 0,-1]) cylinder(12,d = 6);
translate([5, 0,39]) cylinder(12,d = 6);}}