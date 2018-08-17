package test.wf9a5m75.opencl;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {

  // Used to load the 'native-lib' library on application startup.
  static {
    System.loadLibrary("helloworld");
  }
  public native void native_helloworld();

  @Override
  protected void onCreate(Bundle savedInstanceState) {
    super.onCreate(savedInstanceState);
    setContentView(R.layout.activity_main);
    native_helloworld();
  }

}
