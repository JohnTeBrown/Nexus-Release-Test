import tarfile
import os

os.system("pip install tarfile")
def extract_tar_archive(archive_file, dest_dir):
    with tarfile.open(archive_file, 'r:gz') as tar:
        tar.extractall(dest_dir)

archive_file = '../../src/test/build/archive.tar.gz'
dest_dir = '~/Desktop'
extract_tar_archive(archive_file, dest_dir)
