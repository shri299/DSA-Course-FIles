////Hashing using unordered maps(O(1))
////internally unordered map are implemented using hash table
//
//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//int main()
//{
//	unordered_map<string, int> umap;
//	umap["hello"] = 1;
//	umap["how"] = 2;
//	umap["are"] = 3;
//	umap["you"] = 4;
//	/*for (auto x:umap)
//	{
//		cout << x.first << " " << x.second << endl;
//	}*/
//	umap.insert(make_pair("then", 6));
//	umap.insert(make_pair("fine", 5));
//	/*string key = "how";
//	if (umap.find(key)==umap.end())
//	{
//		cout << "key not found";
//	}
//	else
//	{
//		cout << "key found";
//	}*/
//
//	/*unordered_map<string, int>::iterator itr;
//	for (itr=umap.begin();itr!=umap.end();itr++)
//	{
//		cout << itr->first << " " << itr->second << endl;
//	}*/
//
//	cout << umap.at("hello")<<" "<<umap.at("you")<<" " << umap.bucket("you")<<" " << umap.bucket("are") << endl;
//	cout << umap.bucket_count()<<" "<<umap.count("are");
//}