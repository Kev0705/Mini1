void rocket() {
	blocks[1] = "!";
	for (int i = 0; i < 3; i++) {
		if (keys[i] == true) {
			if (rocketPosition[i].Y == 1) {
				currentRocketNumR--;
				keys[i] = false;
				return;
			}
		}  
	}
}