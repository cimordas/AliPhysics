//
// macro to extract TPC Performance values using AliTPCPerformanceSummary class
// only for one run!
//

void MakeTrendGraph(const char *infilelist, const char* outfile) {

  gSystem->AddIncludePath("-I$ALICE_PHYSICS/PWGPP/TPC");
  gSystem->Load("libANALYSIS");
  gSystem->Load("libANALYSISalice");
  gSystem->Load("libTender");
  gSystem->Load("libCORRFW");
  gSystem->Load("libPWG0base");
  gSystem->Load("libPWG0dep");
  gSystem->Load("libPWG0selectors");
  gSystem->Load("libPWGPP");
  gSystem->Load("libTPCcalib");  
  
  AliTPCPerformanceSummary::ProduceTrends(infilelist, outfile);
}
