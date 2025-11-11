const solution = (sides) => sides.sort((a,b) => a-b )[2] < sides[1] + sides[0] ? 1 : 2;

