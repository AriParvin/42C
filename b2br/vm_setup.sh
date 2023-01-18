# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    vm_setup.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 17:11:53 by aparvin           #+#    #+#              #
#    Updated: 2023/01/11 14:01:36 by aparvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VBoxManage createvm --name b2br --ostype Debian_64 --register 
VBoxManage modifyvm b2br --memory 2048 
VBoxManage createhd --filename /path/to/hdi --size 2048 --variant Standard
#Create Storage Controller and mount it to HDD
VBoxManage storagectl b2br --name "SATA Controller" --add sata --bootable on
VBoxManage storageattach b2br --storagectl "SATA Controller" --port 0 --device 0 --type hdd -medium /path/to/hdi/.vdi
#Create IDE Controller to read OS Image from .iso
VBoxManage storagectl b2br --name "IDE Controller" --add ide
VBoxManage storageattach b2br --storagectl "IDE Controller" --port 0 --device 0 --type dvddrive --medium /path/to/iso
