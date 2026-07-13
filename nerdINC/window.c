#include <gtk/gtk.h>

static void destroy(GtkApplication *app, gpointer data); {
        GtkWidget *window;
}
window = gtk_application_window_new(app);

GtkWidget *window;
GtkWidget *button;

gtk_init(&argc, &argv);
window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
button = gtk_button_new_with_label("Click me!");
void my_callback_function(GtkWidget *widget, gpointer data);
void destroy( GtkWidget *widget, gpointer   data )
{
   gtk_main_quit ();
}
g_signal_connect (window, "destroy",
                  G_CALLBACK (destroy),
                  NULL);
                  void greet( GtkWidget *widget, gpointer data )
{
   g_print ("Welcome to GTK\n");
   g_print ("%s clicked %d times\n",
      (char*)data, ++counter);
}
g_signal_connect (GTK_OBJECT(button), "clicked",
   G_CALLBACK (greet), "button");
   gtk_container_add (GTK_CONTAINER (window), button);
   gtk_widget_show_all(window);
gtk_main();
