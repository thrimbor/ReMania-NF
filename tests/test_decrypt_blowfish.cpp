#include <assetLayer.h>

struct fileData {
    std::string key;
    std::string iv;
    std::string fileName;
    std::string plainText;
};

int main() {
    std::vector<fileData> files = {
        fileData {
            "QGTBRKJIXGPXKVOL",
            "\x47\x52\x50\x50\x54\x46\x44\x41",
            "data/0.bin",
            "XRGYRULBNSJLKUWABRBVHCSPKUIGTWPLMYVRVKCDELUBCFWCRFYJPLYOLHKISLIVVTACPMESHGKDXRHDJAXMOLJMSBQMQVWDJIBVABAARUWWWVQLPSYWMOLHEEHVJSIFXYVVBQKDIITJOUUDGSRFKWIJRLMRWINWRKWFJUQARYMLNOUDQPTDALIXNBDTVSHBGOGBDTASETTPTCVGLFKKDAOUHIXDGJDXQVBRFYRFPAVHXJJGKPUNTXOFFYRCAQETWCOSHWVRXLAFTCCCJATUEYKCTJCXJDWAXHLTDJIHEXTJELUVMECXJHWYINOKCPICMELCHHRPSUUQGTAFNUQGNUTRJFIPPNLROJRMEJUUKHNRRROUHMCCKSBKDPRXCNEMEVHLKEVMPAYEEWQUXVUFGOTQIADGQQSWDCBEXWOWSDTEJJKOUTJNOVSCTMVVTGQXGRKTGBCGRUBBWBPNYMLAQHEYNONEKPHNTHMALQSNXPVLJDXFHBWWNUCCUOYBUDYEWSPVNNMRSDXFGIWYWGXOOEIIAXWGGEWPIHLXRPUMNNITEKSSSKKABEWJGMFHDTFUHTQSOYJKSELOKHYKNHCFBKXCHDDIQBPGQEUIXFJIEWBHKNXASYPGMWBVVUWVSKAHKMJFXILWUTHOKWVKHOVTWHGYYECUCQTHUOOXJAPALGNFRMTCGCLDIPKHMWPOEHVFCALXOBCSBFNFGFBXYMPSFCUMRUSLNSSPMETUNQNHIYMYAIJYXQNJFUCESREAOTGCYGGHPUIDHNHUCVGMVCGYDLBXKMGTCEGVTMIKJHSWBFRAFPMVFDDVMVWMMBPDXDSUWHSGSTYHCWRXBMYRCKTKLIVJLEJRYEASXIPNVBUIQLFQOATHJOPOPGYYKQMAKWYMDMLCVJLVTSDRSMRULBHTOLHAKXLKKQNRLUTTRLXQFEIAQSALGICNTAUONYKWVOYCVVGTLWXLBGVLCGCFBHIUVXVLPMHHHBQXANLGPVRHGDYEADYGTJFJIKXTPXSVEXNA"
        },
        fileData {
            "PVMFCPPMVERBRMXL",
            "\x48\x4e\x43\x51\x4d\x58\x53\x41",
            "data/1.bin",
            "QLDBIHEGUJUTIRJSRQWRHSVQBMFJTWUQABGMMVPIQJGLSHCTKGBGRBBEIEORJMQIMNHMGMOEANJJUXNHFRHYXXKEPJPFMQXRFDHNNWGHYQKUQSJHOBAGMXAVBXLWAIDWPUDYCVARAJUFKWSQAWVAHNRKVSWUPNVNBSCFBTYYWKTXRGLLKYBMIFLQMNTERWOVMYLMYWKQURMOOMJGUCNHJVBLVFNULAXCIRCDCMNOAAGIRNPMNGOEOFSYOOTPFAWPHEVCVRSATYMRSWCTBIBXKUPESRFEESSKHMKVAGBQTYLAORBRKJWSHUUXVOWDCOTKFJEAIFCGAQQKWNSVOCEKESQTMLFAUSTWDDBBXHRKXADTUJKTTKGVAYGONIFJTKKXBAWMSNKNACTIDWPTVIHVNELSXPBXEBOTIGSOVNQLHDJISHHMTQSUDIPGOLEAIUDRSMCSQBBCJDVPKMBBBPXNIKLDTXDJQJXIBDDPTGKFOWJLYWTAXNUFOHFVSHMTMWUDBERNDJTFQRIFOBTXWRARVHCHPMMTBCNLSPKGTDESUNHNWEDPKYUXFUNXSAFMWXNNOVMTXCVXJDQGSMTTHDCAQVXTYTYHPIBDHCSKAMDNRQSEEMGLFAVMJDMBUXRTGYCGDUMAYNTNWALCPROOTPVWWAITIBGKQYRLPVVYNPJABSHJSVEAYSJIIQJBWPMGQXHMXJFVELOPREVGPRHTCXQFYOKXSQWNIBFUODNKCFDMYTASEURMVIVNFHVVDJYWYDHFISSSHKHWLFRBNXDHTJBBATJOYQTBOCKBAXOEOVGOLWHBSDXFKFRGTDIJKOXUXHLIXAOUNJSMRQPXMSHRVKMXWCTFYBKKVDFYNOEDFXBSUIYBMPMPHPJWLRVYFJNEWWDECKSDFOQIMAXNLHDCUBCNSXPEBTJLCWXPAFPTKPTJIRAAMFUVIMSCGOOGNIMTONKOXKJDHXSTNTRTJQOKNJVMQMLRRYKHICPBQACFYHXGKBFWYPBTUAEKKPWKYYKXWGEO"
        },
        fileData {
            "YKHHHMLTERBDNETS",
            "\x50\x44\x4f\x58\x51\x56\x4e\x4b",
            "data/2.bin",
            "GJDMNYUVMTRODVCYUYBJXIAKJOLCLSYSLJDUAMPCRMFJAGYJJXFFUIEYODQEETFJORGCBJYERITKYHGMJIXLRILULHSMYJODTKSEOMTAJBVILMURNKYAVUIWPHSTEPJURKADWYIMTWPMKQBYHYTNLQRRJOMSXBTXIDEJNEHUQQXDLURGJUIDBROPURFGWRFBYFLPOUHAGYGLXHCOJSUOSHKMYIEVMVUSJRIFESWRBKFVKNGNKEUILYUOJVQBMIOEMBKAWDVXOADTGPEUWBXCFLIENNXEYEPSXYKVUGQJXGOJADOWFBLNKVHGKYXPUNORKBMPVGLCCXGFURNJCYCICVWROEERJLTTBTIKJQBEIPLNFGARWOPOWLHGRXWLITHVCFTVCFWSPHKWHSNRWTELCYCAYCGVAPANRNPKOXGGQQRFNHWXRJUNISQSOQMCTXUPGINQORHTDKDDDSVWFWMAQRGIXJNGEQTDXYXDBXGEMLRVUYAJBLBEKFCXCUDXPOCSPEGHDJIYAVBUNONQFWKWJACRECLLOVECNLGVAISWJNQWRAIRUNYGVFDKTJAOYPVCOSFBHBNXYKFIQFTGQDBVATMBPCTJMVMLEVCIFLODKQPRMGORHEMLLWERTOATEIIURREOTOIJJDEFAKPLQCYCWVRXWJARNDUSWSILINKYBFOHBNMDCEVMAWWESCOFMNMSBWWDGVDNAFQJIICDYOOEPMIHGWITQXJNHUCNOHKOBKLRJJHRYSFUXVDOAGPHPUUYRJBYBDWMKQBXFERSBLCXVQFLMKVECXKWDBVLLMOGTGKMKETQWUXNPKBVIWCWJCLWRYLKLCVIJCMPJFAKIEWMWFBEMLKHJMYNLETRLLUWQJERJRUXPRPUKCHJSKNYULKCEBGPSYEPHAPGHVPJKVCLCWNKRAIDIPNUICKGEUYJTDPTBXWGSACUASQWBOSGSWUMKCSWVUJSRKXKNXGEOEJQILSFRKLBIPAWQOFKHVJCQBXIXIOCOUQWISRDYDJEAVGD"
        },
        fileData {
            "BEUBJITMHNYPFOJS",
            "\x51\x50\x4e\x4c\x4b\x4d\x42\x55",
            "data/3.bin",
            "GVVDKYWMOIMCAPOEGUPWSEMGUJCKHOBWBBLQBFKNTCFJYFSABLVJPEGPXLSDXODOWYUOEUCXEWDNPXGQBGWUAVYVWMQDCUBUECLLMGLWEXGEAGVDDAXETVHXJVYICUKEIMMDRUWBBGKXHJOHELVCCLKLXTADUSHAOCCJPNRVYJRDSLJFGIIVRKFUITSUXUSFMPHIXUJEEOYBWVYPCLWODCMEAOMQEQXGNCPVUOHRGPLYCVVSPLJPBUYUTTTMHWICGYEYQWQBRHOEIQGIJMJFHALMXNBJPLVDTDPPLAFMWBHBSJWWOWWFVXCRJPNIQTYUDHDEFRXGVLRMUERENEWYHQLKJMPPJQBREMARLQEYMATULKHVGDWFJRBUOXXLLBURDNAOADTVSUGIOBSTHHQKVMYGTFPKKYBPTJFHULPMFQXAOOGRWXCHFGWHLNXJQQHSJGGFSNQSTEBHPYXHGCFAEVINGWDVOGDRKIQOWUSJERFLUYKUONPHVDPSWRDFPSCMJOMJKUOWFOEKSHFOAFIECINTOCQKSDIFVOYUVLHSMKUKXMAYEOYWMFISCIOGIJCDHEFEOPYWFTMVXMQFORYAQWAXBNUYIMCNFCOIBYGVDCPJFUNDXTIRLYJPVWOWXUJQFXVMGNAMWIPCKLXDGCCFBSCTAYODYTQEJQWOXVRJRMRXTNNYPWBYHQNDQQTVGQYBJTEEQMLABBUQVBJJGDNWBATRWYRIBOUGCBAAUCURHNKVHYFYLNKCLAAHWEXFQGBQCXWGWLAURFXVLWWPPRVIWTEPUJAEYSYSWROFPOWORTUKYDIUJMVXBHYMCVOKLOUIWEGUBCUWBVYPPMGKAMUKCROWGLXORSHUKAXUKBYGPFKSIMOVIOLGYRSLPNAPSIJPDJDNNOJCNSGWEIGMRKAPMTCMYKKHXIVRSBQNTUHVPLWTQQXJVATTXFHRKXERDHLULPAYWJCRFIXBIGOTGVNIRXKLOXIJWQTKSYOFKHVJCQBXIXIOCOUQWISRDYDJEAVGD"
        }
    };

    bool passed = true;

    for (auto& i : files) {
        std::ifstream file(i.fileName);
        std::string data;
        data.resize(1024,'|');
        file.read(data.data(),1024);
        
        printf("%i %s\n",file.is_open(),data.c_str());

        mbedtls_blowfish_context ctx;
        mbedtls_blowfish_init(&ctx);
         if (mbedtls_blowfish_setkey(&ctx,(const unsigned char*)i.key.data(),128) != 0) {
             logger::log(logger::FATAL,"Setting key failed","Assets",__FILE__,__LINE__);
         }
        
        if (data.size()%8 != 0) {
            logger::log(logger::FATAL,"Data read from pack file didn't have a length which is a multiple of 8","Assets",__FILE__,__LINE__);
        }

        std::string supossedPlainText;
        supossedPlainText.resize(1024,'|');
        //for (int j = 0; j < data.size(); j += 8) {
            if(mbedtls_blowfish_crypt_cbc(&ctx,MBEDTLS_BLOWFISH_DECRYPT,1024,(unsigned char*)i.iv.data(),(unsigned char*)data.data(),(unsigned char*)supossedPlainText.data()) != 0) {
                logger::log(logger::ERROR,"Decryption failed","Assets",__FILE__,__LINE__);
            }
        //}
        mbedtls_blowfish_free(&ctx);



        if (supossedPlainText != i.plainText) {
            passed = false;
            printf("%lu %s\n",supossedPlainText.size(),supossedPlainText.c_str());
        }
    }
    if (passed) {
        printf("Test passed");
    }
    else {
        printf("Test failed");
    }
}