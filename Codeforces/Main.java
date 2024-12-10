abstract class TechCare {

    double basicSalary;
}

class ProjectManager extends TechCare{

    double basicSalary= 40000;

    public void devProcess()
    {
        System.out.println("\n\nDevelopement process is running");
    }

    public void assignmodule()
    {
        System.out.println("Module has been assigned to developer");
    }

    public void checkProcess()
    {
        System.out.println("work is on going.\n");
    }

    public void Salary()
    {
        double total = basicSalary+(basicSalary/2)+ 10000;
        System.out.println("Project manager's total salary = " + total);
    }
}

class Developer extends TechCare{

    double basicSalary= 20000;

    public void develope()
    {
        System.out.println("\n\ndevelopement is on going");
    }

    public void Salary()
    {
        double total = basicSalary+(basicSalary/2)+10000;
        System.out.println("\nDeveloper's total salary = "+ total);
        System.out.println("\n");

    }
}



public class Main
{
    public static void main(String[] args) {

        ProjectManager PM = new ProjectManager();
        Developer DV = new Developer();

        PM.devProcess();
        PM.assignmodule();
        PM.checkProcess();
        PM.Salary();

        DV.develope();
        DV.Salary();
    }
}