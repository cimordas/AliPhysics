
// This file is used to give a list of histograms to be created by the manager.
// the histogram names are automatically generated by the createNames.py script
// the type/binning of the histograms depends on the range.
// DON'T ASSIGN NUMERICAL VALUE EXPLICITLY TO THE ENTRIES

namespace AliSpectraNameSpace
{
   enum AODPtHist_t
   {

      // 6 Pt Generated True Primary
      kHistPtGenTruePrimaryProtonPlus,          // Pt histo for protons +, generated tracks, true ID, primary Event
      kHistPtGenTruePrimaryKaonPlus,            // Pt histo for kaons +, generated tracks, true ID, primary Event
      kHistPtGenTruePrimaryPionPlus,            // Pt histo for pions +, generated tracks, true ID, primary Event
      kHistPtGenTruePrimaryProtonMinus,         // Pt histo for protons -, generated tracks, true ID, primary Event
      kHistPtGenTruePrimaryKaonMinus,           // Pt histo for kaons -, generated tracks, true ID, primary Event
      kHistPtGenTruePrimaryPionMinus,           // Pt histo for pions -, generated tracks, true ID, primary Event
      kHistPtGen,                               // Pt histo for all particles, generated tracks
      kNPtGenHist = kHistPtGen,                    // Number of ptGen-likehistos histos
      
      // 6 Pt Reconstructed Sigma
      kHistPtRecSigmaProtonPlus,                // Pt histo for protons +, reconstructed tracks, sigma ID
      kHistPtRecSigmaKaonPlus,                  // Pt histo for kaons +, reconsructed tracks, sigma ID
      kHistPtRecSigmaPionPlus,                  // Pt histo for pions +, reconstructed tracks, sigma ID
      kHistPtRecSigmaProtonMinus,               // Pt histo for protons -, reconstructed tracks, sigma ID
      kHistPtRecSigmaKaonMinus,                 // Pt histo for kaons -, reconstructed tracks, sigma ID
      kHistPtRecSigmaPionMinus,                 // Pt histo for pions -, reconstructed tracks, sigma ID
      
      // 6 Pt Reconstructed True
      kHistPtRecTrueProtonPlus,                 // Pt histo for protons +, reconstructed tracks, true ID
      kHistPtRecTrueKaonPlus,                   // Pt histo for kaons +, reconsructed tracks, true ID
      kHistPtRecTruePionPlus,                   // Pt histo for pions +, reconstructed tracks, true ID
      kHistPtRecTrueProtonMinus,                // Pt histo for protons -, reconstructed tracks, true ID
      kHistPtRecTrueKaonMinus,                  // Pt histo for kaons -, reconstructed tracks, true ID
      kHistPtRecTruePionMinus,                  // Pt histo for pions -, reconstructed tracks, true ID
      kHistPtRecTrueMuonPlus,                   // Pt histo for muons +, reconstructed tracks, true ID,
      kHistPtRecTrueMuonMinus,                  // Pt histo for muons +, reconstructed tracks, true ID,
            
      // 6 Pt Reconstructed Sigma Primary
      kHistPtRecSigmaPrimaryProtonPlus,         // Pt histo for protons +, reconstructed tracks, sigma ID, primary Event
      kHistPtRecSigmaPrimaryKaonPlus,           // Pt histo for kaons +, reconsructed tracks, sigma ID, primary Event
      kHistPtRecSigmaPrimaryPionPlus,           // Pt histo for pions +, reconstructed tracks, sigma ID, primary Event
      kHistPtRecSigmaPrimaryProtonMinus,        // Pt histo for protons -, reconstructed tracks, sigma ID, primary Event
      kHistPtRecSigmaPrimaryKaonMinus,          // Pt histo for kaons -, reconstructed tracks, sigma ID, primary Event
      kHistPtRecSigmaPrimaryPionMinus,          // Pt histo for pions -, reconstructed tracks, sigma ID, primary Event
            
