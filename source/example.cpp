#include <curl/curl.h>
#include <iostream>

using namespace std;


int main()
{
    CURL* curl;
    curl = curl_easy_init();
    if(curl)
    {
        CURLcode res;
        curl_easy_setopt(curl, CURLOPT_URL,"http://example.com");
        res = curl_easy_perform(curl);
        
        if(CURLE_OK == res)
        {
            long response_code;
            res = curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);

            cout << response_code <<endl;
        }

        cout << endl << curl_easy_strerror(res) << endl;
        curl_easy_cleanup(curl);
    }
   return 0;
}
