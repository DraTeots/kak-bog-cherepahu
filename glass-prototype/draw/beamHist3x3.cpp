#include <TH1.h>
#include <TCanvas.h>
#include <TStyle.h>
#include <TApplication.h>

#include <FitUtils.h>
#include <CanvasHelper.h>

int beamHist3x3() {
  TH1F *hist = new TH1F("hist", "SciGlass 40cm, 3x3 Matrix. Total Charge", 1001, 0, 70000);
  hist->SetBinContent(0, 30);
  hist->SetBinContent(1, 426);
  hist->SetBinContent(2, 1);
  hist->SetBinContent(4, 1);
  hist->SetBinContent(6, 2);
  hist->SetBinContent(8, 1);
  hist->SetBinContent(9, 1);
  hist->SetBinContent(12, 1);
  hist->SetBinContent(17, 1);
  hist->SetBinContent(20, 1);
  hist->SetBinContent(21, 1);
  hist->SetBinContent(22, 2);
  hist->SetBinContent(23, 2);
  hist->SetBinContent(24, 3);
  hist->SetBinContent(25, 1);
  hist->SetBinContent(26, 1);
  hist->SetBinContent(28, 2);
  hist->SetBinContent(29, 1);
  hist->SetBinContent(30, 1);
  hist->SetBinContent(31, 2);
  hist->SetBinContent(33, 2);
  hist->SetBinContent(34, 2);
  hist->SetBinContent(35, 1);
  hist->SetBinContent(36, 1);
  hist->SetBinContent(37, 2);
  hist->SetBinContent(39, 2);
  hist->SetBinContent(40, 1);
  hist->SetBinContent(41, 2);
  hist->SetBinContent(42, 2);
  hist->SetBinContent(43, 1);
  hist->SetBinContent(44, 2);
  hist->SetBinContent(45, 1);
  hist->SetBinContent(46, 1);
  hist->SetBinContent(47, 1);
  hist->SetBinContent(48, 2);
  hist->SetBinContent(49, 2);
  hist->SetBinContent(50, 2);
  hist->SetBinContent(51, 2);
  hist->SetBinContent(53, 1);
  hist->SetBinContent(54, 1);
  hist->SetBinContent(55, 2);
  hist->SetBinContent(58, 4);
  hist->SetBinContent(59, 2);
  hist->SetBinContent(60, 2);
  hist->SetBinContent(61, 1);
  hist->SetBinContent(62, 3);
  hist->SetBinContent(63, 1);
  hist->SetBinContent(64, 3);
  hist->SetBinContent(65, 2);
  hist->SetBinContent(67, 2);
  hist->SetBinContent(68, 2);
  hist->SetBinContent(69, 2);
  hist->SetBinContent(70, 1);
  hist->SetBinContent(71, 4);
  hist->SetBinContent(72, 2);
  hist->SetBinContent(73, 6);
  hist->SetBinContent(74, 3);
  hist->SetBinContent(75, 2);
  hist->SetBinContent(76, 2);
  hist->SetBinContent(78, 2);
  hist->SetBinContent(79, 3);
  hist->SetBinContent(80, 4);
  hist->SetBinContent(81, 4);
  hist->SetBinContent(82, 4);
  hist->SetBinContent(83, 1);
  hist->SetBinContent(84, 4);
  hist->SetBinContent(85, 2);
  hist->SetBinContent(86, 4);
  hist->SetBinContent(87, 2);
  hist->SetBinContent(88, 3);
  hist->SetBinContent(89, 2);
  hist->SetBinContent(90, 2);
  hist->SetBinContent(91, 4);
  hist->SetBinContent(92, 4);
  hist->SetBinContent(93, 1);
  hist->SetBinContent(94, 2);
  hist->SetBinContent(95, 2);
  hist->SetBinContent(96, 2);
  hist->SetBinContent(99, 3);
  hist->SetBinContent(100, 2);
  hist->SetBinContent(101, 1);
  hist->SetBinContent(102, 2);
  hist->SetBinContent(103, 1);
  hist->SetBinContent(104, 2);
  hist->SetBinContent(105, 3);
  hist->SetBinContent(110, 1);
  hist->SetBinContent(111, 2);
  hist->SetBinContent(112, 1);
  hist->SetBinContent(113, 3);
  hist->SetBinContent(115, 1);
  hist->SetBinContent(117, 1);
  hist->SetBinContent(118, 1);
  hist->SetBinContent(121, 1);
  hist->SetBinContent(122, 2);
  hist->SetBinContent(123, 1);
  hist->SetBinContent(127, 1);
  hist->SetBinContent(128, 1);
  hist->SetBinContent(130, 2);
  hist->SetBinContent(132, 1);
  hist->SetBinContent(134, 2);
  hist->SetBinContent(135, 1);
  hist->SetBinContent(137, 1);
  hist->SetBinContent(138, 1);
  hist->SetBinContent(139, 2);
  hist->SetBinContent(140, 1);
  hist->SetBinContent(141, 1);
  hist->SetBinContent(142, 1);
  hist->SetBinContent(144, 2);
  hist->SetBinContent(145, 2);
  hist->SetBinContent(146, 2);
  hist->SetBinContent(148, 1);
  hist->SetBinContent(149, 1);
  hist->SetBinContent(151, 1);
  hist->SetBinContent(152, 2);
  hist->SetBinContent(153, 1);
  hist->SetBinContent(154, 1);
  hist->SetBinContent(155, 1);
  hist->SetBinContent(161, 1);
  hist->SetBinContent(162, 1);
  hist->SetBinContent(164, 1);
  hist->SetBinContent(167, 1);
  hist->SetBinContent(171, 1);
  hist->SetBinContent(172, 1);
  hist->SetBinContent(174, 2);
  hist->SetBinContent(175, 1);
  hist->SetBinContent(177, 1);
  hist->SetBinContent(178, 1);
  hist->SetBinContent(179, 2);
  hist->SetBinContent(180, 1);
  hist->SetBinContent(181, 1);
  hist->SetBinContent(182, 1);
  hist->SetBinContent(183, 2);
  hist->SetBinContent(184, 1);
  hist->SetBinContent(185, 1);
  hist->SetBinContent(186, 1);
  hist->SetBinContent(187, 4);
  hist->SetBinContent(188, 1);
  hist->SetBinContent(189, 2);
  hist->SetBinContent(191, 1);
  hist->SetBinContent(193, 1);
  hist->SetBinContent(195, 2);
  hist->SetBinContent(196, 3);
  hist->SetBinContent(197, 2);
  hist->SetBinContent(198, 2);
  hist->SetBinContent(199, 1);
  hist->SetBinContent(200, 2);
  hist->SetBinContent(202, 3);
  hist->SetBinContent(203, 2);
  hist->SetBinContent(204, 1);
  hist->SetBinContent(205, 5);
  hist->SetBinContent(206, 2);
  hist->SetBinContent(207, 4);
  hist->SetBinContent(208, 3);
  hist->SetBinContent(209, 2);
  hist->SetBinContent(210, 1);
  hist->SetBinContent(211, 1);
  hist->SetBinContent(212, 3);
  hist->SetBinContent(213, 1);
  hist->SetBinContent(214, 2);
  hist->SetBinContent(215, 2);
  hist->SetBinContent(216, 4);
  hist->SetBinContent(217, 2);
  hist->SetBinContent(218, 3);
  hist->SetBinContent(219, 1);
  hist->SetBinContent(220, 3);
  hist->SetBinContent(221, 1);
  hist->SetBinContent(222, 4);
  hist->SetBinContent(223, 2);
  hist->SetBinContent(224, 1);
  hist->SetBinContent(225, 3);
  hist->SetBinContent(226, 2);
  hist->SetBinContent(227, 1);
  hist->SetBinContent(228, 2);
  hist->SetBinContent(229, 2);
  hist->SetBinContent(230, 2);
  hist->SetBinContent(231, 1);
  hist->SetBinContent(232, 1);
  hist->SetBinContent(233, 7);
  hist->SetBinContent(234, 3);
  hist->SetBinContent(235, 4);
  hist->SetBinContent(236, 6);
  hist->SetBinContent(237, 2);
  hist->SetBinContent(238, 4);
  hist->SetBinContent(239, 3);
  hist->SetBinContent(240, 3);
  hist->SetBinContent(241, 2);
  hist->SetBinContent(242, 4);
  hist->SetBinContent(243, 3);
  hist->SetBinContent(245, 8);
  hist->SetBinContent(246, 3);
  hist->SetBinContent(247, 4);
  hist->SetBinContent(248, 2);
  hist->SetBinContent(249, 7);
  hist->SetBinContent(250, 10);
  hist->SetBinContent(251, 3);
  hist->SetBinContent(252, 3);
  hist->SetBinContent(253, 5);
  hist->SetBinContent(254, 2);
  hist->SetBinContent(255, 1);
  hist->SetBinContent(256, 5);
  hist->SetBinContent(257, 8);
  hist->SetBinContent(258, 4);
  hist->SetBinContent(259, 6);
  hist->SetBinContent(260, 4);
  hist->SetBinContent(261, 12);
  hist->SetBinContent(263, 4);
  hist->SetBinContent(264, 7);
  hist->SetBinContent(265, 2);
  hist->SetBinContent(266, 6);
  hist->SetBinContent(267, 5);
  hist->SetBinContent(268, 10);
  hist->SetBinContent(269, 7);
  hist->SetBinContent(270, 6);
  hist->SetBinContent(271, 8);
  hist->SetBinContent(272, 5);
  hist->SetBinContent(273, 5);
  hist->SetBinContent(274, 9);
  hist->SetBinContent(275, 10);
  hist->SetBinContent(276, 9);
  hist->SetBinContent(277, 6);
  hist->SetBinContent(278, 14);
  hist->SetBinContent(279, 13);
  hist->SetBinContent(280, 8);
  hist->SetBinContent(281, 13);
  hist->SetBinContent(282, 12);
  hist->SetBinContent(283, 16);
  hist->SetBinContent(284, 7);
  hist->SetBinContent(285, 15);
  hist->SetBinContent(286, 13);
  hist->SetBinContent(287, 14);
  hist->SetBinContent(288, 17);
  hist->SetBinContent(289, 19);
  hist->SetBinContent(290, 10);
  hist->SetBinContent(291, 30);
  hist->SetBinContent(292, 21);
  hist->SetBinContent(293, 22);
  hist->SetBinContent(294, 23);
  hist->SetBinContent(295, 25);
  hist->SetBinContent(296, 26);
  hist->SetBinContent(297, 23);
  hist->SetBinContent(298, 26);
  hist->SetBinContent(299, 29);
  hist->SetBinContent(300, 33);
  hist->SetBinContent(301, 42);
  hist->SetBinContent(302, 46);
  hist->SetBinContent(303, 50);
  hist->SetBinContent(304, 53);
  hist->SetBinContent(305, 52);
  hist->SetBinContent(306, 53);
  hist->SetBinContent(307, 70);
  hist->SetBinContent(308, 94);
  hist->SetBinContent(309, 80);
  hist->SetBinContent(310, 111);
  hist->SetBinContent(311, 87);
  hist->SetBinContent(312, 92);
  hist->SetBinContent(313, 111);
  hist->SetBinContent(314, 143);
  hist->SetBinContent(315, 130);
  hist->SetBinContent(316, 148);
  hist->SetBinContent(317, 152);
  hist->SetBinContent(318, 144);
  hist->SetBinContent(319, 171);
  hist->SetBinContent(320, 165);
  hist->SetBinContent(321, 201);
  hist->SetBinContent(322, 225);
  hist->SetBinContent(323, 231);
  hist->SetBinContent(324, 236);
  hist->SetBinContent(325, 229);
  hist->SetBinContent(326, 261);
  hist->SetBinContent(327, 307);
  hist->SetBinContent(328, 306);
  hist->SetBinContent(329, 365);
  hist->SetBinContent(330, 351);
  hist->SetBinContent(331, 382);
  hist->SetBinContent(332, 394);
  hist->SetBinContent(333, 406);
  hist->SetBinContent(334, 400);
  hist->SetBinContent(335, 465);
  hist->SetBinContent(336, 467);
  hist->SetBinContent(337, 516);
  hist->SetBinContent(338, 487);
  hist->SetBinContent(339, 545);
  hist->SetBinContent(340, 574);
  hist->SetBinContent(341, 605);
  hist->SetBinContent(342, 607);
  hist->SetBinContent(343, 619);
  hist->SetBinContent(344, 633);
  hist->SetBinContent(345, 682);
  hist->SetBinContent(346, 656);
  hist->SetBinContent(347, 719);
  hist->SetBinContent(348, 723);
  hist->SetBinContent(349, 745);
  hist->SetBinContent(350, 785);
  hist->SetBinContent(351, 764);
  hist->SetBinContent(352, 786);
  hist->SetBinContent(353, 798);
  hist->SetBinContent(354, 798);
  hist->SetBinContent(355, 856);
  hist->SetBinContent(356, 865);
  hist->SetBinContent(357, 827);
  hist->SetBinContent(358, 892);
  hist->SetBinContent(359, 860);
  hist->SetBinContent(360, 898);
  hist->SetBinContent(361, 924);
  hist->SetBinContent(362, 912);
  hist->SetBinContent(363, 918);
  hist->SetBinContent(364, 914);
  hist->SetBinContent(365, 911);
  hist->SetBinContent(366, 965);
  hist->SetBinContent(367, 988);
  hist->SetBinContent(368, 938);
  hist->SetBinContent(369, 972);
  hist->SetBinContent(370, 943);
  hist->SetBinContent(371, 988);
  hist->SetBinContent(372, 912);
  hist->SetBinContent(373, 928);
  hist->SetBinContent(374, 892);
  hist->SetBinContent(375, 928);
  hist->SetBinContent(376, 873);
  hist->SetBinContent(377, 947);
  hist->SetBinContent(378, 879);
  hist->SetBinContent(379, 905);
  hist->SetBinContent(380, 877);
  hist->SetBinContent(381, 851);
  hist->SetBinContent(382, 892);
  hist->SetBinContent(383, 809);
  hist->SetBinContent(384, 841);
  hist->SetBinContent(385, 839);
  hist->SetBinContent(386, 880);
  hist->SetBinContent(387, 849);
  hist->SetBinContent(388, 792);
  hist->SetBinContent(389, 750);
  hist->SetBinContent(390, 734);
  hist->SetBinContent(391, 714);
  hist->SetBinContent(392, 740);
  hist->SetBinContent(393, 714);
  hist->SetBinContent(394, 740);
  hist->SetBinContent(395, 716);
  hist->SetBinContent(396, 713);
  hist->SetBinContent(397, 697);
  hist->SetBinContent(398, 702);
  hist->SetBinContent(399, 631);
  hist->SetBinContent(400, 574);
  hist->SetBinContent(401, 609);
  hist->SetBinContent(402, 586);
  hist->SetBinContent(403, 547);
  hist->SetBinContent(404, 529);
  hist->SetBinContent(405, 571);
  hist->SetBinContent(406, 576);
  hist->SetBinContent(407, 523);
  hist->SetBinContent(408, 539);
  hist->SetBinContent(409, 495);
  hist->SetBinContent(410, 441);
  hist->SetBinContent(411, 486);
  hist->SetBinContent(412, 480);
  hist->SetBinContent(413, 471);
  hist->SetBinContent(414, 394);
  hist->SetBinContent(415, 417);
  hist->SetBinContent(416, 411);
  hist->SetBinContent(417, 382);
  hist->SetBinContent(418, 387);
  hist->SetBinContent(419, 358);
  hist->SetBinContent(420, 376);
  hist->SetBinContent(421, 341);
  hist->SetBinContent(422, 332);
  hist->SetBinContent(423, 320);
  hist->SetBinContent(424, 300);
  hist->SetBinContent(425, 279);
  hist->SetBinContent(426, 298);
  hist->SetBinContent(427, 312);
  hist->SetBinContent(428, 261);
  hist->SetBinContent(429, 271);
  hist->SetBinContent(430, 241);
  hist->SetBinContent(431, 230);
  hist->SetBinContent(432, 223);
  hist->SetBinContent(433, 243);
  hist->SetBinContent(434, 252);
  hist->SetBinContent(435, 228);
  hist->SetBinContent(436, 195);
  hist->SetBinContent(437, 234);
  hist->SetBinContent(438, 202);
  hist->SetBinContent(439, 181);
  hist->SetBinContent(440, 192);
  hist->SetBinContent(441, 169);
  hist->SetBinContent(442, 162);
  hist->SetBinContent(443, 161);
  hist->SetBinContent(444, 150);
  hist->SetBinContent(445, 140);
  hist->SetBinContent(446, 136);
  hist->SetBinContent(447, 123);
  hist->SetBinContent(448, 132);
  hist->SetBinContent(449, 105);
  hist->SetBinContent(450, 128);
  hist->SetBinContent(451, 103);
  hist->SetBinContent(452, 110);
  hist->SetBinContent(453, 113);
  hist->SetBinContent(454, 84);
  hist->SetBinContent(455, 98);
  hist->SetBinContent(456, 91);
  hist->SetBinContent(457, 83);
  hist->SetBinContent(458, 79);
  hist->SetBinContent(459, 72);
  hist->SetBinContent(460, 72);
  hist->SetBinContent(461, 62);
  hist->SetBinContent(462, 53);
  hist->SetBinContent(463, 61);
  hist->SetBinContent(464, 55);
  hist->SetBinContent(465, 60);
  hist->SetBinContent(466, 49);
  hist->SetBinContent(467, 53);
  hist->SetBinContent(468, 40);
  hist->SetBinContent(469, 51);
  hist->SetBinContent(470, 61);
  hist->SetBinContent(471, 34);
  hist->SetBinContent(472, 43);
  hist->SetBinContent(473, 36);
  hist->SetBinContent(474, 34);
  hist->SetBinContent(475, 36);
  hist->SetBinContent(476, 32);
  hist->SetBinContent(477, 19);
  hist->SetBinContent(478, 28);
  hist->SetBinContent(479, 29);
  hist->SetBinContent(480, 31);
  hist->SetBinContent(481, 31);
  hist->SetBinContent(482, 23);
  hist->SetBinContent(483, 29);
  hist->SetBinContent(484, 18);
  hist->SetBinContent(485, 35);
  hist->SetBinContent(486, 18);
  hist->SetBinContent(487, 20);
  hist->SetBinContent(488, 17);
  hist->SetBinContent(489, 15);
  hist->SetBinContent(490, 11);
  hist->SetBinContent(491, 12);
  hist->SetBinContent(492, 10);
  hist->SetBinContent(493, 13);
  hist->SetBinContent(494, 11);
  hist->SetBinContent(495, 11);
  hist->SetBinContent(496, 12);
  hist->SetBinContent(497, 10);
  hist->SetBinContent(498, 10);
  hist->SetBinContent(499, 9);
  hist->SetBinContent(500, 10);
  hist->SetBinContent(501, 8);
  hist->SetBinContent(502, 5);
  hist->SetBinContent(503, 6);
  hist->SetBinContent(504, 3);
  hist->SetBinContent(505, 7);
  hist->SetBinContent(506, 9);
  hist->SetBinContent(507, 4);
  hist->SetBinContent(508, 3);
  hist->SetBinContent(509, 5);
  hist->SetBinContent(510, 6);
  hist->SetBinContent(511, 4);
  hist->SetBinContent(512, 2);
  hist->SetBinContent(513, 2);
  hist->SetBinContent(514, 1);
  hist->SetBinContent(515, 5);
  hist->SetBinContent(516, 3);
  hist->SetBinContent(518, 2);
  hist->SetBinContent(519, 2);
  hist->SetBinContent(520, 3);
  hist->SetBinContent(521, 5);
  hist->SetBinContent(522, 1);
  hist->SetBinContent(524, 1);
  hist->SetBinContent(525, 4);
  hist->SetBinContent(527, 3);
  hist->SetBinContent(528, 1);
  hist->SetBinContent(529, 1);
  hist->SetBinContent(530, 1);
  hist->SetBinContent(533, 1);
  hist->SetBinContent(534, 2);
  hist->SetBinContent(536, 1);
  hist->SetBinContent(538, 1);
  hist->SetBinContent(540, 1);
  hist->SetBinContent(543, 1);
  hist->SetBinContent(550, 1);
  hist->SetBinContent(558, 1);
  hist->SetBinContent(559, 2);
  hist->SetBinContent(560, 1);
  hist->SetBinContent(564, 1);
  hist->SetBinContent(566, 1);
  hist->SetBinContent(576, 1);
  hist->SetBinContent(584, 1);
  hist->SetBinContent(589, 1);
  hist->SetBinContent(591, 1);
  hist->SetBinContent(596, 1);
  hist->SetBinContent(599, 1);
  hist->SetBinContent(605, 1);
  hist->SetBinContent(606, 1);
  hist->SetBinContent(612, 1);
  hist->SetBinContent(618, 1);
  hist->SetBinContent(620, 1);
  hist->SetBinContent(622, 1);
  hist->SetBinContent(632, 1);
  hist->SetBinContent(636, 1);
  hist->SetBinContent(638, 1);
  hist->SetBinContent(641, 1);
  hist->SetBinContent(644, 1);
  hist->SetBinContent(646, 2);
  hist->SetBinContent(651, 1);
  hist->SetBinContent(654, 1);
  hist->SetBinContent(657, 1);
  hist->SetBinContent(658, 2);
  hist->SetBinContent(659, 1);
  hist->SetBinContent(661, 1);
  hist->SetBinContent(667, 1);
  hist->SetBinContent(672, 1);
  hist->SetBinContent(674, 1);
  hist->SetBinContent(676, 1);
  hist->SetBinContent(685, 1);
  hist->SetBinContent(697, 1);
  hist->SetBinContent(722, 1);
  hist->SetBinContent(728, 1);
  hist->SetBinContent(738, 1);
  hist->SetBinContent(740, 1);
  hist->SetBinContent(757, 1);
  hist->SetBinContent(770, 1);
  hist->SetEntries(77949);

  // hist->SetAxisRange(7000., 13000., "X");

  hist->SetFillColor(kGray);
  hist->SetLineColor(kGray + 2);
  TH1D *hist2 = (TH1D*) hist->Clone("hist-crystal-ball-reversed");

  // Enable most common fit statistics
  gStyle->SetOptFit(1);

  TCanvas *canvas = new TCanvas();
  canvas->SetWindowSize(1280, 500);
  canvas->Divide(2, 1, 1E-5, 1E-5);

  // LEFT PAD - Gaussian fit
  TVirtualPad *pad1 = canvas->cd(1);
  pad1->SetGrid();
  hist->Draw();

  TF1 *gauss = new TF1("gauss", "gaus", hist->GetXaxis()->GetXmin(), hist->GetXaxis()->GetXmax());
  gauss->SetNpx(200);
  gauss->SetLineColor(kPink);
  hist->Fit(gauss, "M");

  // Add values to statistics box
  CanvasHelper::addTextToStats("", pad1);

  TString str;
  // TVector2 resFit = FitUtils::evalResolution(gauss->GetParameter(1), gauss->GetParError(1), gauss->GetParameter(2), gauss->GetParError(2));
  // str = TString::Format("Resolution, %% = %f #pm %f", resFit.X(), resFit.Y());
  // CanvasHelper::addTextToStats(str.Data(), pad1);

  Double_t gaussMean = gauss->Mean(gauss->GetXmin(), gauss->GetXmax());
  str = TString::Format("1st momentum, %% = %f #pm %f", gaussMean, gauss->GetParError(1));
  CanvasHelper::addTextToStats(str.Data(), pad1);

  Double_t gaussVariance = gauss->Variance(gauss->GetXmin(), gauss->GetXmax());
  Double_t gaussDispersion = TMath::Sqrt(gaussVariance);
  str = TString::Format("2nd momentum, %% = %f #pm %f", gaussDispersion, gauss->GetParError(2));
  CanvasHelper::addTextToStats(str.Data(), pad1);

  TVector2 resTF1 = FitUtils::evalResolution(gaussMean, gauss->GetParError(1), gaussDispersion, gauss->GetParError(2));
  str = TString::Format("Resolution, %% = %f #pm %f", resTF1.X(), resTF1.Y());
  CanvasHelper::addTextToStats(str.Data(), pad1);

  // Align statistics box
  TPave *pave = CanvasHelper::getDefaultPaveStats(pad1);
  CanvasHelper::setPaveAlignment(pave, kPaveAlignRight | kPaveAlignTop);

  // RIGHT PAD - Crystal Ball fit
  TVirtualPad *pad2 = canvas->cd(2);
  pad2->SetGrid();
  hist2->Draw();

  TF1 *cball = FitUtils::getCrystalBallFunction(hist2, kTRUE);
  cball->SetNpx(200);
  cball->SetLineColor(kBlue);
  hist2->Fit(cball, "M");

  // Add values to statistics box
  Double_t gausMean = cball->GetParameter(2);
  Double_t gausMeanErr = cball->GetParError(2);
  Double_t gausSigma = cball->GetParameter(3);
  Double_t gausSigmaErr = cball->GetParError(3);
  TVector2 gausResolution = FitUtils::evalResolution(gausMean, gausMeanErr, gausSigma, gausSigmaErr);
  str = TString::Format("Resolution (ideal), %% = %f #pm %f", gausResolution.X(), gausResolution.Y());
  CanvasHelper::addTextToStats(str.Data(), pad2);

  TVector2 mean = FitUtils::getCrystalBallMean(cball);
  TVector2 dispersion = FitUtils::getCrystalBallDispersion(cball);
  TVector2 resolution = FitUtils::getCrystalBallResolution(cball);

  CanvasHelper::addTextToStats("", pad2);
  str = TString::Format("1st momentum, MeV = %f #pm %f", mean.X(), mean.Y());
  CanvasHelper::addTextToStats(str.Data(), pad2);
  str = TString::Format("2nd momentum, MeV = %f #pm %f", dispersion.X(), dispersion.Y());
  CanvasHelper::addTextToStats(str.Data(), pad2);
  str = TString::Format("Resolution (real), %% = %f #pm %f", resolution.X(), resolution.Y());
  CanvasHelper::addTextToStats(str.Data(), pad2);

  // gauss->Draw("SAME");

  // Align statistics box
  TPave *pave2 = CanvasHelper::getDefaultPaveStats(pad2);
  CanvasHelper::setPaveAlignment(pave2, kPaveAlignRight | kPaveAlignTop);
  //  CanvasHelper::getInstance()->addCanvas(pad2);

  CanvasHelper::getInstance()->addCanvas(canvas);

  return 1;
}

#ifndef __CINT__

int main(int argc, char **argv) {
  // Instantiate TApplication
  TApplication *app = new TApplication("beamHist3x3", &argc, argv);

  beamHist3x3();

  // Enter the event loop
  app->Run();
  // Return success
  return 0;
}

#endif
