
class Pawn
{
public:
	void SetPosition(float x, float y)
	{}
	void AddPosition(float x, float y)
	{}
	void Damage(float Damage, class pawn)
	{}

private:
	float posX;
	float posY;
	float Damage;
};

class Slime : public Pawn
{};

class Goblin : public Pawn
{};

class Bore : public Pawn
{};

class player : public Pawn
{};






