pipeline {
    agent any
    stages {
        stage('Checkout') {
            steps {
                git 'https://github.com/Podmoskovnykh/Caesar_Cipher.git'
            }
        }

        stage('Build') {
            steps {
                script {
                    sh 'g++ -o caesar_cipher caesar_cipher.cpp'
                }
            }
            post {
                success {
                    archiveArtifacts 'caesar_cipher'
                    echo 'Build successful.'
                }
                failure {
                    echo 'Build failed.'
                }
            }
        }
    }
}