      // 6 Pt Reconstructed Sigma Secondary Material
      kHistPtRecSigmaSecondaryMaterialProtonPlus,       // Pt histo for protons +, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryMaterialKaonPlus,         // Pt histo for kaons +, reconsructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryMaterialPionPlus,         // Pt histo for pions +, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryMaterialProtonMinus,      // Pt histo for protons -, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryMaterialKaonMinus,        // Pt histo for kaons -, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryMaterialPionMinus,        // Pt histo for pions -, reconstructed tracks, sigma ID, secondary Event

      // 6 Pt Reconstructed Sigma Secondary WeakDecay
      kHistPtRecSigmaSecondaryWeakDecayProtonPlus,       // Pt histo for protons +, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryWeakDecayKaonPlus,         // Pt histo for kaons +, reconsructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryWeakDecayPionPlus,         // Pt histo for pions +, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryWeakDecayProtonMinus,      // Pt histo for protons -, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryWeakDecayKaonMinus,        // Pt histo for kaons -, reconstructed tracks, sigma ID, secondary Event
      kHistPtRecSigmaSecondaryWeakDecayPionMinus,        // Pt histo for pions -, reconstructed tracks, sigma ID, secondary Event

      // 6 Pt Reconstructed True Primary
      kHistPtRecTruePrimaryProtonPlus,          // Pt histo for protons +, reconstructed tracks, true ID, primary event
      kHistPtRecTruePrimaryKaonPlus,            // Pt histo for kaons +, reconsructed tracks, true ID, primary event
      kHistPtRecTruePrimaryPionPlus,            // Pt histo for pions +, reconstructed tracks, true ID, primary event
      kHistPtRecTruePrimaryProtonMinus,         // Pt histo for protons -, reconstructed tracks, true ID, primary event
      kHistPtRecTruePrimaryKaonMinus,           // Pt histo for kaons -, reconstructed tracks, true ID, primary event
      kHistPtRecTruePrimaryPionMinus,           // Pt histo for pions -, reconstructed tracks, true ID, primary event
      kHistPtRecTruePrimaryMuonPlus,            // Pt histo for muons +, reconstructed tracks, true ID, primary event
      kHistPtRecTruePrimaryMuonMinus,            // Pt histo for muons +, reconstructed tracks, true ID, primary event
      
      // Rest
      kHistPtRec,                               // Pt histo for all particles, reconstructed tracks
      kHistPtRecPrimary,                               // Pt histo for all particles, reconstructed tracks
      kNPtRecHist = kHistPtRecPrimary,                    // Number of ptRec-likehistos histos
      
      kHistPIDTPC,                              // Particle Identification histo
      kHistPIDTOF,                              
      kNHistPID =kHistPIDTOF,                           
      
      kHistNSigProtonTPC,                       // NSigma separation plot    
      kHistNSigKaonTPC,                              
      kHistNSigPionTPC,                              
      kHistNSigProtonPtTPC,                              
      kHistNSigKaonPtTPC,                              
      kHistNSigPionPtTPC,                              
      
      kHistNSigProtonTOF,                              
      kHistNSigKaonTOF,                              
      kHistNSigPionTOF,                              
      kHistNSigProtonPtTOF,                              
      kHistNSigKaonPtTOF,                              
      kHistNSigPionPtTOF,                              
     
      kHistNSigProtonTPCTOF,                             
      kHistNSigKaonTPCTOF,                              
      kHistNSigPionTPCTOF,                              
      kHistNSigProtonPtTPCTOF,                              
      kHistNSigKaonPtTPCTOF,                              
      kHistNSigPionPtTPCTOF,
      kNHistNSig=kHistNSigPionPtTPCTOF,                              
      
      kHistqVecPos,
      kHistqVecNeg,
      kNHist,                                   // Total number of histos
   };  // Type of events plotted in Pt Histogram

}
