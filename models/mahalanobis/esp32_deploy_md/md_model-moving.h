#ifndef MD_MODEL-MOVING_H
#define MD_MODEL-MOVING_H

const unsigned int model_mu_dim1 = 3;

const float model_mu[3] = {
    0.2977504046314741, 0.7341804656374502, 0.14366362674302788
};

const unsigned int model_inv_cov_dim1 = 3;
const unsigned int model_inv_cov_dim2 = 3;

const float model_inv_cov[3][3] = {
    107.06526192075366, -21.421930901670905, -17.1688430916071, 
    -21.421930901670894, 15.462538258586067, -30.25057410092039, 
    -17.168843091607116, -30.25057410092039, 678.1719890960892
};

#endif //MD_MODEL-MOVING_H