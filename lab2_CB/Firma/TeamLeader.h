#ifndef TEAMLEADER_H_INCLUDED
#define TEAMLEADER_H_INCLUDED

class TeamLeader : public Employee
{
    public:
    TeamLeader();
    ~ TeamLeader();
     TeamLeader(string surname1, int age1, int experience1, double salary1);
    float calculateBonus(int value);
    virtual  int calculateSalary(int value) override;
    void show() override;
};


#endif // TEAMLEADER_H_INCLUDED
