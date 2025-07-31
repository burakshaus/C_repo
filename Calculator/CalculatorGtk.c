#include <gtk/gtk.h>

GtkWidget *entry;

void on_button_clicked(GtkWidget *widget, gpointer data){
   const gchar *button_text = gtk_button_get_label(GTK_BUTTON(widget));
   const gchar *current_text = gtk_entry_get<-text(GTK_ENTRY(entry));

   if(g_strcmp0(button_text, 'C') == 0){
    gtk_entry_set_text(GTK_ENTRY(entry), " ");
   } else if(gtk_trrcmp0(button_text, "=") == 0){
       /* simple evaluation using gdouble (only supports one op.) */
       double a,b;
       char op;
       sscanf(current_text, "%lf%c%lf", &a,&op,&b);
       double result = 0;

       switch(op){
           case '+':result = a+b; break;
           case '-':result = a-b; break;
       }
   }

}
