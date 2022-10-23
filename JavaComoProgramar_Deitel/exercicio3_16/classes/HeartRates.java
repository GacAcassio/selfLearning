package classes;
public class HeartRates{
  private static int atualDay;
  private static int atualMonth;
  private static int atualYear;
  private String firstName;
  private String lastName;
  private int day;
  private int month;
  private int year;
  public HeartRates( String fn, String ln, int d, int m, int y, int ad, int am, int ay){
    firstName=fn;
    lastName=ln;
    day=d;
    month=m;
    year=y;
    atualDay=ad;
    atualMonth=am;
    atualYear=ay;
  }
  public void setFirstName(String fn){
    firstName=fn;
  }
  public void setLastName(String ln){
    lastName=ln;
  }
  public void setDay(int d){
    day=d;
  }
  public void setMonth(int m){
    month=m;
  }
  public void setYear(int y){
    year=y;
  }
  public String getFirstName(){
    return firstName;
  }
  public String getLastName(){
    return lastName;
  }
  public int getDay(){
    return day;
  }
  public int getMonth(){
    return month;
  }
  public int getYear(){
    return year;
  }
  public int getYearsOld(){
    if(atualMonth>month||(atualMonth==month&&atualDay>day)){
      return atualYear-year;
    }else{
      return (atualYear+1)-year;
    }
  }
  public int maxHeartF(){
    return 220-getYearsOld();
  }
  public int aHeartF(){
    return maxHeartF()*50/100;
  }
  public int bHeartF(){
    return maxHeartF()*85/100;
  }
}