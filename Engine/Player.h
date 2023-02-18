#pragma once
class Player
{
public:
	int x;
	int y;
	static constexpr int width = 20;
	static constexpr int height = 20;

	void Update();
};