//Christopher de la Iglesia

public class Game {

    boolean running;
    Screen scr;
    World wor;


    public Game() {

    }

    public void start() {
	running = true;
	loop();
    }

    public void stop() {
	running = false;
    }

    private void loop() {
	
    }   

}