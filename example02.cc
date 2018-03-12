class CWebView : public Gtk::Widget
{
public:

    CWebView ()     //  Might want to protect this
        : Gtk::Widget ((webkit_web_view_new()) {}
    virtual ~CWebView () {};

    operator WebKitWebView * () //  Allow this to stand in for a Web View
    {   return WEBKIT_WEB_VIEW(gobj()); }

    //  Wrap any functions you want to use like this:
    void load_uri (const gchar *strUri)
    {   webkit_web_view_load_uri(*this, strUri);    }  
    // Note that, thanks to the cast operator, *this can
    // replace WebKitWebView pointers
};

//
//CWebView   *pView = new CWebView;
//window.add (*pView);
//pView->load_uri ("http://stackoverflow.com/questions/17039942/example-of-using-webkitgtk-with-gtkmm-3-0");
