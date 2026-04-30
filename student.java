package interfacece;
 interface StudentActions
   {
       // Methods in an interface are public by default
    void displayInfo();
    void updateGrade(double newGrade);
  
public enum GradeLevel {
  FRESHMAN, JUNIOR, SENIOR
}}
 public class Student implements StudentActions 
{
    // Private modifiers enforce Encapsulation
    private String name;
    private int id;
    private double grade;
   final GradeLevel level;
    // Constructor to initialize instance variables
    public  Student(String name, int id, double grade, GradeLevel level) {
        this.name = name;
        this.id = id;
        this.grade = grade;
        this.level = level;
    }
    // Implementing interface method
             @Override
    public void displayInfo() {
        System.out.println("ID: " + id + "  Name: " + name + 
                           "  Grade: " + grade + "  Level: " + level);
    }
    // Implementing interface method with parameter passing
            @Override
    public void updateGrade(double newGrade) {
        this.grade = newGrade;
        System.out.println("Updated " + name + "'s grade to: " + newGrade);
    }
        // Method to compare two objects based on ID
    public boolean equals(Student other) {
        return this.id == other.id;
    }

    // Public Getters and Setters (Access Modifiers in action)
    public String getName() 
    { return name; }
    public void setName(String name)
    { this.name = name; }

    public int getId()
    { return id; }
    public void setId(int id)
    { this.id = id; }

public class Interfacece {
    public static void main(String[] args) {
            // Instantiating objects using the constructor
        Student student1 = new Student("nardo", 101, 88.5, GradeLevel.FRESHMAN);
        Student student2 = new Student("tgste", 102, 92.0, GradeLevel.SENIOR);
        Student student3 = new Student("hbstie", 301, 75.0, GradeLevel.JUNIOR);

        // Displaying details (Message Passing)
        System.out.println(" Student Details ");
        student1.displayInfo();
        student2.displayInfo();

        // Demonstrating method with parameters
        System.out.println("\n Updating Grade ");
        student1.updateGrade(91.0);

        // Comparing objects
        System.out.println("\n Comparing Students ");
        if (student1.equals(student3)) {
            System.out.println("Student 1 and Student 3 have the same ID.");
        } else {
            System.out.println("Student 1 and Student 3 are different id");
        } }}}
